 #include <stdio.h>
    int main()
    {

         int n;
         scanf("%d",&n);
         while(n--)
         {
            long long m,a,b,c;
            scanf("%lld %lld %lld %lld",&m,&a,&b,&c);
            if (a==0 && b==0 && c==0)
            {
                printf("0\n");
            }
            else if(a*b*c==0||m%(a*b*c)!=0)
            {
                printf("-1\n");
            }
            else
            {
                printf("%lld\n",m/(a*b*c));
            }
         }
      return 0;
    }