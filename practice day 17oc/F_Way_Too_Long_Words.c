 #include <stdio.h>
 #include<string.h>
    int main()
    {
        int n;
        scanf("%d",&n); 
        while (n--)
        {
            char ar[101];
            scanf("%s",ar);
            int lenth=strlen(ar);
            if (lenth>10)
            {
                printf("%c%d%c\n",ar[0],lenth - 2,ar[lenth - 1]);
            }
            else
            {
                printf("%s\n",ar);
            }
        }
      return 0;
    }