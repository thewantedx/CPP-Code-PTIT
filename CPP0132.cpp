#include<bits/stdc++.h>

using namespace std; 

int checkSNT(long long a){
    if(a < 2 ){
        return 0; 
    }
    else{
        for(long long i = 2 ; i<= sqrt(a) ; i++ ){
                if (a % i == 0){
                return 0; 
            }
        }
        return 1;
    }
}

int main(){
    int t;
    cin>> t; 
    while (t--)
    {
        long long n; 
        cin >> n; 
        long long max = 0; 
        for(long long j = 1; j <= sqrt(n) ; j++ ){
            if(n%j == 0 ){
                if(checkSNT(j) && j > max ) {
                    max = j; 
                }
                if(checkSNT(n/j) && n/j > max ) {
                    max = n/j; 
                }
            }
        }
        cout << max << endl;
    }
    
}