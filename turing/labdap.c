
#include<stdio.h>
#include<math.h>
#define SZEL 78   //meghatározzuk az ablak méreteit
#define MAG 22

int putX(x,y)
{
 int i;
 for(i=0;i<x;i++) //meginditjuk az i-t novekedni, amíg kisebb mint az x
  printf("\n");  //kiiratunk sortöréseket
 for(i=0;i<y;i++)  //itt addig növeljuk, mig az y-nél kisebb
  printf(" ");  //kiir "spaceket"
 printf("X\n"); //kiiir egy X-et (ez jelképezi a labdát) és egy sortörést
return 0;
}

int main()
{
 long int x=0,y=0;  //létrehozzuk az xet és yont, értékeinek 0-át adunk
 while(1)  //végtelen ciklus a while-ban
 {
  system("clear");  //letöröljük a képernyőt
  putX(abs(MAG-(x++%(MAG*2))),abs(SZEL-(y++%(SZEL*2))));  //meghívjuk a "putX"-et
  usleep(50000);	//késlelteti a folyamat lefutását
 }
return 0;
}

//és pattog a labda a kijelölt ablakban, amíg manuálisan le nem állítjuk