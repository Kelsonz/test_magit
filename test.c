#include <stdio.h>

/* 你好世界 */

int func(int x);
int guess_number(int x, int y);

int main(int argc, char *argv[])
{
  int x = 1;
  x = func(x);
  x = guess_number(x, 12);
  printf("Hello, World!\n");
  return 0;
}

int guess_number(int x, int y)
{
  return x + y*2;
}

int func(int x)
{
  return x+12;
}
