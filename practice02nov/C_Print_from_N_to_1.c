#include <stdio.h>

void  numbers(int N)
 {
    if (N == 1) 
    {
        printf("1");
    } else
     {
        printf("%d ",N);
        numbers(N - 1);
    }
}

int main() {
    int N;
    scanf("%d",&N);
    if (N >= 1 && N <= 1000) 
    {
        numbers(N);
        printf("\n");
    } else 
    {
        printf(" ");
    }
    return 0;
}
