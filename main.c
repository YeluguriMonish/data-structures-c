#include "queue/queue.h"
#include <stdio.h>

int main() {
  struct queue q;
  int value = 5, *i = &value;
  initQueue(&q);
  enqueue(&q, i);

  int four = 4, *j = &four;
  enqueue(&q, j);

  void *f = front(&q);

  printf("front: %d\n", *(int *)f);

  dequeue(&q);
  f = front(&q);
  printf("front: %d\n", *(int *)f);

  return 0;
}
