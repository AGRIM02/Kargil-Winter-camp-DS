<<<<<<< HEAD
#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6};
    int n = 6;
    int temp;
    for(int i=0;i<n/2;i++){
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}

=======
#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6};
    int n = 6;
    int temp;
    for(int i=0;i<n/2;i++){
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}

>>>>>>> 3007c734c44bc47b109ba5b8e6836f89553b259a
