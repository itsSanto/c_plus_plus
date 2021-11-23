#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void print_vector(vector<int> &, string &);

int main()
{
    vector<int> v1 = {1, 2, 3, 4, 5};
    print_vector(v1);
    return 0;
}

void print_vector(const vector<int> &v, const string &description = "Vector Elements are:\n")
{
    cout << description;
    if (*(description.end()) != '\n')
        cout << endl;
    for (auto itr = v.begin(); itr != v.end(); ++itr)
        cout << *itr << " ";
    cout << endl;
}
