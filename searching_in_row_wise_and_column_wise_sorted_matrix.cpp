#include <bits/stdc++.h>
using  namespace std;
    
    int find(int **arr,int n,int m,int key){
    int i=0;
    int j=m-1;
    vector<pair<int,int>> vp;
    while(i>=0 && i<n && j>=0 && j<m){
        if(arr[i][j]==key){
            return 1;
        }
        else if(arr[i][j]>key){
            j--;
        }
        else if(arr[i][j]<key){
            i++;
        }
    }

    return 0;
}
int main(){

    int n,m;
    cin>>n>>m;
    int key;
    cin>>key;
    int** arr = new int*[n];
 
    // dynamically allocate memory of size `N` for each row
    for (int i = 0; i < m; i++) {
        arr[i] = new int[m];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    int temp=find(arr,n,m,key);

    cout<<temp<<"\n";
    
    return 0;
}