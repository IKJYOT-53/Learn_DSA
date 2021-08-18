#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];
    int start = 0;
    int end=n-1;
    //enter array 
    cout<<"enter array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter key";
    int key;
    cin>>key;
    //searching
    bool boo=true;
    do{
    start = (start + end) /2;
    if(arr[start]<key){
        if(arr[start]==key){
            cout<< start;
            boo=false;
        }
    }
    else if(arr[start]>key){
        end=start;
        start =0;
    }
    }while(boo);


    return 0;
}