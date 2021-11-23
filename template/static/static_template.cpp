#include <iostream>

using namespace std;

template <typename T>
void my_function(const T &x)
{
    static int i = 10;
    cout << ++i;
    return;
}

template <class T>
class Test
{
private:
    T val;

public:
    static int count;
    Test()
    {
        ++count;
    }
};

template <class T>
int Test<T>::count = 0;

int main()
{
    my_function<int>(1);
    cout << endl;
    my_function<int>(2);
    cout << endl;
    my_function<double>(1);
    cout << endl;

    cout << "Class:\n";
    Test<int> a;
    Test<int> b;
    Test<double> c;
    cout << Test<int>::count << endl;
    cout << Test<double>::count << endl;

    return 0;
}
