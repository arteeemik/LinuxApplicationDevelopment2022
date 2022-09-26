#include <stdio.h>

int main (void)
{
  char line[1024];
  fgets(line, 1024, stdin);
  printf("Hello, %s!\n", line);
  return 0;
}
