#include <bits/stdc++.h>

using namespace std; 
int main(){
    int t; 
    cin >> t; 
    while(t--){
        long long n; 
        cin >> n ; 
        long long a[n+5]; 
        for(long long i = 0 ;i < n ;i++){
            cin >> a[i]; 
        } 
        
        long long count = 0; 
        for(long long i = 0 ; i< n ;i++){
            if(a[i]==0){
                count ++;  
            }
        }
        for(long long i = 0 ; i < n ; i++){
            if(a[i]!=0){
                cout << a[i] << " ";
            } 
        }
        for(long long  i = 0 ; i < count ; i++){
            cout << 0 << " "; 
        }
        cout << endl ; 
    }
}