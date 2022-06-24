#include <bits/stdc++.h>

using namespace std;
int solve(int arr[], int start, int end, int n)
{

    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        if (arr[s] <= arr[e])
        {
            return s;   
        }
        int mid = s + (e - s) / 2;
        int next = (mid + 1) % n;
        int prev = (mid - 1 + n) % n;
        if (arr[mid] <= arr[next] && arr[mid] <= arr[prev])
        {
            return mid;
        }
        else if (arr[mid] <= arr[e])
        {
            e = mid - 1;
        }
        else if (arr[mid] >= arr[s])
        {
            s = mid + 1;
        }
    }
    return s;
}
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
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int key;
    cin>>key;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int index=solve(arr, 0, n - 1, n);
    int left=binary_search(arr,0,index-1,key);
    int right=binary_search(arr,index,n-1,key);

    if(left==-1 && right==-1){
        cout<<"Element is not present in the array"<<"\n";
    }
    else{
        if(left!=-1)
        cout<<left<<"\n";
        else
        cout<<right<<"\n";
    }


}