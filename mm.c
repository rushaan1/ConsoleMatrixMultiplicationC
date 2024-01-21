#include <stdio.h>
void main()
{
    int ma[3][3] = {
                    {0,0,0},
                    {0,0,0},
                    {0,0,0}
                            };
    int mb[3][3] = {
                    {0,0,0},
                    {0,0,0},
                    {0,0,0}
                            };

    int mc[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
    int n = 3;
    for (int i = 0; i<n; i++)
    {
        for (int j = 0; j<n; j++)
        {
            printf("Matrix 1: Enter row %d column %d:\n", i, j);
            scanf("%d", &ma[i][j]);
        }
    }
    for (int i = 0; i<n; i++)
    {
        for (int j = 0; j<n; j++)
        {
            printf("Matrix 2: Enter row %d column %d:\n", i, j);
            scanf("%d", &mb[i][j]);
        }
    }
    for (int i = 0; i<n; i++)
    {
        int nm[3] = {0,0,0};
        for (int j = 0; j<n; j++)
        {
            for (int k = 0; k<n; k++)
            {
                nm[j] += (ma[i][k]*mb[k][j]);
            }
        }
        for (int k = 0; k<n; k++)
        {
            mc[i][k] = nm[k];
        }
    }
    for (int i = 0; i<n; i++)
    {
        for (int k = 0; k<n; k++)
        {
            printf("%d\t",mc[i][k]);
        }
        printf("\n");
    }
}
