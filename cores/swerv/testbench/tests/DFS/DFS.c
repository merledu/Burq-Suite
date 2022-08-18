#include<stdio.h>
 
int G[4][4]={{1,0,1,0},{0,1,1,0},{1,1,1,0},{0,1,0,1}},visited[4],n=4; 

void DFS(int i)
{
    int j;

    visited[i]=1;
for(j=0;j<n;j++)
       if(!visited[j]&&G[i][j]==1)
            DFS(j);
}
void main()
{
    int i,j;
    
    //visited is initialized to zero
   for(i=0;i<n;i++){
        visited[i]=0;}
    DFS(0);
}
