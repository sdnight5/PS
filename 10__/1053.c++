#include<bits/stdc++.h>

typedef long long int ll;

struct V
{
    ll a,b,c,d;
    V operator*(V p)
    {
        V q;
        q.a = a*p.a+b*p.c,q.b = a*p.b+b*p.d,q.c = c*p.a+d*p.c,q.d = c*p.b+d*p.d;
        q.a%=10000,q.b%=10000,q.c%=10000,q.d%=10000;
        return q;
    }
};

using namespace std;

long long int n;
V f(ll n)
{
    V e = {1,1,1,0};
    if (n == 1) return e;
    V v = f(n/2);
    return (n%2==1)?v*v*e:v*v;
}

int main()
{
    while(n != -1){
        cin >> n;
        if (n == -1) return 0;
        if (n > 0)cout << f(n).b%10000 << "\n";
        else cout << "0\n";
    }
    return 0;
}