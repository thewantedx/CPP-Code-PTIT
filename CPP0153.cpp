#include<bits/stdc++.h>

using namespace std; 

int main(){
    int t; 
    cin >>t; 
    while(t--){
        long long n , k; 
        cin >> n >> k ; 
        if(n < k){
            cout << (n+1)*n/2 << endl; 
        }
        if(n==k){
            cout << n*(n-1)/2 << endl;
        }
        if(n > k){
            long long sum = (k-1)*k/2;
            for(long long i = k+1 ; i <= n ; i++ ){
                sum = sum + i%k;
            } 
            cout << sum << endl;
        }
        
    }
}