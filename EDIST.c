#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SENTINEL (-1)
#define EDIT_COST (1)

int minimum(int a, int b, int c)
{
    int min = c;
    if( a < b ) {
        if( a < c ) {
            min = a;
        }
    } else {
        if( b < c ) {
            min = b;
        }
    }
    return min;
}

int edit_distance( char *X, char *Y )
{
    int cost = 0;
    int currentCell;
    int leftCell, topCell, cornerCell;
    int m = strlen(X) + 1;
    int n = strlen(Y) + 1;
    int *table = (int *)malloc( (m) * (n) * sizeof(int) );
    int i, j;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            *(table + i * n + j) = SENTINEL;
    *table = 0;
    for (i = 1; i < m; i++)
        *(table + i * n) = i;
    for (j = 1; j < n; j++)
        *(table + j) = j;

    for (i = 1; i < m; i++) {
        for (j = 1; j < n; j++) {
            leftCell = *( table + (i-1)*n + j );
            leftCell += EDIT_COST;
            topCell = *( table + i*n + (j-1) );
            topCell += EDIT_COST;
            cornerCell = *( table + (i-1)*n + (j-1) );
            cornerCell += (X[i-1] != Y[j-1]);
            currentCell = minimum(leftCell, topCell, cornerCell);
            *( table + (i)*n + (j) ) = currentCell;
        }
    }
    cost = *(table + (m * n) - 1);
    free(table);
    return cost;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) {
        char X[3005];
        char Y[3005];
        scanf("%s%s",X,Y);
        printf("%d\n",edit_distance( X, Y ));
    }
    return 0;
}
