 #include <stdio.h>
    int main()
    {

         int m;
         scanf("%d",&m);
         while(m--)
        { 
          int x,y;
          scanf("%d",&x);
          int ar[10001];
          for(int i=0;i<x;i++)
          {
             scanf("%d",&ar[i]);
          }
         scanf("%d",&y);
         int initiate=0;
         for(int i=0;i<x;i++)
         {
            if(ar[i]==y) 
            {
                initiate=1;
                break;
            }
         }

         if(initiate)
         {
            printf("YES\n");
         }
         else
         {
            printf("NO\n");
         }

         }
      return 0;
    }