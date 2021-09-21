#include <stdio.h>
#include<math.h>
int main()
{
  int a, b, c;
  double t, t2, s;

  printf("\n A háromszög oldalai: ");

  scanf("%d, %d, %d", &a, &b, &c);

  s = (double)(a + b + c) / 2;

  t2 = s*(s-a)*(s-b)*(s-c);

  t = sqrt(t2);

  printf("\nA háromszög területe: %.2f, kerülete: %d\n", t, a+b+c);

  return 0;
}
