#include <stdio.h>

    int main(){
    int n , triangularnumber;

    for ( n = 5 ; n <= 50 ; n = n + 5 ) {
      triangularnumber = n*(n+1)/2 ;
      printf("Triangular number %i is %i \n",n,triangularnumber);
    }
    return 0;
}
