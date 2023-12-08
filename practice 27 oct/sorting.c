#include <stdio.h>

void Sort(int a[], int N) 
{
    for (int i = 0; i < N - 1; i++)
     {
        int min = i;
        for (int j = i + 1; j < N; j++)
        {
            if (a[j] < a[min])
             {
                min = j;
            }
        }
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}
int main() 
{
    int N;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++) 
    {
        scanf("%d", &arr[i]);
    }
    Sort(arr,N);
    for (int i = 0; i < N; i++) 
    {
        printf("%d", arr[i]);
        if (i < N - 1) 
        {
            printf(" ");
        }
    }
    return 0;
}
