#include<stdio.h>
int main(){
    int n;
    printf(" Enter The Array Size : ");
    scanf("%d", &n);
    int arr[n];
    printf(" Enter The Array : ");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int j=0;j<n/2;j++){
        for(int k=j+1;k<n;k++){
            if(arr[j]>arr[k]){
                int sum = arr[k];
                arr[k]  = arr[j];
                arr[j] = sum;
            }
        }
    }
       for(int j=n/2;j<n;j++){
        for(int k=j+1;k<n;k++){
            if(arr[j]>arr[k]){
                int sum = arr[k];
                arr[k]  = arr[j];
                arr[j] = sum;
            }
        }
    }
    printf(" Enter The Sorted Array  : ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}