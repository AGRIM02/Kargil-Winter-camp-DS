<<<<<<< HEAD
#include<iostream>
using namespace std;

int binarysearch(int arr[],int l,int h,int k){
    if(h>=l){
        int mid = (l+h)/2;
        if(arr[mid]==k){
            return mid;
        }
        else if(k<arr[mid]){
            return binarysearch(arr,l,mid-1,k);
        }
        else{
            return binarysearch(arr,mid+1,h,k);
        }
    }
    return -1;
}

int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n= sizeof(arr)/sizeof(arr[0]);
    int k;
    cout<<"enter element to search: ";
    cin>>k;
    int res = binarysearch(arr,0,n-1,k);
    if(res==-1){
        cout<<"element not found";
    }
    else{
        cout<<"element is at index: "<<res;
    }
}
// int main(){
//     int n;
//     cout<<"enter size of array: ";
//     cin>>n;
//     int arr[n];
//     int key;
//     cout<<"enter element to search: ";
//     cin>>key;
//     cout<<"enter array: ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int j=0;j<n;j++){
//         if(arr[j]==key){
//             cout<<"element found at index: "<<j<<endl;
//         }
//     }



// }

=======
#include<iostream>
using namespace std;

int binarysearch(int arr[],int l,int h,int k){
    if(h>=l){
        int mid = (l+h)/2;
        if(arr[mid]==k){
            return mid;
        }
        else if(k<arr[mid]){
            return binarysearch(arr,l,mid-1,k);
        }
        else{
            return binarysearch(arr,mid+1,h,k);
        }
    }
    return -1;
}

int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n= sizeof(arr)/sizeof(arr[0]);
    int k;
    cout<<"enter element to search: ";
    cin>>k;
    int res = binarysearch(arr,0,n-1,k);
    if(res==-1){
        cout<<"element not found";
    }
    else{
        cout<<"element is at index: "<<res;
    }
}
// int main(){
//     int n;
//     cout<<"enter size of array: ";
//     cin>>n;
//     int arr[n];
//     int key;
//     cout<<"enter element to search: ";
//     cin>>key;
//     cout<<"enter array: ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int j=0;j<n;j++){
//         if(arr[j]==key){
//             cout<<"element found at index: "<<j<<endl;
//         }
//     }



// }

>>>>>>> 3007c734c44bc47b109ba5b8e6836f89553b259a
