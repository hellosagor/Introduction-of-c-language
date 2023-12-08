 #include <stdio.h>
 int sum(int x,int y)
 {
    int sum=x+y;
    return sum;
 }
    int main()
    {
      int x,y;
      scanf("%d %d",&x,&y);
      int tottal=sum(x,y);
        printf("%d\n",tottal);
         
      return 0;
    }