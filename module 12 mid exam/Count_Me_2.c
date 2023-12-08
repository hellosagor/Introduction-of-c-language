 #include <stdio.h>
 #include<string.h>
    int main()
    {

         char x[100001];
         scanf("%s",x);
         int lnth=strlen(x);
         int cons=0;
         for(int i=0;i<lnth;i++)
         {
            char y=x[i];
            if(y!='a' && y !='e' && y!='i' && y!='o' && y!='u')
            {
                cons++;
            }
         }
         printf("%d\n",cons);
      return 0;
    }