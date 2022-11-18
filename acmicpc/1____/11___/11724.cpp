#include<bits/stdc++.h>
#define endl '\n'
#define pii pair<int,int>

using namespace std;

vector<int> v[500000];
int p[1005];

int n,m;

void search(int spos)
{
    for(int i = 0; i < v[spos].size(); i++){
        if (!p[v[spos][i]]) p[v[spos][i]] = 1,search(v[spos][i]);
    }
}

int main()
{
    cin >> n >> m;

    for(int i = 0,a,b; i < n; i++){
        cin >> a >> b;
        v[a].push_back(b),v[b].push_back(a);
    }
    int cnt=0;
    for(int i = 1; i <= n; i++){
        if (p[i] == 0) search(i),cnt++;
    }

    cout << cnt;

    return 0;
}