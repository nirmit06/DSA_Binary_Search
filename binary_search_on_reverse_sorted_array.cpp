#include <bits/stdc++.h>
using namespace std;
int binary_search(int arr[],int i,int j,int key){
     while(i<=j){
        int mid=i+((j-i)/2);

        if(key==arr[mid]){
            return mid;
        }
        else if(key<arr[mid]){
            i=mid+1;
        }
        else{
            j=mid-1;
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