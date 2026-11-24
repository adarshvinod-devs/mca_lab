#include <stdio.h>
int count;

void dfs(int vertex, int visited[], int graph[count][count]) {
  visited[vertex] = 1;
  printf("%d/n", vertex);
  for (int i = 0; i < count; i++) {
    if (graph[vertex][i] && !visited[i]) {
      dfs(i, visited, graph);
    }
  }
}

int main() {
  int i, j;
  printf("Enter the number of elements:");
  scanf("%d", &count);
  int graph[count][count];
  for (i = 0; i < count; i++) {
    for (j = 0; j < count; j++) {
      printf("Enter value of position %d , %d (either 1 or 0):", i, j);
      scanf("%d", &graph[i][j]);
    }
  }
  int visited[count];
  for (int i = 0; i < count; i++) {
    visited[i] = 0;
  }
  dfs(0, visited, graph);
  return 0;
}
