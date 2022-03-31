// Program treba naci determinantu matrice.

#include <stdio.h>

int main()
{
    int A[2][2];
    int red, stupac;
    long det;

    /*
     	Ucitavamo elemente.
     */
    printf("\nUnesi vrijednosti matrice: \n");
        for(red = 0; red<2; red++)
        {
            for(stupac = 0; stupac<2; stupac++)
            {
                 printf("\nUnesi vrijednost A[%d][%d] : ",red,stupac);
                 scanf("%d", &A[red][stupac]);
        }
    }

    /*
     * det(A) = ad - bc
     * a = A[0][0], b = A[0][1], c = A[1][0], d = A[1][1]
     */
    det = (A[0][0] * A[1][1]) - (A[0][1] * A[1][0]);

    printf("\nDeterminanta od matrice A je = %ld ", det);

    return 0;
}
