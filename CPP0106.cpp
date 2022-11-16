#include<iostream>

#include<string>

#include <cmath>

#include <iomanip>


using namespace std; 

int main(){
    int t ; 
    cin >> t ;
    while (t -- )
    {
        long long n ;
        cin >> n; 
        int k = 1;
        int m = log10(n) + 1; 
        int a[m]; 
        for(int i = 0; i < m ; i++){
            a[i] = n %10; 
            n=n/10;
        }
        for(int i = 0; i <= (m-1)/2; i++){
            if(a[i] != a[m-1-i]){
                k = 0; 
            }
        }
        if(k ==1) {cout << "YES" << endl;}
        else{cout << "NO" << endl;}
        
    } 
    

}