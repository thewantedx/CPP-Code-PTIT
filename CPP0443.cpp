#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        int a[n+5];
        int sum=0;
        for (int i = 0; i < n-1; i++){
            cin >> a[i];
            sum+=a[i];
        }
        cout << (n+1)*n/2-sum;
        cout << endl;
    }
    return 0;
}