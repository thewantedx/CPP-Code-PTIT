#include<iostream>
#include<string>
#include <cmath>
#include <iomanip>
#include<algorithm>

using namespace std; 

// long long UCLN(long long a , long long b) { 
//     while (a != b){
// 		if (a > b)
// 				a -= b;
// 		if (b > a)
// 			b -= a;
// 	}
//     return a ;
//}

int main(){
    int t; 
    cin >> t; 
    while (t--){
        long long n; 
        cin >> n;
        long long count = 1; 
        for(long long i = 1; i <= n; i++){
            count = count * i /__gcd(count,i);
        }
        cout << count << endl;
    }
}

