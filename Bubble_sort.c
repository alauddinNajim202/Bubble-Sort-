#include<stdio.h>

int main(){

      int n, arr[50];

      printf("Enter number of elements: ");
      scanf("%d",&n);

      printf("Enter elements of an array: ");
      for(int i = 0 ; i<n ; i++){
            scanf("%d",&arr[i]);
      }

      bubble_sort(arr, n);

      printf("Sorted array ");
      for(int i = 0 ; i<n ; i++){
            printf("%d ",arr[i]);
      }

}


 void bubble_sort(int arr[], int n){

       int temp;

       for( int i =1; i<n; i++){

            for(int j=0; j<n-1; j++){

                 if(arr[j] > arr[j+1]){

                  temp = arr[j];
                  arr[j] = arr[j+1];
                  arr[j+1] = temp;

                 }

            }
       }

 }

