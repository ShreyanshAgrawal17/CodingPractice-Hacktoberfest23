#include <stdio.h>
void creatematrix(int r, int c, int A[][c])
{
    int i, j;
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
}
void display(int r, int c, int A[][c])
{
    int i, j;
    for (i = 1; i <= r; i++)
    {
        printf("\n");
        for (j = 1; j <= c; j++)
        {
            printf("%d ", A[i][j]);
        }
    }
}
int isSparseMatrix(int r, int c, int A[][c])
{
    int count = 0;
    int totalElements = r * c;

    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if (A[i][j] == 0)
                count++;
        }
    }

    if (count > totalElements / 2)
        return 1; // Matrix is sparse
    else
        return 0; // Matrix is not sparse
}

int main()
{
    int r, c;
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);
    int A[r][c];
    creatematrix(r, c, A);
    display(r, c, A);
    printf("\n");
    if (isSparseMatrix(r, c, A))
    {
        printf("The matrix is a sparse matrix.\n");
    }
    else
    {
        printf("The matrix is not a sparse matrix.\n");
    }

    return 0;
}
