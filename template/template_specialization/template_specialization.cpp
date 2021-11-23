#include <iostream>

template <class T>
void mysort(T arr[], int size)
{
    std::cout << "I am in generic\n";
    //TODO: code for sorting
}

template <>
void mysort<char>(char arr[], int size)
{
    std::cout << "I am in Specialized template\n";
    //TODO: code for sorting
}
int main()
{
    int arr[3] = {1, 2, 3};
    mysort<int>(arr, sizeof(arr) / sizeof(arr[0]));
    char char_arr[3] = {'q', 'w', 'e'};
    mysort<char>(char_arr, sizeof(char_arr) / sizeof(char_arr[0]));

    return 0;
}
