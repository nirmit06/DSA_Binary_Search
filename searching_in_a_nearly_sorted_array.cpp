#include <bits/stdc++.h>
using namespace std;
int binary_search(int arr[],int i,int j,int key){
     while(i<=j){
        int mid=i+((j-i)/2);

        if(key==arr[mid]){
            return mid;
        }
        if(mid-1>=i && arr[mid-1]==key){
            return mid-1;
        }
        if(mid+1<=j && arr[mid+1]==key){
            return mid+1;
        }

        if(key<arr[mid]){
            j=mid-2;
        }
        else{
            i=mid+2;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int key;
    cin>>key;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<binary_search(arr,0,n-1,key)<<"\n";

   
    return 0;
}