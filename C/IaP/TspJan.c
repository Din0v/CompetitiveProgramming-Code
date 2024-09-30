#include <stdio.h>
#define SIZE 10

int graph[SIZE][SIZE] = {
  {0, 2, 0, 5, 0, 0, 0, 0, 0, 0},
  {2, 0, 3, 0, 0, 0, 0, 0, 0, 0},
  {0, 3, 0, 4, 5, 0, 0, 0, 0, 0},
  {5, 0, 4, 0, 3, 0, 0, 0, 0, 0},
  {0, 0, 5, 3, 0, 6, 0, 0, 0, 0},
  {0, 0, 0, 0, 6, 0, 7, 0, 0, 0},
  {0, 0, 0, 0, 0, 7, 0, 8, 0, 0},
  {0, 0, 0, 0, 0, 0, 8, 0, 9, 0},
  {0, 0, 0, 0, 0, 0, 0, 9, 0, 10},
  {0, 0, 0, 0, 0, 0, 0, 0, 10, 0}
};

int visited[SIZE];

int nextNode(int currentNode) {
  int minDistance = INT_MAX, minIndex;

  for (int i = 0; i < SIZE; i++) {
    if (visited[i] == 0 && graph[currentNode][i] != 0) {
      int distance = graph[currentNode][i];
      if (distance < minDistance) {
        minDistance = distance;
        minIndex = i;
      }
    }
  }

  return minIndex;
}

void tsp(int currentNode) {
  visited[currentNode] = 1;
  printf("%d ", currentNode + 1);
  int next = nextNode(currentNode);
  if (next == -1) {
    printf("%d\n", 1);
    return;
  }
  tsp(next);
}

int main() {
  printf("Solution Exists: ");
  tsp(0);
  return 0;
}