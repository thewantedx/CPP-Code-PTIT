#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t; 
	while (t--)
	{
		long long a, b;
		cin >> a >> b; 
		long long m = a * b;
		while (a != b)
		{
			if (a > b)
				a -= b;
			if (b > a)
				b -= a;
		}
        cout << m / a << " " << a << endl;
	}
}