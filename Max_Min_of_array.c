#include<stdio.h>

int max(int arr[],int start, int end){
    int max=0;
    for(int i=0;i<end;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int min(int arr[],int start, int end){
    int min=arr[0];
    for(int i=0;i<end;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}

int main(){
int arr[]={5,1,3};
printf("%d ",max(arr,0,3));
printf("%d ",min(arr,0,3));
}