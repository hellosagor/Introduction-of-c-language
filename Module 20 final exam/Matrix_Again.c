 #include <stdio.h>
    int main()
    {

         int row,col;
         scanf("%d %d",&row,&col);
         int mat[row][col];
         for(int i=0;i<row;i++)
         {
            for(int j=0;j<col;j++)
            {
                scanf("%d",&mat[i][j]);
            }
         }
         for(int j=0;j<col;j++)
         {
            printf("%d ",mat[row-1][j]);
         }
         printf("\n");
         for(int i=0;i<row;i++)
         {
            printf("%d ",mat[i][col-1]);
         }
      return 0;
    }