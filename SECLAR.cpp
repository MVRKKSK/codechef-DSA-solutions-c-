#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a >= b && a <= c || a>=c && a<=b)
    {
        cout << a << endl;
    }
    if (b <= c && b >= a || b>=c && b<=a)
    {
        cout << b << endl;
    }
    if (c <= a && c >= b || c>=a && c<=b)
    {
        cout << c << endl;
    }

}