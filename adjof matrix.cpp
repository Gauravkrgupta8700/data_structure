#include<stdio.h>
#include<stdlib.h>
struct graph
{
	int v,e;
	int **adj;
};
struct graph *adjofgraph()
{
	int u,v,i;
	struct graph *g=(struct graph*)malloc(sizeof(struct graph));
	if(!g)
	{
		printf("memory error\n");
		return 0;
	}
	printf("enter no of nodes and no of edges");
	scanf(" %d %d",&g->v,&g->e);
//	g->adj = malloc(sizeof(int)*((g->v)*2));
	for(u=0;u<g->v;u++)
	for(v=0;v<g->v;v++)
	g->adj[u][v]=0;
	printf("enter node number in a pair that connects an edge");
	for(i=0;i<g->e;i++)	
{
	scanf("%d""%d",&u,&v);
	g->adj[u][v]=1;
	g->adj[v][u]=1;
}
	return(g);
}
int main()
{
adjofgraph();
return 0;
}
