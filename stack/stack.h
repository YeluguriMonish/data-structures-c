#define MAX_STACK_SIZE 100

struct stack {
  void *items[MAX_STACK_SIZE];
  int top;
};

void initStack(struct stack *st);

int stackIsFull(struct stack *st);

int stackIsEmpty(struct stack *st);

void push(struct stack *st, void *item);

void *pop(struct stack *st);

void *top(struct stack *st);
