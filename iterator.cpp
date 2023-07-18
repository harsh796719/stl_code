//*  v.begin()
// it point to first element( v[0]) of our container

//*  v.end()
// it point to last element (v[n]+1) ke bhi bad ka  element means similar like null

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2, 3, 5, 6, 7};

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    // 1) ---------- iterators syntax ----------
    vector<int>::iterator it = v.begin();
    //! data_type_of_container::iterator vriabel = reference pointer

    //? use of iterator
    cout << *it << endl;         // 2
    cout << (*(it + 1)) << endl; // 3

    //* iterator with vector pair
    vector<pair<int, int>> v_p = {{1, 2}, {2, 3}, {3, 4}};
    vector<pair<int, int>>::iterator itr;

    for (itr = v_p.begin(); itr != v_p.end(); ++itr)
    {
        cout << (*itr).first << " " << (*itr).second << endl;
        //* OR cout << (itr->first) << " " << (itr->second) << endl;
        //* (*it).first <=> (it->first)
    }

    // 1) -------------- iterator in c++ 11.0.0 --------------

    //! range base loop

    for (int value : v) // you cant use (int &value : v) reference
    {
        cout << value << " ";
    }

    //* auto key word :-> it auto delect data type of veriable
    for (auto value : v_p) // you cant use (int &value : v) reference
    {
        cout << value.first << " " << value.second << endl;
    }
}
