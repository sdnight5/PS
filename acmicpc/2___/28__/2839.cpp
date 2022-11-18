#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int f,dap=-1;
    for(f = 0; n >= 0; f++,n-=5){
        if (n%3 == 0) dap = f+n/3;
        // cout << f << " " << n/3 << " " << n << " " << dap << "\n";
    }
    cout << dap;
    
    return 0;
}