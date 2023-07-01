#include <iostream>
using namespace std;
int sum(int a, int b)
{
    return a + b;
}

int compare(int a, int b)
{
    if (a == 5)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int a, b;
    a = 1, b = 5;
    cout << compare(a, b);
    cout << sum(a, b);
    return 0;
}