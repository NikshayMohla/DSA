class Solution
{
public:
    //     string predictPartyVictory(string senate) {
    //         queue<char>q,q1;
    //         int n=senate.length();
    //         for(int i=0;i<n;i++)
    //         {
    //             if(senate[i]=='R')q.push(i);
    //             else q1.push(i);
    //         }
    //         cout<<q.size()<<endl<<q1.size();
    //         while(!q.empty()&&!q1.empty()){
    //             int r=q.front();
    //             int d=q1.front();
    //             q.pop();
    //             q1.pop();
    //             if(r<d)q.push(r+n);
    //             else q1.push(d+n);
    //         }
    //         if(q.size()>q1.size())return "Radiant";
    //         return "Dire";
    //     }
    // };

    string predictPartyVictory(string senate)
    {
        queue<int> dir;
        queue<int> rad;
        for (int i = 0; i < senate.length(); i++)
        {
            if (senate[i] == 'D')
            {
                dir.push(i);
            }
            else
            {
                rad.push(i);
            }
        }
        int s = senate.length();
        while (true)
        {
            if (rad.empty())
            {
                return "Dire";
            }
            if (dir.empty())
            {
                return "Radiant";
            }
            int r = rad.front();
            int d = dir.front();
            rad.pop();
            dir.pop();
            if (r < d)
            {
                rad.push(r + s);
            }
            else
            {
                dir.push(d + s);
            }
        }
    }
};