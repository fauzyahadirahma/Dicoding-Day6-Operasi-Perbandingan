/* File         : relasional.c */
/* Penulis      : Fauzyah Hadirahma, email faubelajar@gmail.com */
/* Deskripsi    : contoh perbandingan nilai numerik */

#include <stdio.h>
int main ()
{
    /* KAMUS */
    int X = 5;
    int Y = 8;
    
    /* PROGRAM */
    printf ("Hasil X < Y  : %d \n", X < Y );
    printf ("Hasil X > Y  : %d \n", X > Y );
    printf ("Hasil X <= Y : %d \n", X <= Y );
    printf ("Hasil X >= Y : %d \n", X >= Y );
    printf ("Hasil X == Y : %d \n", X == Y ); /* Operator kesamaan : == */
    printf ("Hasil X != Y : %d \n", X != Y ); /* Operator ke-tidak-samaan : != */
    
    printf ("Hasil X == X : %d \n", X == X ); /* Operator kesamaan : == */
    printf ("Hasil X != X : %d \n", X != X ); /* Operator ke-tidak-samaan : != */
    
    return 0;
}
