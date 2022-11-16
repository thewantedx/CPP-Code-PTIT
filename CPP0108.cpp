#include<bits/stdc++.h>
using namespace std;
int checkSNT(long long a){
    if(a<2) return 0; 
    else{
        for(int i = 0; i <= sqrt(a); i++){
            if(a%i== 0) return 0; 
        }
        return 1; 
    }
} 

int check_Sotanggiam(long long a){
    int check;
    while(a>=10){
        int p = a%10; 
        a /= 10;          
        int q = a%10; 
        if(abs(p-q) == 1 ) { 
            check = 1; 
        }
        else {
            check = 0;
            break;
        } 
    }
    return check; 
}
int main (){
    int t;
    cin >> t; 
    while (t--)
    {
        int n; 
        cin >> n;
        long long a = pow(10, n-1) +1;
        long long b = pow(10, n) -1;  
        long long count = 0; 
        for(long long i = a ; i <= b ; i+=2 ){
            if(checkSNT(i) == 1 && check_Sotanggiam(i) == 1) count++;
        } 
        cout << count << endl;
    }
}