#include<stdio.h>
int a[4][4]={{1,0,1,0},{0,1,1,0},{1,1,1,0},{0,1,0,1}}, q[20], visited[20], n=4, i, j, f = 0, r = -1;

void bfs(int v) {
 for(i = 1; i <= n; i++)
 if(a[v][i] && !visited[i])
 q[++r] = i;
 if(f <= r) {
 visited[q[f]] = 1;
 bfs(q[f++]);
 }
}

void main() {
 int v=1;
 
 
 for(i=1; i <= n; i++) {
 q[i] = 0;
 visited[i] = 0;
 }
 
 
 bfs(v);
 
 
 
}