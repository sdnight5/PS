#include<bits/stdc++.h>
#define endl '\n'
#define pii pair<int,int>

using namespace std;

string a;

int main()
{
    while (a != "0")
    {
        cin >> a;
        if (a == "0") return 0;
        int chk = 1;
        for (int i = 0; i < a.size(); i++){
            if (a[i] != a[a.size()-1-i]) chk = 0;
        }
        if (chk) cout << "yes\n";
        else cout << "no\n";
    }

    return 0;
}