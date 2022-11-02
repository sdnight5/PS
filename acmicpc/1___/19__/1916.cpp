#include<iostream>
#include<queue>
#include<vector>
#define pii pair<int,int>

using namespace std;

int n,m,s,e,d[1001];
vector<pair<int,int>> a[1001];
const int MAX = 1e9; // 1000000000

void dijkstra(int sn){
    priority_queue<pii, vector<pii>, greater<pii>> pq;

    for(int i = 1; i <= n; i++){
        d[i] = MAX;
    }
    d[sn] = 0;
    pq.push({0, sn});

    while(!pq.empty()){
        int dd = pq.top().first, cu=pq.top().second;
        pq.pop();
        if (dd<=d[cu]){
            for(pii next : a[cu]){
                int d2 = dd+next.second;
                if (d[next.first] > d2){
                    pq.push(make_pair(d2, next.first));
                    d[next.first] = d2;
                }
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    int u,v,c;
    for(int i = 0; i < m; i++){
        cin >> u >> v >> c;
        a[u].push_back(make_pair(v,c));
    }

    cin >> s >> e;

    dijkstra(s);

    cout<<d[e] << endl;

/*     for(int i = 1; i <= n; i++){
        cout << d[i] << endl;
    } */

    return 0;
}