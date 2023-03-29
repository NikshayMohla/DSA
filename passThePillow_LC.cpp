class Solution {
public:
    int passThePillow(int n, int time) {
        n--;
        int kachhi=time%n;  
        int kuchhi=time/n;  
        if(kuchhi%2!=0)return (n-kachhi)+1;
        return kachhi + 1;
    }
};