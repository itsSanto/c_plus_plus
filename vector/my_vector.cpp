#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v1;

    for (int i = 0; i < 5; i++)
        v1.push_back(i);

    // for (auto itr = v1.rbegin(); itr != v1.rend(); ++itr)
    // for (auto itr = v1.crbegin(); itr != v1.crend(); ++itr)
    for (auto itr = v1.begin(); itr != v1.end(); ++itr)
        cout << *itr << " ";

    return 0;
}
