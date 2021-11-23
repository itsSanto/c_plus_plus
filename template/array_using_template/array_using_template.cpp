
#include <iostream>
#include "array_using_template.hpp"

template <typename T>
Array<T>::Array(T arr[], int s)
{
    ptr = new T[s];
    size = s;
    for (int i = 0; i < size; ++i)
        ptr[i] = arr[i];
}

template <typename T>
void Array<T>::print()
{
    for (int i = 0; i < size; ++i)
        std::cout << " " << *(ptr + i);
    std::cout << std::endl;
}
