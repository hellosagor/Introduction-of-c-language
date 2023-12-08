 #include <stdio.h>
 void fun(double ar[],int n)
 {
    for(int i=0;i<n;i++)
    {
        printf("%0.2lf ",ar[i]);
    }
 }
    int main()
    {

         double ar[5]={10.5,20.3,30.1,40.6,50.6};
        fun(ar,5);
      return 0;
    }