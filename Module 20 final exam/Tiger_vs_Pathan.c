 #include <stdio.h>
    int main()
    {

         int m;
         scanf("%d",&m);
         while(m--)
         {
            int n;
            scanf("%d",&n);
            char folafol[100001];
            scanf("%s",folafol);
            int tw=0;
            int pw=0;
            for(int i=0;i<n;i++)
            {
                if(folafol[i]=='T')
                {
                    tw++;
                }
                else if(folafol[i]=='P')
                {
                    pw++;
                }
            }

         if(tw>pw)
         {
            printf("Tiger\n");
         }
         else if(tw<pw)
         {
            printf("Pathaan\n");
         }
         else
         {
            printf("Draw\n");
         }

         }    
      return 0;
    }