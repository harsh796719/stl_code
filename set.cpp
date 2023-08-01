#include <bits/stdc++.h>
using namespace std;

void print(set<string> &s)
{
    for (string value : s)
    {
        cout << value << endl;
    }

    // second way: print
    for (auto it = s.begin(); it != s.end(); ++it)
    {
        cout << (*it) << endl;
    }
}

int main()
{

    set<string> s;
    s.insert("abc");
    s.insert("zfds");
    s.insert("bcd");

    print(s);

    auto it = s.find("abc");
    if (it != s.end())
    {
        s.erase(it);
    }
}