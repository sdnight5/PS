#include<bits/stdc++.h>
#define endl '\n'
#define pii pair<int,int>

using namespace std;

int che[1000005];
int a,b;
vector<int> v;

int main()
{
    cin >> a >> b;

    for (int i = 2; i <= 1000000; i++){
        if (che[i] == 0){
            v.push_back(i);
            for (int j = i; j <= 1000000; j+=i){
                che[j] = 1;
            }
        }
    }
    for(int elements : v) {
        if (elements >= a && elements <= b) cout << elements << "\n";
    }

    return 0;
}