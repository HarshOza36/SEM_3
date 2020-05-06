#include<stdio.h>
#include<conio.h>
#define MAX 5

void bfs(int adj[][MAX],int visited[],int start)
{
    int que[MAX],i,f=-1,r=-1;
    r++;
    que[r]=start;
    visited[start]=1;
    while(r!=f)
    {
        f++;
        start=que[f];
        printf(" %c ",start+65);
        for(i=0;i<MAX;i++)
        {
            if(adj[start][i]==1 && visited[i]==0)
            {

                r++;
                que[r]=i;
                visited[i]=1;
            }
        }
    }
}


void dfs(int adj[][MAX],int visited[],int start)
{
    int stack[MAX];
    int top=-1,i;
    printf(" %c ",start+65);
    visited[start]=1;
    stack[++top]=start;
    while(top!=-1)
    {
        start=stack[top];
        for(i=0;i<MAX;i++)
        {
            if(adj[start][i]==1 && visited[i]==0)
            {
              stack[++top]=i;
              printf(" %c ",i+65);
              visited[i]=1;
              break;
            }
        }
     if(i==MAX)
        top--;

    }
}




int main()
{
    int visitedb[MAX]={0};
    int visitedd[MAX]={0};	
    int adj[MAX][MAX],i,j;
    printf("Enter the adjacency matrix\n>>>\n");
    for(i=0;i<MAX;i++)
        for(j=0;j<MAX;j++)
            scanf("%d",&adj[i][j]);
            printf("\nBFS Traversal>>>");
            bfs(adj,visitedb,0);
            printf("\nDFS Traversal>>>");
            dfs(adj,visitedd,0);
			
            return 0;
}


/*

Entered adjacency matrix
01010
10110
01001
11001
00110
*/



