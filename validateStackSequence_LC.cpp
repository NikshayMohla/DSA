class Solution
{
public:
    bool validateStackSequences(vector<int> &pushed, vector<int> &popped)
    {
        stack<int> st;
        int count = 0;
        for (int i : pushed)
        {
            st.push(i);
            while (!st.empty() && st.top() == popped[count])
            {
                st.pop();
                count++;
            }
        }
        return st.empty();
    }
};