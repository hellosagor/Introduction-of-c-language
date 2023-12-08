#include <stdio.h>

int sum(int a[], int n, int m)
 {
    if (m<0)
     {
        return 0;
    }

    return a[m]+sum(a, n,m-1);
}

int main() {
    int n;
    scanf("%d",&n);

    int a[n];

    for (int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }

    int tottal = sum(a,n,n- 1);
    printf("%d ",tottal);

    return 0;
}
