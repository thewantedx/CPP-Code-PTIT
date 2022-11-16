#include<bits/stdc++.h>
using namespace std; 
int main (){
    int t; 
    cin >>t; 
    while (t--)
    {    
        long long n; 
        cin >> n; 
        long long a[n]; 
        for(long long i = 0; i < n ; i++){
            cin >> a[i];
        }
        sort(a,a+n);
        int count = 0;
        for(long long i = 0; i < n ; i++){
            if(a[i]==a[i+1] || a[i-1] == a[i]){
                count++;
            }   
        }
        cout << count << endl;
    }
}