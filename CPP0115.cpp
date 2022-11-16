#include<iostream>
#include<string>
#include <cmath>
#include <iomanip>

using namespace std; 

int main(){
    int t;
    cin >> t; 
    while(t--){
        int n; 
        cin >> n; 
        for(int i = 2 ; i <= n ;i++){
            int count = 0; 
            while(n%i==0){
                count++; 
                n /= i;                
            }
            if(count > 0){
                cout << i << " "<< count << " "; 
            }
            
        }
        cout << "\n";
    }

}