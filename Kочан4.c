#include <stdio.h>

int main ()
{
    int n,f;
    n = 1;
  for( f = 1; f <= 10 ; ++f){
        n *= f;
        printf("%i! is %i \n", f,n);
  }


return 0;
}
