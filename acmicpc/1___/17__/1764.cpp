#include<bits/stdc++.h>

using namespace std;

int n,m;
map<string,int> mp;
vector<string> v;

int main()
{
    cin >> n >> m;
    string a;
    for(int i = 0; i < n; i++){
        cin >> a;
        mp.insert({a,i});
    }
    for(int i = 0; i < n; i++){
        cin >> a;
        if (mp.find(a) != mp.end()) v.push_back(a);
    }
    
    sort(v.begin(),v.end());

    cout << v.size() << '\n';
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << '\n';
    }
}