#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; 
    cin >> t ; 
    while(t--){
        int n, Q; 
        cin >> n >> Q; 
        int a[n+5];
        for(int i = 1 ; i <= n; i++){
            cin >> a[i];
        } 
        for(int i = 0; i < Q; i++ ){
            int l, r,sum = 0; 
            cin >> l >> r ; 
            for(int i = l ; i <= r ; i++){
                sum += a[i]; 
            }
            cout << sum << endl; 
        }
        cout << endl; 
    }
}