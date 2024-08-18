#include <stdio.h>
#include <stdlib.h>
int visit[7] = {0, 0, 0, 0, 0, 0, 0};
int a[7][7] = {
    {0, 1, 1, 1, 0, 0, 0},
    {1, 0, 1, 0, 0, 0, 0},
    {1, 1, 0, 1, 1, 0, 0},
    {1, 0, 1, 0, 1, 0, 0},
    {0, 0, 1, 1, 0, 1, 1},
    {0, 0, 0, 0, 1, 0, 0},
    {0, 0, 0, 0, 1, 0, 0}};

void dfs(int i)
{
    int j;
    printf("%d ", i);
    visit[i] = 1;
    for (j = 0; j < 7; j++)
    {
        if (a[i][j] == 1 && !visit[j])
        {
            dfs(j);
        }
    }
}

int main()
{
    dfs(3);
    for (int i=0;i<7;i++){
        // printf("%d ",i);
    }
}