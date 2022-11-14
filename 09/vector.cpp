#include <iostream>
#include <vector>
#include <list>

using namespace std;

void editList(list<int> & l)
{
    for (auto it {l.begin()}; it != l.end(); )
    {
        if (*it == 0)
        {
            it = l.insert(it, 0);
            ++it;
            ++it;
        }
        
        else if (*it == 1)
        {
            it = l.erase(it);
        } 
        else
        {
            ++it;
        }
    }

}

void edit(vector<int> & v)
{
    for (auto it {v.begin()}; it != v.end(); )
    {
        if (*it == 0)
        {
            it = v.insert(it, 0);
            it += 2;
        }
        
        else if (*it == 1)
        {
            it = v.erase(it);
        } 
        else
        {
            ++it;
        }
    }
}

int main()
{
    vector<int> v;
    vector<int> v1 {1, 2, 3, 0, 0};

    for (int i {0}; i < 10; ++i)
        v.push_back(i);

    // for (unsigned int i {0}; i < v.size(); ++i)
    //     cout << v[i] << "\n";

    // for (auto i : v)
    //     cout << i << "\n";
    
    edit(v1);

    for (auto num : v1)
        cout << num;
    cout << endl;
}

