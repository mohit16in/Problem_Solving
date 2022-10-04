// Infix to Postfix Conversion using stack

#include <bits/stdc++.h>
using namespace std;

// used to compare the precedence of the operator
int prec(char ch)
{
    if (ch == '^')
        return 3;
    else if (ch == '*' || ch == '/')
        return 2;
    else if (ch == '+' || ch == '-')
        return 1;
    else
        return -1;
}


string infix_to_postfix(string s)
{
    stack<char> st;
    string res;
    for (int i = 0; i < s.size(); ++i)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            res += s[i];
        }
        else if (s[i] == '(')
            st.push('(');
        else if (s[i] == ')')
        {
            while (st.top() != '(' && !st.empty())
            {
                char c = st.top();
                st.pop();
                res += c;
            }
            if (st.top() == '(')
            {
                char c = st.top();
                st.pop();
            }
        }
        else
        {
            while (!st.empty() && prec(s[i]) <= prec(st.top()))
            {
                char c = st.top();
                st.pop();
                res += c;
            }
            st.push(s[i]);
        }
    }
    while (!st.empty())
    {
        char c = st.top();
        st.pop();
        res += c;
    }
    return res;
}

int main()
{
    string s = "a+b*(c^d-e)^(f+g*h)-i";
    string result = infix_to_postfix(s);
    cout << result;
    return 0;
}
