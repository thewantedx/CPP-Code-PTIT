#include<iostream>
#include<string>
#include <cmath>
#include <iomanip>

using namespace std; 

int main(){
    
    int test;
    cin >> test;
    while (test--) {
        long long n;
        cin >> n;
        while(n%2==0){
            cout << 2 <<" ";
            n/=2;
        }
        for(int i=3; i<=sqrt(n); i+=2){
            while(n%i==0){
                cout << i << " ";
                n=n/i;
            }
        }
        if(n>2)
            cout << n;
        cout << endl;
    }
    return 0;

}