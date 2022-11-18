#include<iostream>
#define endl '\n'

using namespace std;

int arr[100005];
int n,m;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;

    for(int i = 1,a; i <= n; i++){
        cin >> a;
        arr[i] = a+arr[i-1];
    }

    for (int i = 0,x,y; i < m; i++){
        cin >> x >> y;
        cout << arr[y]-arr[x-1] << endl;
    }

    return 0;
}