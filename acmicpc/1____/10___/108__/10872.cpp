#include<iostream>

using namespace std;

long long int f(int n)
{
    if (n == 0) return 1;
    return f(n-1)*n;
}

int main()
{
    int n;

    cin >> n;

    cout << f(n);
}