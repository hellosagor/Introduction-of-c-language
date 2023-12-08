 #include <stdio.h>
 void fun(int arr[],int N)
         {
            for(int i=0;i<N;i++)
            {
                if(arr[i]<0)
                {
                    printf("%d ",-arr[i]);
                }
                else
                {
                    printf("%d ",arr[i]);
                }
            }
            printf("\n");
         }
    int main()
    {
        int t;
        scanf("%d",&t);
        while(t--)
        {
            int n;
            scanf("%d",&n);
            int p[n],q[n],r[n];
            for(int i=0;i<n;i++)
            {
                scanf("%d",&p[i]);
                q[i]=p[i];
            }

            for(int i=0;i<n-1;i++)
            {
                for(int j=0;j<n-i-1;j++)
                {
                    if(q[j]>q[j+1])
                    {
                        int temp=q[j];
                        q[j]=q[j+1];
                        q[j+1]=temp;
                    }
                }
            }
            
            for(int i=0;i<n;i++)
            {
                if(p[i]<q[i])
                {
                    r[i]=q[i]-p[i];
                }
                else
                {
                    r[i]=p[i]-q[i];
                }
            }
            fun(r,n);
        }
         
      return 0;
    }