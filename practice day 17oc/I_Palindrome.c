 #include <stdio.h>
 #include<string.h>
    int main()
    {
         char ar[1001];
         scanf("%s",ar);
         int palindrome=1;
         int lnth=strlen(ar);
         for(int i=0;i<lnth/2;i++)
         {
            if(ar[i]!=ar[lnth-1-i])
            {
                palindrome=0;
                break;
            }
         }
         if(palindrome)
         {
            printf("YES\n");
         }
         else
         {
            printf("NO\n");
         }
      return 0;
    }