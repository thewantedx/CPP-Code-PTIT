#include<bits/stdc++.h>
using namespace std; 
int main(){
    int t; 
    cin >> t; 
    while (t--){
        long long n , m; 
        cin >> n >> m ; 
        long long a[n+5], b[m+5];
        for(int i = 0 ; i < n ; i++){
            cin >> a[i];
        }
        for(int i = 0 ; i < m ; i++){
            cin >> b[i];
        }
        sort(a,a+n); sort(b , b+m); 
        cout << a[n-1] * b[0] << endl;  
    }

}