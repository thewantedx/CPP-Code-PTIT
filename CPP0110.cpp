#include<iostream>
#include<string>
#include <cmath>
#include <iomanip>
using namespace std; 
int main(){
    int t;
    cin >> t; 
    while(t--){
        long long  n; 
        cin >> n; 
        int length_n = log10(n)+1;
        int a[length_n];
        int x;
        for(int i = 0; i < length_n ;i++){
            a[i] = n%10;
            n /= 10;
        }
        for(int i = 0 ; i < length_n ; i++){
            if(a[i]== 4 && a[i+1] == 8 && a[i+2] ==0 ){
              x = i;   
            }
        }
        for(int i = length_n-1  ; i > x+2 ; i--){
            cout << a[i] ;
        }
        for(int i = x-1 ; i >= 0 ; i--){
            cout << a[i] ;
        }
        cout << endl;
    }
}