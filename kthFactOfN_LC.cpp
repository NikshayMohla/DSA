class Solution
{
public:
    int kthFactor(int n, int k)
    {
        int fac = -1;
        int count = 0;
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                fac = i;
                count++;
            }
            if (count == k)
                return fac;
        }
        return -1;
    }
};