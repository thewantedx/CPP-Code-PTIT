#include<iostream>

#include<string>

#include <cmath>


using namespace std; 

int main(){
    int t; 
    cin >> t; 
    while (t--){
        long long  n; 
        cin >> n ; 
        cout << (n+1)*n/2;
        cout << endl;
    }
    return 0;
}