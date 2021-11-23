#include <iostream>
#include <array>
#include <tuple>
using namespace std;

template <size_t SIZE>
void arr_print(array<int, SIZE> &ar)
{
    for (int i = 0; i < ar.size(); ++i)
        cout << ar[i] << " ";
    cout << endl;
}

int main()
{
    array<int, 6> ar = {1, 2, 3, 4, 5, 6};
    cout << "The array elements are using at(): ";
    for (int i = 0; i < 6; i++)
        cout << ar.at(i) << " ";
    cout << endl;

    cout << "The array elements are (using get()) : ";
    cout << get<0>(ar) << " " << get<1>(ar) << " ";
    cout << endl;

    cout << "The array elements are (using operator[]) : ";
    arr_print(ar);

    cout << "First element of array is: ";
    cout << ar.front() << endl;

    cout << "Last element of array is: ";
    cout << ar.back() << endl;

    cout << "The number of array elements is : ";
    cout << ar.size() << endl;

    // Printing maximum elements array can hold
    cout << "Maximum elements array can hold is : ";
    cout << ar.max_size() << endl;

    array<int, 6> arr1 = {7, 8, 9, 10, 11, 12};
    ar.swap(arr1);
    cout << "First Array after swapping: ";
    arr_print(ar);

    cout << "The second array elements after swapping are : ";
    arr_print(arr1);

    arr1.fill(0);
    cout << "Array after filling operation is : ";
    arr_print(arr1);

    arr1.empty() ? cout << "Empty Array\n" : cout << "Array not empty\n";

    return 0;
}
