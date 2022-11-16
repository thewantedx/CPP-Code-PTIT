#include<bits/stdc++.h>
using namespace std;
int checkSNT(long long a){
    if(a < 2) return 0; 
    else{
        for(long long i = 2 ; i <= sqrt(a) ; i++){
            if(a % i == 0 ) return 0; 
        }
        return 1; 
    }
}
int main(){
    int t;
    cin >> t; 
    while (t--){
        long long n; 
        cin >> n; 
        for(long long i = 2; i <= sqrt(n) ; i++){
            if(checkSNT(i) == 1){
                cout << i*i << " ";
            }
        } 
        cout << endl;
    }
    return 0;
}