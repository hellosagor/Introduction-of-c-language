#include <stdio.h>
#include <math.h>

int main()
 {
    int n;
    float m;
    scanf("%d %f", &n, &m);
    float Discountprice = (m * 100.0) / (100.0 - n);
    Discountprice = roundf( Discountprice*100.0) / 100.0;
    printf("%.2f\n",Discountprice);
    return 0;
}
