#include<bits/stdc++.h>
using namespace std; 
int main(){
    int t; 
    cin >> t; 
    while (t--)
    {
        string s; 
        cin >> s; 
        int a = s.length(); 
        int b[100000]= {0}; 
        for(int i = 0; i < a; i++){
            b[s[i]]++; 
        }
        for (int i = 0 ; i < a ; i ++ ){
            if(b[s[i]] == 1){
                cout << s[i];
            }
        }
        cout << endl; 

    }
    
}