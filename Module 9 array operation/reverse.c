#include<stdio.h>
void reverse(int arr[], int n);
void printArr(int arr[], int n);
int main(){
  int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14};
  reverse(arr, 14);
  printArr(arr, 14);
  return 0;

}
void printArr(int arr[], int n){
  for(int i = 0; i<n; i++){
    printf("%d\t", arr[i]);
  }printf("\n");
}
void reverse(int arr[], int n){
  for(int i = 0; i<n/2; i++){
  int firstvalue = arr[0];
  int secondvalue = arr[n-i-1];
  arr[i] = secondvalue;
  secondvalue = firstvalue;  
  }
}