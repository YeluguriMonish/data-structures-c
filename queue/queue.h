#define MAX_QUEUE_SIZE 5

struct queue {
  void *items[MAX_QUEUE_SIZE];
  int rear;
  int front;
  int count;
};

void initQueue(struct queue *q);

int queueIsFull(struct queue *q);

int queueIsEmpty(struct queue *q);

void enqueue(struct queue *q, void *item);

void *dequeue(struct queue *q);

void *front(struct queue *q);
