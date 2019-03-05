//A PageRank lényege, mit a neve is mondja osztájozza asz oldalakat "hasznosságuk" alapján
//pontosan, hogy egy oldalra hány másik mutat valamint az adott oldal hány másikra mutat
//Ez a program 4 adott oldalnak határozza meg a page rank értékéét



#include <stdio.h>
#include <math.h>

//ebben a fügvényben kiírjuk a kapott értékekekt, deklaráció szerint a
//függvény egy többe írja az értékeket, valamint kéri az oladalk számát
void kiir (double tomb[], int db) 
{
  int i;

  for (i = 0; i < db; ++i)
    printf ("%f\n", tomb[i]);
}

double tavolsag (double PR[], double PRv[], int n)
{
  double osszeg = 0.0;
  int i;

  for (i = 0; i < n; ++i)
    osszeg += (PRv[i] - PR[i]) * (PRv[i] - PR[i]);

  return sqrt(osszeg);
}

int main (void)
{
//megadjuk a mátricot, maiben rögzítjük a kapcsolatok számát az oldalak között
  double L[4][4] = {
    {0.0, 0.0, 1.0 / 3.0, 0.0},
    {1.0, 1.0 / 2.0, 1.0 / 3.0, 1.0},
    {0.0, 1.0 / 2.0, 0.0, 0.0},
    {0.0, 0.0, 1.0 / 3.0, 0.0}
  };

  double PR[4] = { 0.0, 0.0, 0.0, 0.0 };
  double PRv[4] = { 1.0 / 4.0, 1.0 / 4.0, 1.0 / 4.0, 1.0 / 4.0 };

  int i, j;

  for (;;)  //végtelen ciklus (később a programban leállítjuk)
    {

      for (i = 0; i < 4; ++i) //az i megy 1-től 4-ig (mert ez esetben 4 oldal van)
	{
	  PR[i] = 0.0;
	  for (j = 0; j < 4; ++j)
	    PR[i] += (L[i][j] * PRv[j]);
	}
      if (tavolsag (PR, PRv, 4) < 0.00000001)
	break; //ha az if igaz leáll a vegtelen ciklus

      for (i = 0; i < 4; ++i)
	PRv[i] = PR[i];  //másolást hajtunk végre a két tömbben

    }

  kiir (PR, 4); //meghivjuk a kiir függvényt

  return 0;
}
