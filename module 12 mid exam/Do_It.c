#include <stdio.h>

int main() {
   int a,b;
   scanf("%d %d",&a,&b);
   for(int i=0;i<a;i++)
   {
    for(int m=1;m<=b;m++)
    {
        printf("%d \n",m);
    }
   }
    return 0;
}
