#include <iostream>
using namespace std;

void fibonacci(num)
{
    if (num == 1) {
        cout << 0 << endl;
        return;
    }

    a = 0;
    b = 1;
    c;

    cout << a << " " << b;

    for (i = 3; i <= n; i++)
    {
        c = a + b;
        cout << " " << c;
        a = b;
        b = c;
    }
}

int main()
{
    num;
    cin >> num;

    fibonacci(num);

    return 0;