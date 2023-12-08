 #include <stdio.h>
 void fun(int n)
 {
    if(n>0)
    {
        fun(n-1);
        printf("%d\n",n);
        
    }
 }
    int main()
    {

         int n;
         scanf("%d",&n);
         if(n>=1 && n<=1000)
         {
            fun(n);
         }
         
      return 0;
    }