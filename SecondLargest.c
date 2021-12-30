#include<stdio.h>
void main(){
    int length;
    printf("Enter the length of the array: ");
    scanf("%d",&length);
    int arr[length],largest=0,sec_largest=0;;
    for(int i=0;i<length;i++){
        printf("Element for index [%d] : ",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<length;i++){
        if(arr[i]>largest)
        largest=arr[i];
    }
    for(int i=0;i<length;i++){
        if(arr[i]<largest && arr[i]>sec_largest)
        sec_largest=arr[i];
    }
    printf("\nSecond largest number is : %d\n ",sec_largest);
}