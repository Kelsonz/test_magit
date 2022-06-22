#include <stdio.h>

/* 你好世界 */

int func(int x);
int guess_number(int x,int y);
/* 在 vs 中的确各方面相应会快一点，但是操作难度会上升好多，键位也不能完全复刻 Emacs，这是我比较想要请教的问题 */
/* 长条注释也可以 ************************************************************/

/*****************************************************************************/
/*                                 盒形也可以                               */
/*****************************************************************************/

int set_key(char* str)
{
	return 12;
}

int main(int argc, char *argv[])
{
  int x = 1;
  x = func(x);
  int y = func(x + 12);
  x = guess_number(x, y);
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
