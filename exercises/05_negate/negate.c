#include <stdio.h>

/*
 * negate - return -x
 *   Example: negate(1) = -1.
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 5
 *   Rating: 2
 */
int negate(int x) {
  return ~x + 1;    //INT_MIN由于补码是 1000 …… 0000，按位取反加 1 后数值不变
}

int main(void) {
  int x;
  if (scanf("%d", &x) != 1)
    return 1;
  printf("%d\n", negate(x));
  return 0;
}
