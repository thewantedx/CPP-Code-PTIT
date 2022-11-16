#include<bits/stdc++.h>
using namespace std; 
#define mp make_pair 
#define fi first 
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i,a,b) for(int i =a; i <= b ; ++i)
#define FORD(i,a,b) for(int i = a; i <= b ; --i)
#define F(i,a,b) for(int i = a ; i < b ; ++i)
#define FD(i,a,b) for(int i = a; i > b ; --i)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define PI 3.141592653589793238
#define endl '\n'


int main(){
	
	int t; 
	cin >> t; 
	while (t--)
	{
		int d, m; 
		cin >> d >> m; 
		
		if(m == 1)
		{
			if(d <= 19)
			{
				cout << "Ma Ket" << endl;
			}
			else cout << "Bao Binh" << endl;
		}
		else if(m == 2)
		{
			if(d <= 18)
			{
				cout << "Bao Binh" << endl;
			}
			else cout << "Song Ngu" << endl;
		}
		else if(m == 3)
		{
			if(d <= 20)
			{
				cout <<  "Song Ngu" << endl;
			}
			else cout << "Bach Duong" << endl;
		}
		else if(m == 4)
		{
			if(d <= 19)
			{
				cout << "Bach Duong" << endl;
			}
			else cout << "Kim Nguu" << endl;
		}
		else if(m == 5)
		{
			if(d <= 20)
			{
				cout <<  "Kim Nguu" << endl;
			}
			else cout << "Song Tu" << endl;
		}
		else if(m == 6)
		{
			if(d <= 20)
			{
				cout <<  "Song Tu" << endl;
			}
			else cout << "Cu Giai" << endl;
		}
		else if(m == 7)
		{
			if(d <= 22)
			{
				cout <<  "Cu Giai" << endl;
			}
			else cout << "Su Tu" << endl;
		}
		else if(m == 8)
		{
			if(d <= 22)
			{
				cout <<  "Su Tu" << endl;
			}
			else cout << "Xu Nu" << endl;
		}
		else if(m == 9)
		{
			if(d <= 22)
			{
				cout <<   "Xu Nu" << endl;
			}
			else cout << "Thien Binh" <<endl;
		}
		else if(m == 10)
		{
			if(d <= 22)
			{
				cout <<  "Thien Binh" << endl;
			}
			else cout << "Thien Yet" << endl;
		}
		else if(m == 11)
		{
			if(d <= 22)
			{
				cout <<  "Thien Yet" << endl;
			}
			else cout << "Nhan Ma" << endl;
		}
		else if(m == 12)
		{
			if(d <= 21)
			{
				cout <<  "Nhan Ma" << endl;
			}
			else cout << "Ma Ket" << endl ;
		}

	}
	
	return 0; 
}