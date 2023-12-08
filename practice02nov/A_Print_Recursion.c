#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);
    if (n>=1 && n<=100) 
    { 
        void Recursion(int n)
         {
            if (n>0) 
            {
                printf("%d\n");
                Recursion(n - 1);
            }
        }
       Recursion(N);
    } else
     {
   
        printf(" \n");
    }
    return 0;
}
