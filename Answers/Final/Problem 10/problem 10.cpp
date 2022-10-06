#include<bits/stdc++.h>

using namespace std ;

void f(int K, char str[], int n)
{
	if (n == K)
	{
		str[n] = '\0' ;
		cout << str << endl;
		return ;
	}

	if (str[n-1] == '1')
	{
		str[n] = '0';
		f (K , str , n+1);
	}

	if (str[n-1] == '0')
	{
		str[n] = '0';
		f(K, str, n+1);
		str[n] = '1';
		f(K, str, n+1) ;
	}
}
void generateAllStrings(int K )
{
	if (K <= 0)
		return ;

	char str[K];

	str[0] = '0' ;
	f ( K , str , 1 ) ;

	str[0] = '1' ;
	f ( K , str , 1 );
}

int main()
{
	int x;
	cin>>x;
	generateAllStrings(x) ;
	return 0;
}
