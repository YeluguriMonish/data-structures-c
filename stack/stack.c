#include "stack.h"
#include <stdio.h>

void initStack(struct stack *st) { st->top = -1; }

int stackIsFull(struct stack *st) { return st->top == MAX_STACK_SIZE - 1; }

int stackIsEmpty(struct stack *st) { return st->top == -1; }

void push(struct stack *st, void *item) {
  if (stackIsFull(st)) {
    printf("stack is full");
  } else {
    st->top++;
    st->items[st->top] = item;
  }
}

void *pop(struct stack *st) {
  if (stackIsEmpty(st)) {
    printf("stack is empty");
    return NULL;
  }
  void *value = st->items[st->top];
  st->top--;
  return value;
}

void *top(struct stack *st) {
  if (stackIsEmpty(st)) {
    printf("stack is empty");
    return NULL;
  }
  void *value = st->items[st->top];
  return value;
}
