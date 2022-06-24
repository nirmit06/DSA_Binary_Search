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
int rev_binary_search(int arr[],int i,int j,int key){
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
int peak(int arr[],int i,int j,int n){
    while(i<=j){
        int mid=i + (j-i)/2;
        if(mid>0 && mid<n-1){
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            return mid;
        }
        else if(arr[mid-1]>arr[mid]){
            j=mid-1;
        }
        else{
            i=mid+1;
        }
        }
        else{
            if(mid==0){
                if(arr[0]>arr[1]){
                    return 0;
                }
                else{
                    return 1;
                }
            }
            else if(mid==n-1){
                if(arr[n-1]>arr[n-2]){
                    return n-1;
                }
                else{
                    return n-2;
                }
            }
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

    int ind=peak(arr,0,n-1,n);

    int asc=binary_search(arr,0,ind-1,key);
    int des=rev_binary_search(arr,ind,n-1,key);

    if(asc==-1 && des==-1){
        cout<<-1<<"\n";
    }
    else{
        if(asc!=-1){
            cout<<asc<<"\n";
        }
        else if(des!=-1){
            cout<<des<<"\n";
        }
    }
    return 0;
}