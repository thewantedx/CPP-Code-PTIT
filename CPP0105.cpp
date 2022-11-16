#include<iostream>

#include<string>

#include <cmath>

#include <iomanip>


using namespace std; 

int main(){
    int t; 
    cin >> t ; 
    while (t--)
    {
        int n; 
        cin >> n ;
        int p, q =1;  
        while (n != 0){
            p = n %10; 
            if(p != 0 && p != 6 && p != 8 ){
                q = 0; 
                
            }
            n /= 10;
        }
        if(q == 1) {
            cout << "YES" << endl;
        } 
        else{
            cout << "NO" << endl; 
        }
        
    }
    

}