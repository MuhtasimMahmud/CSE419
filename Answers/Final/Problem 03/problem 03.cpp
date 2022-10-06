#include <iostream>

using namespace std;


int getRemainder(int num, int divisor)
{
	return (num - divisor * (num/divisor));
}

int main()
{
	int a,b;
	cin>>a>>b;

	cout << getRemainder(a, b);
	return 0;
}
