//Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>
int main()
{
    int i, j, martix[10][10], rows, cols;
    printf ("Enter the number of rows and columns : ");
    scanf ("%d %d", &rows, &cols);
    for (i=0; i<rows; i++)
    {
        for (j=0; j<cols; j++)
        {
            scanf ("%d", &matrix[i][j]);
        }
    }
    if (rows!=cols)
    {
        printf ("The given Matrix is not a square matrix, hence the diagonal elements cannot be distinct.\n");
        return 1;
    }
    if (rows=cols)
    {
        for ()
    }
}