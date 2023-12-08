#include <stdio.h>

void fun(int a[], int n, int s) 
{
    if (s < 0) {
        printf("\n");
        return;
    }

    if (s%2==0)
     {
        printf("%d ",a[s]);
    }

    fun(a,n,s-1);
}

int main() 
{
    int n;
    scanf("%d",&n);

    if (n>=1&&n<=1000)
     {
        int a[n];

        for (int i=0;i<n;i++) 
        {
            scanf("%d",&a[i]);
        }

        fun(a, n,n- 1);
    } else {
        printf(" ");
    }

    return 0;
}
