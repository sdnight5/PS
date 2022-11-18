/* #include<bits/stdc++.h>

using namespace std;

int n,mn;
int a1[500001],a2[500001];
int s,e,m;

int main(){
    cin >> n;
    for (int i = 0; i < n; i ++){
        cin >> a1[i];
    }
    cin >> mn;
    for (int i = 0; i < mn; i++){
        cin >> a2[i];
    }

    sort(a1,a1+n);

    /* int flag;
    for (int i = 0; i < mn; i++){
        s=0,e=n-1,flag = 0;
        while(s <= e){
            m = (s+e)/2;
            if (a1[m] > a2[i]) e = m-1;
            else if (a1[m] < a2[i]) s = m+1;
            else {
                flag = 1;
                break;
            }
        }
        cout << flag << " ";
    }*//*

    for (int i = 0; i < mn; i++){
        auto lb = lower_bound(a1,a1+n, a2[i])-upper_bound(a1,a1+n,a2[i]);
        cout << -1*lb << " ";
    }
} */

#include<bits/stdc++.h>

using namespace std;

int n,mn;
map<int,int> m;
int a2[500001];

int main(){
    cin >> n;
    for (int i = 0, a; i < n; i ++){
        cin >> a;
        if (m.find(a)==m.end()) m.insert({a,1});
        else m[a]++;
    }
    cin >> mn;
    for (int i = 0; i < mn; i++){
        cin >> a2[i];
        if (m.find(a2[i]) != m.end()){
            cout << m[a2[i]] << " ";
        }
        else cout << "0 ";
    }

    
}