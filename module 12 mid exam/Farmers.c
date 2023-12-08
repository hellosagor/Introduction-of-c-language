#include <stdio.h>

int main() 
{
  int N;
  scanf("%d", &N);

  for (int i = 0; i < N; i++)
   {
    int A, B, D;
    scanf("%d %d %d", &A,&B,&D);
    int moot_krishok = A + B;
    int Notun_din = D * A / moot_krishok;
    int bakidin = D - Notun_din;
    {
        printf("%d\n",bakidin);
    }
  }

  return 0;
}