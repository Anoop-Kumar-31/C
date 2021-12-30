#include<stdio.h>
void main(){
    int length;
    printf("Enter the length of the array: ");
    scanf("%d",&length);
    int arr[length];
    for(int i=0;i<length;i++){
        printf("Element for index [%d] : ",i);
        scanf("%d",&arr[i]);
    }
    int smallest=arr[0],sec_smallest=arr[1];
    for(int i=0;i<length;i++){
        if(arr[i]<smallest)
        smallest=arr[i];
    }
    for(int i=0;i<length;i++){
        if(arr[i]>smallest && arr[i]<sec_smallest)
        sec_smallest=arr[i];
    }
    printf("\nSecond smallest number is : %d\n ",sec_smallest);
}