/*

Develop a Program in C for the following operations on Graph(G)
of Cities 
a. Create a Graph of N cities using Adjacency Matrix. 
b. Print all the nodes reachable from a given starting node in a
digraph using DFS/BFS method
*/
















#include<stdio.h> 
#include<stdlib.h> 
int n,i,j,a[25][25],visited[20], source,f = 0, r = -1, queue[20];

void DFS(int v) 
{ 
	visited[v]=1; 
	printf("%d  ",v); 
	for(i=0;i<n;i++) 
		{ 
		if(a[v][i]==1 && visited[i]==0)  
			DFS(i); 
		}
}



 void BFS(int v) 
{ 
    int u; 
    queue[++r] = v; 
    visited[v] = 1; 
    printf("%d  ", v); // Print the starting node
    while (f <= r) 
    { 
        u = queue[f++]; 
        for (i = 0; i < n; i++) 
        { 
            if (a[u][i] == 1 && visited[i] == 0) 
            { 
                queue[++r] = i; 
                visited[i] = 1; 
                printf("%d  ", i); 
            } 
        } 
    } 
}





int main() 
{ 
		printf("\nEnter the number of vertex..\n ");
		scanf("%d",&n);
		printf("\nEnter Adjecency matrix..\n "); 
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				scanf("%d",&a[i][j]);
			
		for(i=0;i<n;i++)
			visited[i]=0;
		
		printf("\nEnter source..\n "); 
		scanf("%d",&source); 
		for (i = 0; i < n; i++) 
        visited[i] = 0;
    
		printf("\nDFS:");
		DFS(source);
		
		for (i = 0; i < n; i++) 
        visited[i] = 0;
		printf("\nBFS:");
		BFS(source);
		return 0;
}

/*
Enter the number of vertex..
 6
Enter Adjecency matrix..
0 1 1 0 0 1
1 0 0 0 1 0
1 0 0 0 1 0
0 0 0 0 0 1
1 0 1 0 0 0
1 0 0 1 0 0

Enter source..
3

DFS:3  5  0  1  4  2
BFS:3  5  0  1  2  4





Enter the number of vertex..
4
Enter Adjecency matrix..
0 1 0 0
0 0 1 0
0 0 0 1
1 0 0 0
Enter source..
0

DFS:0  1  2  3
BFS:0  1  2  3
*/