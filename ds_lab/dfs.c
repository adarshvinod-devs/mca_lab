#include <stdio.h>

int main() {
  int i, j, count;
  printf("Enter the number of elements:");
  scanf("%d", &count);
  int graph[count][count];
  for (i = 0; i < count; i++) {
    for (j = 0; j < count; j++) {
      printf("Enter value of position %d , %d (either 1 or 0)", i, j);
      scanf("%d", &graph[i][j]);
    }
  }

  return 0;
}
