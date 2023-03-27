//{ Driver Code Starts
// Driver code

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
  public:
    int findOnce(int arr[], int n)
    {
        // unordered_map<int,int>p;
        // for(int i=0;i<n;i++)
        // {
        //     p[arr[i]]++;
        // }
        // for(auto it:p)
        // {
        //     if(it.second==1)return it.first;
        // }
        // return -1;
        
        
        //binary search
        int s=0;
        int e=n-1;
        while(s<e)
        {
            if(arr[s]==arr[s+1])s=s+2;
            if(arr[e]==arr[e-1])e=e-2;
        }
        return arr[e]; 
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int A[n];
        for(int i = 0;i < n;i++)
        {
            cin>>A[i];
        }
        
        Solution ob;
        
        int res = ob.findOnce(A,n);
        cout << res << endl;
    }
    
    return 0;
}
// } Driver Code Ends