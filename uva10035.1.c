
#include "stdio.h"

int main() {
  unsigned int x, y, i, rx, ry, num_carry, sum;
  bool carry;

  while (1) {
    scanf("%d %d", &x, &y);

    if (x == 0 && y == 0) {
      break;
    }

    carry = 0;
    num_carry = 0;

    for (i = 0; i < 9; i += 1) {
      rx = x % 10;
      x = x / 10;

      ry = y % 10;
      y = y / 10;

      sum = rx + ry + carry;

      if (sum > 9) {
        carry = 1;
        num_carry += 1;
      }
      else {
        carry = 0;
      }
    }

    if (num_carry > 1) {
      printf("%d carry operations.\n", num_carry);
    }
    else if (num_carry == 1) {
      printf("1 carry operation.\n");
    }
    else {
      printf("No carry operation.\n");
    }
  }

  return 0;
}
