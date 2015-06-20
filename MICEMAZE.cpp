#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<string>
#include<algorithm>
#include<functional>
#include<iomanip>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<cassert>
#include<climits>
using namespace std;

int V,ex,tim;
#define INF 99999

void printSolution(int dist[][105])
{
    int count=0;
    for (int i = 0; i < V; i++)
    {
         if(dist[i][ex-1] <=tim)count++;
    }
    printf("%d\n",count);
}

void floydWarshell (int graph[][105])
{
    /* dist[][] will be the output matrix that will finally have the shortest
      distances between every pair of vertices */
    int dist[105][105], i, j, k;

    /* Initialize the solution matrix same as input graph matrix. Or
       we can say the initial values of shortest distances are based
       on shortest paths considering no intermediate vertex. */
    for (i = 0; i < V; i++)
        for (j = 0; j < V; j++)
            dist[i][j] = graph[i][j];

    /* Add all vertices one by one to the set of intermediate vertices.
      ---> Before start of a iteration, we have shortest distances between all
      pairs of vertices such that the shortest distances consider only the
      vertices in set {0, 1, 2, .. k-1} as intermediate vertices.
      ----> After the end of a iteration, vertex no. k is added to the set of
      intermediate vertices and the set becomes {0, 1, 2, .. k} */
    for (k = 0; k < V; k++)
    {
        // Pick all vertices as source one by one
        for (i = 0; i < V; i++)
        {
            // Pick all vertices as destination for the
            // above picked source
            for (j = 0; j < V; j++)
            {
                // If vertex k is on the shortest path from
                // i to j, then update the value of dist[i][j]
                if (dist[i][k] + dist[k][j] < dist[i][j])
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }

    // Print the shortest distance matrix
    printSolution(dist);
}

/* A utility function to print solution */

// driver program to test above function
int main()
{
    scanf("%d%d%d",&V,&ex,&tim);
    int num;
    scanf("%d",&num);
    int graph[105][105];
    for(int i=0;i<V;i++)
        for(int j=0;j<V;j++)
            graph[i][j]=INF;
    graph[ex-1][ex-1]=0;
    int a,b,x;
    while(num--) {
       scanf("%d%d%d",&a,&b,&x);
       graph[a-1][b-1]=x;
    }
    floydWarshell(graph);
    return 0;
}
