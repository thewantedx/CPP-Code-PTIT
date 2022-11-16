/*#include<bits/stdc++.h>
using namespace std; 
int main(){
    int t; 
    cin >> t; 
    while (t--)
    {
        long long n; 
        cin >> n; 
        long long a[n+5]; 
        for(long long i = 0; i < n; i++){
            cin >> a[i]; 
        }    
        sort(a, a+n); 
        long long sum = 0 ;
        if(a[0] >= 0){
            sum = a[0] + a[1];
        }
        else if(a[n-1] <= 0){
            sum = a[n-1] + a[n-2];
        }
        else{
            for(long long i = 0 ; i < n ; i++){
                if(a[i] >= 0) {
                    if(abs(a[i]+a[i-1]) >= abs(a[i]+a[i+1])){
                        sum = a[i]+a[i+1];
                        break;
                    }
                    else{
                        sum = a[i]+a[i-1];
                        break;
                    }
                }
            }
        }
        cout << sum << endl;
    }
    
    return 0; 

}
*/ 


// Chua tim thay loi sai :( rat la bun lun

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++){
			cin >>a[i];
		}
		long min=abs(a[0]+a[1]);
		int a1,a2;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(min>abs(a[i]+a[j])){
					min=abs(a[i]+a[j]);
					a1=a[i];
					a2=a[j];
				}
			}
		}
		long tong=(long)a1+a2;
		cout << tong;
        cout << endl;
    }
    return 0;
}