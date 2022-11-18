#include<bits/stdc++.h>
#define endl '\n'
#define pii pair<int,int>

using namespace std;

int pascal[100][100];

int main()
{
    int n,k;

    cin >> n >> k;
    pascal[0][0] = 1;
    for (int i = 1; i < 100; i++){
        for (int j = 1; j < 100; j++){
            pascal[i][j] = pascal[i-1][j] + pascal[i-1][j-1];
        }
    }

    cout << pascal[n+1][k+1];

    return 0;
}