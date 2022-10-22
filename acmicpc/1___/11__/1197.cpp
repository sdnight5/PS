#include<iostream>
#include<algorithm>
#include<vector>
typedef long long ll;

using namespace std;

int n,e,root[10005];
struct edge{
    int x,y,c;
};

vector<edge> v;

int find(int a)
{
    if (root[a] == a){
        return a;
    }
    return root[a]=find(root[a]);
}

int main()
{
    cin >> n >> e;
    for(int i = 0,a,b,c; i < e; i++){
        cin >> a >> b >> c;
        v.push_back({a,b,c});
    }
    sort(v.begin(),v.end(),[](edge a, edge b){
        return a.c<b.c;
    });

    for(int i = 0; i < n; i++){
        root[i+1] = i+1;
    }

    ll cnt=0,sum=0;
    for(int i = 0,a,b; i < e; i++){
        a = find(v[i].x), b = find(v[i].y);
        if (a != b){
            root[a] = b;
            sum += v[i].c;
            cnt++;
        }
        if (cnt == e-1) break;
    }
    cout << sum;
}