#include<iostream>
#include<vector>
#include<algorithm>
#define pii pair<int,int>
#define endl '\n'

using namespace std;

vector<pii> v;
int n;

bool comp(pii x, pii y){
    if (x.second == y.second) return x.first < y.first;
    return x.second < y.second;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    
    for(int i = 0,a,b; i < n; i++){
        cin >> a >> b;
        v.push_back({a,b});
    }

    sort(v.begin(),v.end(),comp);

    for(int i = 0; i < n; i++){
        cout << v[i].first << " " << v[i].second << endl;
    }

    return 0;
}