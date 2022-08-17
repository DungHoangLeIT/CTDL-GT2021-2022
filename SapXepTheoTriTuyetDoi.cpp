#include <bits/stdc++.h>
using namespace std;
 
void arrange(int arr[], int n, int x)
{
    for (int i = 1; i < n; i++) {
        int diff = abs(arr[i] - x);
        int j = i - 1;
        if (abs(arr[j] - x) > diff) {
            int temp = arr[i];
            while (abs(arr[j] - x) > diff && j >= 0) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = temp;
        }
    }
}
 
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
 
int main()
{
	int t;
	cin >> t;
	while(t--){
	    int n, k, a[100005];
	    cin >> n >> k;
	 	for(int i = 0; i < n; i++) cin >> a[i];
	    arrange(a, n, k);
	    print(a, n);
	    cout << endl;
	}
	    return 0;
}
