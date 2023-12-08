 #include <stdio.h>
    int main()
    {

         int n;
         scanf("%d",&n);
         int cnt_a=0;
         int cnt_b=0;
         for(int i=0;i<n;i++)
         {
            int number;
            scanf("%d",&number);
            if(number % 2==0)
            {
                cnt_a++;
            }
            else if(number % 3==0)
            {
                cnt_b++;
            }
         }
         printf("%d %d\n",cnt_a,cnt_b);
      return 0;
    }