#include <stdio.h>
#define MAX_SIZE 100

struct stack {
  void *items[MAX_SIZE];
  int top;
};

void init(struct stack *st) { st->top = -1; }

int isFull(struct stack *st) { return st->top == MAX_SIZE - 1; }

int isEmpty(struct stack *st) { return st->top == -1; }

void push(struct stack *st, void *ptr) {
  if (isFull(st)) {
    printf("stack is full");
  } else {
    st->top++;
    st->items[st->top] = ptr;
  }
}

void *pop(struct stack *st) {
  if (isEmpty(st)) {
    printf("stack is empty");
    return NULL;
  } else {
    void *value = st->items[st->top];
    st->top--;
    return value;
  }
}

int main() {
  struct stack example;
  init(&example);
  int i = 5;
  int *value = &i;
  push(&example, value);
  push(&example, value);
  return 0;
}
