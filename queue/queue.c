#include "queue.h"
#include <stdio.h>

void initQueue(struct queue *q) {
  q->front = 0;
  q->rear = 0;
  q->count = 0;
}
int queueIsFull(struct queue *q) { return q->count == MAX_QUEUE_SIZE; }

int queueIsEmpty(struct queue *q) { return q->count == 0; }

void enqueue(struct queue *q, void *item) {
  if (queueIsFull(q)) {
    printf("queue is full\n");
  } else {
    q->items[q->rear] = item;
    q->count++;
    if (q->rear < MAX_QUEUE_SIZE - 1) {
      q->rear++;
    } else {
      q->rear = 0;
    }
  }
}

void *dequeue(struct queue *q) {
  if (queueIsEmpty(q)) {
    printf("queue is empty\n");
    return NULL;
  }
  void *value = q->items[q->front];
  q->items[q->front] = NULL;
  q->count--;
  if (q->front < MAX_QUEUE_SIZE - 1) {
    q->front++;
  } else {
    q->front = 0;
  }
  return value;
}

void *front(struct queue *q) {
  if (q->count == 0) {
    printf("queue is empty\n");
    return NULL;
  }
  return q->items[q->front];
}
