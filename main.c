#include "stack/stack.h"
#include <stdio.h>

int main() {
  struct stack st;
  init(&st);
  int i = 5;
  int *ptr = &i;
  push(&st, ptr);
  void *pt;
  pt = pop(&st);
  int *test = (int *)pt;
  printf("%d", *test);
  return 0;
}
