 #include <stdio.h>
 #include<string.h>
    int main()
    {

         int t;
         scanf("%d",&t);
         while(t--)
         {
            char ar[10001];
            {
                scanf("%s",ar);
            }
             int boro=0,choto=0,songkha=0;
            for(int i=0;ar[i]!='\0';i++)
            {
                if(ar[i]>='A'&& ar[i]<='Z')
                {
                    boro++;
                }
                else if(ar[i]>='a'&& ar[i]<='z')
                {
                    choto++;
                }
                else if(ar[i]>='0' && ar[i]<='9')
                {
                   songkha++;
                }
            }
             printf("%d %d %d\n",boro,choto,songkha);
         }
        
      return 0;
    }