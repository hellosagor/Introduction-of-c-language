 #include <stdio.h>
 void fun(int x)
 {
    x=200;
 }
    int main()
    {

      int x=100;
      fun(x);
      printf("main x er value-%d\n",x);   
      return 0;
    }