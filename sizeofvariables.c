#include<stdio.h>

int main()
{
  int a = 365;
char b = 'x';
float c = 1.87;
double d = 3.3784738;
  // print value and size of an int variable
  printf("int a value: %d and size: %d bytes\n", a, sizeof(a));
  printf("char b value: %d and size: %d bytes\n", b, sizeof(b));
  printf("float c value: %d and size: %d bytes\n", c, sizeof(c));
  printf("double d value: %d and size: %d bytes\n", d, sizeof(d));

}

