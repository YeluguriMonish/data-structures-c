#include <stdio.h>
#define MAX_SIZE 100

struct stack {
  void *items[MAX_SIZE];
  int top;
};
