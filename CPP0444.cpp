#include <bits/stdc++.h>
using namespace std;


int main() {
   
    int test;
    cin >> test;
    while (test--) {
        long long n, k;
        cin >> n >> k;
        long long A[n+1];
        for(long long i = 1; i <= n;i++) cin >> A[i];
        for(long long i = 1; i <= n;i++)
            if(A[i] == k) cout << i << endl;
        cout << endl;
    }
    return 0;
}