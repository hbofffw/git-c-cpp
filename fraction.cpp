#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int numerator = 4, denominator = 6;
	int u = numerator;
	int v = denominator;
	int temp;

	while (v != 0)
	{
		temp = u%v;
		u = v;
		v = temp;
		cout << u<<" "<<v<<" "<<temp<<endl;
	}
	numerator /= u;
	denominator /= u;
	cout<<numerator<<" "<<denominator<<endl;
	return 0;
}