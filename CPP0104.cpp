#include<iostream>

#include<string>

#include <cmath>

#include <iomanip>


using namespace std; 

int main(){
    int n; 
    cin >> n;
    long long multiple = 1;  
    long long sum = 0; 
    for(int i =1 ; i <= n ; i++){
        multiple *= i; 
        sum += multiple ; 
    }

    cout << sum;

    return 0;

}