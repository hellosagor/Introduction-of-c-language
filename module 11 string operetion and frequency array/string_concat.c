 #include <stdio.h>
 #include<string.h>
    int main()
    {

         char a[200],b[200];
         scanf("%s %s",a,b);
         int k=strlen(a);
         //strcat(a,b) etaa shortcut 
         for(int i=0;i<=strlen(b);i++)
         {
            a[k]=b[i];
            k++;

         }
         printf("%s %s",a,b);
      return 0;
    }