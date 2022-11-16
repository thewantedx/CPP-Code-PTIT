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
    while (t--)
    {
        int m , n ; 
        cin >> m >> n ; 

        for(int i = m ; i <= n; i++ ){
            if(checkSNT(i) == 1){
                cout << i << " ";
            }
        }
        cout << endl;
    }
    
}