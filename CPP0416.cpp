#include<bits/stdc++.h>

using namespace std; 

int main(){
    int t; 
    cin >> t; 
    while (t--)
    {
        int n, k; 
        cin >> n >> k; 
        int a[n+5]; 
        for(int i= 0 ; i < n; i++){
            cin >> a[i]; 
        }
        sort(a,a+n);
        int count = 0;  
        for(int i = 0; i < n ; i++ ){
            for(int j = i+1 ; j <n ; j++){
                if(k - a[i] == a[j]){
                    count++; 
                }
            }
        }
        cout << count  << endl;
    }
    
}