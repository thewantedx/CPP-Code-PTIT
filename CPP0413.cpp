#include<bits/stdc++.h>

using namespace std; 

int main (){
    int t; 
    cin >> t; 
    while(t--){
        int n ; 
        cin >> n; 
        int a[n+5]; 
        for(int i = 0 ; i < n; i++){
            cin >> a[i];
        }
        sort(a, a+n);
        if(n%2 == 0) { 
            for(int i = 0; i <  n/2 ; i++ ){
                cout << a[n-1-i] << " " << a[i] << " "; 
            }
        }
        else{
            for(int i = 0; i <  n/2 ; i++ ){
                cout << a[n-1-i] << " " << a[i] << " "; 
            }
            cout << a[n/2];
        }
        cout << endl ; 
    }
}