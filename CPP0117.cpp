#include<iostream>
#include<string>
#include <cmath>
#include <iomanip>

using namespace std; 

int main(){
    int t; 
    cin>>t;
    while (t--)
    {
        long long n; 
        cin >> n;
        
        while(n/10 != 0){
            int sum = 0;
            while(n!=0){
                sum = sum + (n%10);
                n/=10;
            }
            n = sum;
        }
        cout << n << endl;
    }
    

}