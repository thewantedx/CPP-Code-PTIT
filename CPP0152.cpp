#include<bits/stdc++.h>

using namespace std; 

int main(){
    int t; 
    cin >> t; 
    while(t--){
        int a, m; 
        cin >> a >> m;
        int x = a%m;
        int temp;  
        if(m == 1) temp = -1; 
        else{
            for(int i = 1; i <= m-1 ; i++ ){
                if((x*i)%m == 1) { 
                    temp = i;
                    break; 
                }
                else temp = -1;
            }
        }
        cout << temp << endl;
    }
}