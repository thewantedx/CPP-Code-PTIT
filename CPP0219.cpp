#include<bits/stdc++.h>
using namespace std; 

int main(){
    int t; 
    cin >> t; 
    while(t--){
        int a ,b;
        cin >> a >> b; 
        int x[a+5][b+5];
        int y[a+5][b+5] ={0};
        for(int i = 0; i< a ; i++){
            for(int j = 0; j < b ; j++ ){
                cin >> x[i][j];
                if(x[i][j] ==1 ){
                    for(int m = 0; m < a ;m++){
                        for(int n = 0 ;n < b ; n++){
                            if(m == i || n == j){
                                y[m][n] =1; 
                            }
                        }
                    }
                }
            }
        }
        for (int i = 0 ; i < a ; i ++){
            for(int j = 0 ; j < b ; j++){
                cout << y[i][j] << " ";
            }
            cout << endl; 
        }
    }
    return 0; 
}