#include <bits/stdc++.h>
using namespace std;
int rec(int n, int *arr)
{
    if (n < 0)
    {
        return 0;
    }
    if (n == 0)
        return 1;
    if (arr[n] != -1)
    {
        return arr[n];
    }
    else
    {
        arr[n] = rec(n - 1, arr) + rec(n - 2, arr);
        return arr[n];
    }
}
int climbStairs(int n)
{
    int arr[500];

    for (int i = 0; i < 500; i++)
    {
        arr[i] = -1;
    }

    int ans = rec(n, arr);
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout<<climbStairs(n);
}