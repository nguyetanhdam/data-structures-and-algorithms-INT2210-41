#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    while (N--)
    {
        string str;
        stack<char> s;
        cin >> str;
        int i = 0;
        while (i < str.length())
        {
            if (str[i] == '[' || str[i] == '(' || str[i] == '{') s.push(str[i]);
            else if (s.top() == '[' && str[i] == ']') s.pop();
            else if (s.top() == '{' && str[i] == '}') s.pop();
            else if (s.top() == '(' && str[i] == ')') s.pop();
            i++;
        }
        if (i == str.length() && s.size() == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}

