// reverse array 
// https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/

#include<stdlib.h>
#include<stdio.h>

void rev(int arr[],int start ,int end){
    int temp;
    while(start< end ){
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
        }
}

int main(){
int arr[]={1,2,3};
for(int i =0;i<3;i++){
    scanf("%d",&arr[i]);
}
rev(arr,0,2);
for(int i =0;i<3;i++){
    printf("%d ",arr[i]);
}
}