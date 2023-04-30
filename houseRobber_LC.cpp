#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        nums.push_back(t);
    }
    int m1 = 0;
    int m2 = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        int mx = max(m1 + nums[i], m2);
        m1 = m2;
        m2 = mx;
    }
    cout << m2 << endl;
}