#include<bits/stdc++.h>
using namespace std;
int floor(vector<int>&arr,int n,int k)
{
    int s=0;
    int e=arr.size()-1;
    int ans=-1;
    while (s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==k){
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]<k)
        {
            e=mid-1;
        }
        else ans=mid;
    }
     return ans;
}
int main()
{
    vector<int>ans={1,2,3,4,5,6,7,9,10};
    cout<<floor(ans,ans.size(),8)<<endl;
}