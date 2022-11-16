#include<iostream>
#include<string>
#include <cmath>
#include <iomanip>

using namespace std; 



int main(){
    int t ; 
    cin >> t; 
    while(t--){
        long long n;
        cin >> n;
        int count = 0;
        while(n >= 10){
            int m = n%10;
            n=n/10;
            int k = m - (n%10);
            if(abs(k)!=1){
                count++;
            }   
        }
        if(count > 0 ){
            cout<< "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }

}