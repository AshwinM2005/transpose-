#include <stdio.h>

int main()
{
    int a, b;
    int t[10][10], x[10][10], i, j;
    void transpose(int t[10][10], int x[10][10], int a, int b);

    printf("Enter the number of rows and columns: ");
    scanf("%d%d", &a, &b);

    // scanning input
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf("Enter (%d,%d) Number - ", i + 1, j + 1);
            scanf("%d", &t[i][j]);
        }
    }

    // print matrix
    printf("Original Matrix:\n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf("%-3d ", t[i][j]);
        }
        printf("\n");
    }

 transpose (t, x, a, b);

    return 0;
}

void transpose ( int t[10][10], int x[10][10], int a, int b )
    // transpose matrix
  { int i ,j;
     for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            x[j][i] = t[i][j];
        }
    }

    // print transpose
    printf("Transposed Matrix:\n");
    for (i = 0; i < b; i++)
    {
        for (j = 0; j < a; j++)
        {
            printf("%-3d ", x[i][j]);
        }
        printf("\n");
    }
  }