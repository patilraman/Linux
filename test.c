#include <stdio.h>
#include <stdlib.h>

void main()
{
  int a,b,c;
  a = 10;
  b = 11;
  c = 12;
  a +=b;
  b +=c;
  c +=a;
  printf("a=%d,b=%d,c=%d\n", a,b,c);
}
