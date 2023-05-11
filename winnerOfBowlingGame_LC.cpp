class Solution
{

private:
    int winner(vector<int> player1)
    {
        int o = 0;
        for (int i = 0; i < player1.size(); i++)
        {

            if (i >= 1 && player1[i - 1] >= 10)
                o += 2 * player1[i];
            else if (i >= 2 && (player1[i - 1] >= 10 || player1[i - 2] >= 10))
                o += 2 * player1[i];
            else
                o += player1[i];
        }
        return o;
    }

public:
    int isWinner(vector<int> &player1, vector<int> &player2)
    {
        int o = winner(player1);
        int t = winner(player2);
        if (o > t)
            return 1;
        else if (t > o)
            return 2;
        else
            return 0;
    }
};