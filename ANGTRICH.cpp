#include <iostream>
using namespace std;
int main()
{
    long long a, b, c;
    cin >> a >> b >> c;
    long long sum = a + b + c;
    if (a != 0 && b != 0 && c != 0 && sum == 180)
    {
        cout << "YES";
    }
    else
        cout << "NO";
    return 0;
}