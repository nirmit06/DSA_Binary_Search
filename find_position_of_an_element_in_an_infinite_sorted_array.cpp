#include <bits/stdc++.h>
using namespace std;
int binary_search(int arr[],int i,int j,int key){
     while(i<=j){
        int mid=i+((j-i)/2);

        if(key==arr[mid]){
            return mid;
        }
        else if(key<arr[mid]){
            j=mid-1;
        }
        else{
            i=mid+1;
        }
    }
    return -1;
}
int main(){
    int key;
    cin>>key;
    int arr[]={3,4,5,6};

    for(int i=0;i<sizeof(arr);i++){
        cin>>arr[i];
    }
    int low=0;
    int high=1;

    while(key>arr[high]){
        low=high;
        high*=2;
    }

    cout<<binary_search(arr,low,high,key)<<"\n";

   
    return 0;
}