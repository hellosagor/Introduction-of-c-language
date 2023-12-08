 #include <stdio.h>
    int main()
    {

         int a,b;
         scanf("%d %d",&a,&b);
         int jadu=1;
         for(int i=0;i<a;i++)
         {
            for(int j=0;j<b;j++)
            {
                int number;
                scanf("%d",&number);
                if((i==j ||j==(b-i-1)) && number !=1)
                {
                    jadu=0;
                    break;
                }
                else if((i!=j && j!=(b-i-1)) && number!=0)
                {
                    jadu=0;
                    break;
                }
            }
         }
         if(jadu)
         {
            printf("YES\n");
         }
         else
         {
            printf("NO\n");
         }

        
      return 0;
    }