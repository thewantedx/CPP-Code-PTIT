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
    int m , n ; 
    cin >> m >> n ; 
    int max, min; 
    if(m >= n ) {
        max = m ; 
        min = n; 
    }
    else { 
        max = n ; 
        min = m ; 
    }

    for(int i = min ; i <= max; i++ ){
        if(checkSNT(i) == 1){
            cout << i << " ";
        }
    }
}