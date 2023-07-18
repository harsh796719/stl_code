#include <bits/stdc++.h>
using namespace std;
int main()
{
    // 1) ---------- maps syntax ----------
    map<int, string> m;
    m[1] = "abc"; // 4) ---> time complexity for inserting and acess of any element O(lon(n))
    m[5] = "cdc";
    m[3] = "acd";
    m.insert({4, "afg"});

    /* map<int, string>::iterator it;
     for (it = m.begin(); it != m.end(); ++it)
     {
         cout << (*it).first << " " << (*it).second << endl;
     } */

    //* OR Using auto
    for (auto &pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }

    //* find() ,it return iteraator,it find value,time-> O(long(n))
    /* auto it = m.find(7);
    if (it == m.end())
    {
        cout << "no value";
    }
    else
    {
        cout << (*it).first << " " << (*it).second << endl;
    }*/

    //* erase() ,it erase(index) or erase(it)
    // m.erase(3);
}