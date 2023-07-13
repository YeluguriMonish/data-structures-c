#include <stdio.h>
#include "stack.h"

void init_stack(struct stack *st) { st->top = -1; }

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
  }
  void *value = st->items[st->top];
  st->top--;
  return value;
}

void *top(struct stack *st) {
  if (isEmpty(st)){
    printf("stack is empty");
    return NULL;
  }
  void *value = st->items[st->top];
  return value;
}
