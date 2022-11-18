/* #include<bits/stdc++.h>
#define endl '\n'

using namespace std;

int n,m;
vector<int> to[105];
int did[105];
queue<int> q;

void bfs()
{
    int now=0,f;
    did[1] = 1;
    q.push(1);
    while (!q.empty()){
        f = q.front();
        q.pop();
        for (int i = 0; i< to[f].size(); i++){
            if (!did[i]){
                did[i]=1;
                q.push(to[f][i]);
                now++;
            }
        }
    }
    cout << now;
}

int main()
{
    cin >> n >> m; 

    for (int i = 0,x,y; i < m; i++){
        cin >> x >> y;
        to[x].push_back(y);
        to[y].push_back(x);
    }

    bfs();

    return 0;
} */

#include<bits/stdc++.h>
#define endl '\n'

using namespace std;

int root[105],cnt[105],n,m;

int find(int a)
{
    if (root[a] == a) return a;
    return root[a] = find(root[a]); 
}

void Union(int a, int b)
{
    if (cnt[a] > cnt[b]){
        root[b] = a;
        cnt[a] += cnt[b];
    }
    else {
        root[a] = b;
        cnt[b] += cnt[a];
    }
}

int main()
{
    cin >> n >> m;

    for(int i = 1; i <= n; i++){
        root[i] = i, cnt[i] = 1;
    }

    for (int i = 0,a,b; i < m; i++){
        cin >> a >> b;
        a = find(a),b= find(b);
        if (a != b) Union(a,b);
    }

    cout << cnt[find(root[1])]-1;

    return 0;
}