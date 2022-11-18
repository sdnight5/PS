#include<bits/stdc++.h>
#define endl '\n'
#define pii pair<int,int>

using namespace std;

int main()
{
    int A,B,D,V;

    cin >> A >> B >> V;

    D = 1;
    V -= A;
    D += V / (A-B);

    cout << D;

    return 0;
}