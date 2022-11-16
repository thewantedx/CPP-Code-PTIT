#include<iostream>
#include<string>
#include <cmath>
#include <iomanip>
#include <algorithm>

using namespace std; 

int checkSNT(int a){
    if(a < 2 ){
        return 0; 
    }
    else{
        for(int i = 2 ; i<= sqrt(a) ; i++ ){
                if (a % i == 0){
                return 0; 
            }
        }
        return 1;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        int check = 0; 
        for(long long i = 2 ; i <= n/2 ; i++ ){
            if(checkSNT(i) && checkSNT(n-i)){
                cout << i << " " << n-i << endl;
                check = 1; 
                break; 
            }
        }
        if(check == 0) cout << "-1" << endl;
    }
}
