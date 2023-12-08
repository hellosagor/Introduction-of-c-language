#include<stdio.h>

int main(){

    int n;
    int N;
    scanf("%d",&n);
    for(N=1;N<=n;N=N+1)
    {
        if(N%5==0)
        {
            printf("%d Yes\n",N);
        }
        else
        {
            printf("%d No\n",N);
        }
    }
    return 0;
    
    

    
    }