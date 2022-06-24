#include <bits/stdc++.h>
using namespace std;
char binary_search(char arr[],int i,int j,char key){
    char res='-';
     while(i<=j){
        int mid=i+((j-i)/2);
        
        if(key==arr[mid]){
            i=mid+1;
        }
        else if(key<arr[mid]){
            j=mid-1;
            res=arr[mid];
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
    char key;
    cin>>key;
    char arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<binary_search(arr,0,n-1,key)<<"\n";

   
    return 0;
}