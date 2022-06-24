#include <bits/stdc++.h>
using namespace std;
int binary_search(int arr[],int i,int j,int key){
    int res=-1;
     while(i<=j){
        int mid=i+((j-i)/2);

        if(key==arr[mid]){
            res= mid;
            j=mid-1;

        }
        else if(key<arr[mid]){
            j=mid-1;
        }
        else{
            i=mid+1;
        }
    }
    return res;
}
int main(){
    int key;
    cin>>key;
    int arr[]={0,0,0,0,0,0,1};

    int low=0;
    int high=1;

    while(key>arr[high]){
        low=high;
        high*=2;
    }
    cout<<low<<" "<<high<<"\n";
    cout<<binary_search(arr,low,high,key)<<"\n";

   
    return 0;
}