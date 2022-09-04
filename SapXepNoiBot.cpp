#include<bits/stdc++.h>
using namespace std;


int main()
{
	long long n;
    cin>>n;
	long long a[n + 5];
    for(int &x : a) cin >> x;
    for (int i = 0; i < n-1; i++){
        bool ok = false;
        for (int j = 0; j < n-i-1; j++){
            if (a[j] > a[j+1]){
                swap(a[j],a[j+1]);
                ok = true; 
            }
        }
        if(ok)
        {
            cout<<"Buoc "<<i+1<<": ";
            for(int x=0;x<n;x++)
                cout<<a[x]<<" ";
            cout<<"\n";
        }
        else
        {
            cout<<"Buoc "<<i+1<<": ";
            for(int x=0;x<n;x++)
                cout<<a[x]<<" ";
        }
    }    
}
