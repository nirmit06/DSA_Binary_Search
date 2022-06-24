#include <bits/stdc++.h>
using namespace std;


int binary_search(int arr[],int low,int high,int key){


    while(low<=high){
            int mid=low + (high-low)/2;
        if(arr[mid]==key){
            return arr[mid];
        }
        else if(arr[low]<key){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    if(min(abs(arr[low]-key),abs(arr[high]-key))==abs(arr[low]-key)){
        return arr[low];
    }
    else{
        return arr[high];
    }

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