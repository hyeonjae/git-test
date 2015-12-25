#include <stdio.h>

void say_hello(const *msg) {
  printf("%s\n", msg);
  return 0;
}

int main() {
  say_hello("hello world");
}
