 void fun(char *ar)
 {
    ar[0]='G';
 }
    int main()
    {

         char ar[]="hello";
         fun(ar);
         printf("%s",ar);
      return 0;
    }