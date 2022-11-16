#include <iostream>

#include <cmath>

using namespace std; 


int main(){
    int n; 

    cin >> n; 
    long long a = pow(10,n-1);
    long long b = pow(10,n)-1;
    int count_dem =0; 
    for(int i = a ; i <=b ; i++){
        
        int count_le = 0;
        int count_chan = 0; 
        int p = i;
        while(p != 0){
            int x = p%10; 
            if(x % 2 ==0) {count_chan++;}
            else{count_le++;}
            p = p/10;
        }
        if(count_chan == count_le){
            cout << i <<" ";
            count_dem++; 
        }
        if(count_dem % 10 == 0){
            cout << "\n";
        } 

    }


}