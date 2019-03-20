#include <stdio.h>
#include <stdlib.h>

int
main ()
{
    int nr = 5; //sorok száma
    double **tm;    //deklaráció
    
    printf("%p\n", &tm);
    

    //az if ben a mallok értékként 5*8=40-et kap
    if ((tm = (double **) malloc (nr * sizeof (double *))) == NULL) 
    {
        return -1;  //ha a feltétel teljesül kilép
    }

    printf("%p\n", tm);
    
    for (int i = 0; i < nr; ++i)    //a for 0-tól megy nr(5)-ig
    {
        if ((tm[i] = (double *) malloc ((i + 1) * sizeof (double))) == NULL) //sziasztok hekkerek!
        {
            return -1;
        }

    }

    printf("%p\n", tm[0]);    
    
    for (int i = 0; i < nr; ++i)
        for (int j = 0; j < i + 1; ++j)
            tm[i][j] = i * (i + 1) / 2 + j;

    for (int i = 0; i < nr; ++i)
    {
        for (int j = 0; j < i + 1; ++j)
            printf ("%f, ", tm[i][j]);
        printf ("\n");
    }

    tm[3][0] = 42.0;
    (*(tm + 3))[1] = 43.0;	
    *(tm[3] + 2) = 44.0;
    *(*(tm + 3) + 3) = 45.0;

    for (int i = 0; i < nr; ++i)
    {
        for (int j = 0; j < i + 1; ++j)
            printf ("%f, ", tm[i][j]);
        printf ("\n");
    }

    for (int i = 0; i < nr; ++i)
        free (tm[i]);

    free (tm);

    return 0;
}
