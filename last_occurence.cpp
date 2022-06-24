#include <bits/stdc++.h>
using namespace std;
int binary_search(int arr[],int i,int j,int key){
    int res=-1;
     while(i<=j){
        int mid=i+((j-i)/2);

        if(key==arr[mid]){
            res= mid;
            i=mid+1;

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