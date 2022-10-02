#include<bits/stdc++.h>

struct V
{
    int a,b,c,d;
    V operator*(V p)
    {
        V q;
        q.a = a*p.a+b*p.c;
        q.b = a*p.b+b*p.d;
        q.c = c*p.a+d*p.c;
        q.d = c*p.b+d*p.d;
        return q;
    }
};

using namespace std;

int n;
V f(int n)
{
    V v = f(n/2);
    
}

int main()
{
    return 0;
}