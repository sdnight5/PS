#include<bits/stdc++.h>
#define endl '\n'

using namespace std;

string a;
queue<int> q;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a;
        if (a == "push"){
            int b;
            cin >> b;
            q.push(b);
        }
        else if (a == "pop"){
            if (q.size() > 0) {
                cout << q.front() << endl;
                q.pop();
            }
            else cout << -1 << endl;
        }
        else if (a == "size"){
            cout << q.size() << endl;
        }
        else if (a == "empty"){
            cout << q.empty() << endl;
        }
        else if (a == "front"){
            if (q.size() > 0) cout << q.front() << endl;
            else cout << -1 << endl;
        }
        else if (a == "back"){
            if (q.size() > 0) cout << q.back() << endl;
            else cout << -1 << endl;
        }
    }
}