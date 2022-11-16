#include<iostream>
#include<string>
#include <cmath>
#include <iomanip>

using namespace std; 

int main() {
    
    int n;
    cin >> n;
    int cnt = 0;
    while (n % 2 == 0) {
        cnt++;
        n /= 2;
    }
    if (cnt != 0)
        cout << 2 << " " << cnt << endl;
    for (int i = 3; i <= sqrt(n); i += 2) {
        cnt = 0;
        while (n % i == 0) {
            cnt++;
            n /= i;
        }
        if (cnt > 0)
            cout << i << " " << cnt << endl;
    }
    if (n > 2) {
        cout << n << " " << 1 << endl;
        return 0;
    }
}