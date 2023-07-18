#include <bits/stdc++.h>
using namespace std;

int main()
{
    // cout << "hello world";

    // 1) ---------- pair syntax ----------

    pair<int, string> p;

    // 5) ---> two method for making pair
    p = make_pair(1, "abcd");
    // p = {1, "abcd"};

    // 5) ---> acess of pair
    cout << p.first << " " << p.second << endl;

    // 3) ---> array of pair
    pair<int, string> p_array[3];
    p_array[0] = {1, "one"};
    p_array[1] = {2, "two"};
    p_array[2] = {3, "three"};

    for (int i = 0; i < 3; i++)
    {
        cout << p_array[i].first << " " << p_array[i].second << endl;
    }
}