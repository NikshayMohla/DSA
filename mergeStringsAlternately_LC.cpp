class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {
        string ans = "";
        int s = 0;
        int s1 = 0;
        while (s < word1.length() || s1 < word2.length())
        {
            if (s < word1.length())
                ans += word1[s++];
            if (s1 < word2.length())
                ans += word2[s1++];
        }
        return ans;
    }
};