#include<bits/stdc++.h>
#define endl '\n'
#define pii pair<int,int>

using namespace std;

priority_queue<pii, vector<pii>, greater<pii> > pq;
int n;

int main()
{
    cin >> n;

    for (int i = 0,x; i < n; i++){
        cin >> x;
        if (x != 0) pq.push({abs(x),x});
        else {
            if (pq.empty()) cout << "0\n";
            else {
                cout << pq.top().second << endl;
                pq.pop();
            }
        }
    }

    return 0;
}