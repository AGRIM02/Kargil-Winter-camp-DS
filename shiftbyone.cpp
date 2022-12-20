#include<iostream>
using namespace std;

int main(){
    int arr[] ={1,2,3,4,5};
    int n = 5;
    int k;
    cin>>k;
    int temp = arr[n-1];
    for(int j=0;j<k;j++){
        for(int i=n; i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}