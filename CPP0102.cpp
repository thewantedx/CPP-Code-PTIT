#include<iostream>

#include<string>

#include <cmath>


using namespace std; 

int main(){
    int t ; 
    cin >> t; 
    while (t--){
        char a ; 
        cin >> a; 
        if(a > 96) {
            cout << char(a - 32) << endl;  
        }
        else{
            cout << char(a + 32) << endl;
        }
    }
}