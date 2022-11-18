//KRUSKAL ALGORITHM

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int n,m,root[1005];
struct edge
{
    int x,y,c;
};
vector<edge> v;

int find(int a)
{
    if (root[a] == a) return a; // if root says me? than return endpos(= a)
    return root[a] = find(root[a]); // if not root says me? than find endpos and change to it
}

int main()
{
    cin >> n >> m;

    for(int i = 0,a,b,c; i < m; i++){
        cin >> a >> b >> c;
        v.push_back({a,b,c}); // a = xpos, b = ypos, c = cost
    }
    sort(v.begin(),v.end(),[](edge a, edge b){ // sort (std=>cost)
        return a.c<b.c;
    });

    for (int i = 1; i <= n; i++){ // reset root to says me
        root[i] = i;
    }

    int cnt=0,sum=0;
    for(int i = 0,a,b; i < m; i++){
        a = find(v[i].x), b = find(v[i].y);
        if (a != b){ // if a != b (not cycle)
            root[a] = b; // make root says b val
            sum += v[i].c; // add cost val to sum
            cnt++; // check edges
        }
        if (cnt == n-1) break; // if checked all edge? than break
    }

    cout << sum; // output sum val

    return 0;
}