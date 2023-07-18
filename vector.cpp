#include <bits/stdc++.h>
using namespace std;

void print_v(vector<int> v)
{
    cout << "Size : " << v.size() << endl;
    // 3) ---> v.size() timme complexcity is o(n)
    for (int j = 0; j < v.size(); j++)
    {
        cout << v[j] << " ";
    }
    cout << endl;
}

int main()
{
    // 1) ---------- vector syntax ----------

    vector<int> v;
    // * ---> vector<int> v(size);
    // * ---> vector<int> v(size,value that you want to fill in all vector's element);
    // defult value of vector is 0;

    int n;
    cout << "Enter N : ";
    cin >> n;
    cout << "Enter Vector elements : ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        // 3) ---> input in vector using push_back function and time complecity of it is o(1)
        v.push_back(x);
        print_v(v);
    }
    print_v(v);
}

//* vector fuction
// 1) v.pop_back(); remove last element of vector
// 1) vector<int> v2 = v; complecity = O(n)
