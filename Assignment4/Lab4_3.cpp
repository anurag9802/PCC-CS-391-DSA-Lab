#include <bits/stdc++.h>

using namespace std;

bool CheckParanthesis(string str)
{

    char x;
    stack<char> s;
    for (int i = 0; i < str.length(); i++)
    {

        if (str[i] == '(' || str[i] == '[' || str[i] == '{')
        {

            s.push(str[i]);
            continue;
        }

        if (s.empty())
            return false;

        switch (str[i])
        {
        case ')':
            x = s.top();
            s.pop();
            if (x == '{' || x == '[')
                return false;
            break;

        case '}':
            x = s.top();
            s.pop();
            if (x == '(' || x == '[')
                return false;
            break;

        case ']':
            x = s.top();
            s.pop();
            if (x == '(' || x == '{')
                return false;
            break;
        }
    }

    return s.empty();
}

int main()
{
    string str;
    cout << "Enter an Equation" << endl;
    getline(cin, str);
    CheckParanthesis(str) ? cout << "Balanced Paranthesis" : cout << "Unbalanced Parenthesis" << endl;
    return 0;
}
