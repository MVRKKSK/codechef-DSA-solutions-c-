#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (((a + b) > c && (b + c) > a && (a + c) > b) && (a == b && b== c && c==a))
    {
        cout << "1";
    }
    else if (((a + b) > c && (b + c) > a && (a + c) > b) && (a == b || b == c || c == a))
    {
        cout << "2";
    }
    else if (((a + b) > c && (b + c) > a && (a + c) > b) && (a != b && b != c && c != a))
    {
        cout << "3";
    }
    else
        cout << "-1";
}