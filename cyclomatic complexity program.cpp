#include <stdio.h>

int calculateCyclomaticComplexity(int edges, int nodes)
{
    int complexity = edges - nodes + 2;
    return complexity;
}

int main()
{
    int edges, nodes;
    printf("Enter the number of edges: ");
    scanf("%d", &edges);
    printf("Enter the number of nodes: ");
    scanf("%d", &nodes);

    int cyclomaticComplexity = calculateCyclomaticComplexity(edges, nodes);
    printf("The cyclomatic complexity is: %d\n", cyclomaticComplexity);

    return 0;
}


