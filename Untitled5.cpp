#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    multiset<string,greater<string > > mse;
    while(n--)
    {
        string s;
        cin >> s;
        mse.insert(s);
    }
    for(auto & x : mse)
        cout << x;

    return 0;
}
