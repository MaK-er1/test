#include <stdio.h>

void delay(u8 x)
{
  u8 i,y;
  for(i=x;i>0;i--)
    for(y=120;y>0;y--);
}

int main()
{
  delay();
  return 0;
}
