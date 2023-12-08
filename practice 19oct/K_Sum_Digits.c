 #include <stdio.h>
 #include<string.h>
    int main()
    {

         int n;
         scanf("%d",&n);
         char number[n];
         scanf("%s",number);
          int sum=0;
          for(int i=0;i<n;i++)
          {
            sum+=number[i]-'0';
          }
          printf("%d\n",sum);
      return 0;
    }