#include<iostream>
#include<string>
#include <cmath>
#include <iomanip>
#include <algorithm>

using namespace std; 

int main(){
    long long n; 
    cin >> n; 
    int count = 0;
    for(int i = 2; i <= sqrt(n) ; i++){
        if(n%i == 0){
            count ++;
        }
    }
    if(count == 0 && n >=2){
        cout << "YES"; 
    }
    else cout << "NO";
}