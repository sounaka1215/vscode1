#include <stdio.h>
#include <string.h>

int main(void) {
  char str[] = "hello";
  printf("%s\n", str);
  printf("%ld\n", strlen(str));
  getchar();
  return 0;
}