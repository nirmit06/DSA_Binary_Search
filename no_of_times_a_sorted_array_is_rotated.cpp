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
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << solve(arr, 0, n - 1, n) << "\n";
}