#define MAX_SIZE 100

struct stack {
  void *items[MAX_SIZE];
  int top;
};

void init(struct stack *st);

int isFull(struct stack *st);

int isEmpty(struct stack *st);

void push(struct stack *st, void *ptr);

void *pop(struct stack *st);

void *top(struct stack *st);
