#include <stdio.h>

#define LEN 100

int p = 0;
double val[LEN];

int push(double n) {
  if (p < LEN) {
    val[p++] = n;
  } else {
    printf("Error: stack full.");
  }
}

double pop() {
  if (p > 0) {
    return val[--p];
  } else {
    printf("Error: stack empty.");
    return 0.0;
  }
}