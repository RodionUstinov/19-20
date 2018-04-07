// simple calculate
#include <stdio.h>

int main (void){

float a, b;
char oper;

scanf("%f %c", &a, &oper);

if( oper == 'S')
{
    printf("%.6f \n", a);
    while( oper != 'E' )
    {
        scanf("%f %c", &b, &oper);
        switch(oper)
        {
             case '+':
                 printf("= %.6f\n", a += b );
                 break;
             case '-':
                 printf("= %.6f\n", a -= b );
                 break;
             case '*':
                 printf("= %.6f\n", a *= b );
                 break;
             case '/':
                 if( b == 0 )
                 {
                     printf("No\n");
                 }
                 else
                 printf("= %.6f\n", a /= b );
                 break;

             case 'E':
                printf("Answer: %.6f\n", a);
                break;

             default:
                if (oper != 'E' && oper != 'S')
                {
                    printf("Unknown operator\n");
                }
        }
    }
}
else printf("Unknown operator\n");

return 0;
}
