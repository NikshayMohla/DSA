class Solution {
public:
    int alternateDigitSum(int n) {
        vector<int>ans;
        while(n!=0)
        {
            ans.push_back(n%10);
            n=n/10;
        }
        reverse(ans.begin(),ans.end());
        int sum=0;
        
        bool kachhi=false;
        for(int i=0;i<ans.size();i++)
        {
            if(kachhi==false){
                sum=sum+ans[i];
                kachhi=!kachhi;
            }
            else {
                sum=sum+(-1)*ans[i];
                kachhi=!kachhi;
                cout<<sum<<endl;
            }
        }
        return sum;
    }
};