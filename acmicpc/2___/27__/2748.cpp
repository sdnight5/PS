#include<bits/stdc++.h>
#define endl '\n'
#define pii pair<int,int>

using namespace std;

int main()
{
    long long a=1,b=1,d=1,n=0;

    cin >> n;

    for(int i = 0; i < n-2; i++){
        d = a + b;
        a = b;
        b = d;
    }

    if (d == 0){
        cout << "0";
        return 0;
    }

    cout << d;

    return 0;
}