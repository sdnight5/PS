#include<iostream>

using namespace std;

int main()
{
    int a;

    cin >> a;

    if (a % 4 && !(a % 100)) cout << 1;
    else if (a % 400) cout << 1;
    else cout << 0;

    return 0;
}