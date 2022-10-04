//Problem: Paranthesis Checker
int degree_of_bracket(char ch)
{
    if (ch == '(' || ch == ')')
        return 1;
    else if (ch == '[' || ch == ']')
        return 2;
    else if (ch == '{' || ch == '}')
        return 3;
    else
        return -1;
}
bool isValid(string s)
{
    stack<char> st;
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            st.push(s[i]);
        }
        else
        {
            if (st.empty())
                return 0;
            else if (degree_of_bracket(s[i]) == degree_of_bracket(st.top()))
            {
                st.pop();
            }
            else
                return 0;
        }
    }
    if (!st.empty())
    {
        return 0;
    }
    return 1;
}