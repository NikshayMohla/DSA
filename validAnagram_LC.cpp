class Solution {
public:
    bool isAnagram(string s, string t) {
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // return s==t;
        if(s.length()!=t.length())return false;
        map<int,int>kachhi;
        map<int,int>kuchhi;
        for(int i=0;i<s.length();i++)
        {
            kachhi[s[i]]++;
            kuchhi[t[i]]++;
        }
        bool ss=true;
        for(int i=0;i<s.length();i++)
        {
            if(kuchhi[s[i]]!=kachhi[s[i]])ss=false;
        }
        return ss;
    }
};