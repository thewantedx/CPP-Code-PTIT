#include<iostream>

#include<string>

#include <cmath>

#include <iomanip>


using namespace std; 

int main(){
    int n; 
    cin >> n; 

    double sum = 0 ; 

    for (int i = 1 ; i <=n ; i++){
        sum += 1.0/(double)i; 
    }

    cout << setprecision(4)<< fixed <<  sum;

    return 0; 

}