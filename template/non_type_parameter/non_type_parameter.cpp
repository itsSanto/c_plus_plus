#include <iostream>

using namespace std;

template <class T, int max>
int arrMin(T arr[], int n)
{
    int m = max;
    for (int i = 0; i < n; i++)
        if (arr[i] > m)
            m = arr[i];
    return m;
}

int main()
{
    cout << "Max:\n";
    int arr1[3] = {10, 20, 15};
    cout << arrMin<int, 100>(arr1, sizeof(arr1) / sizeof(arr1[0])) << endl;
    int arr2[4] = {103, 2, 20, 15};
    cout << arrMin<int, 1034545>(arr2, sizeof(arr1) / sizeof(arr1[0])) << endl;
    return 0;
}
