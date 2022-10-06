#include <iostream>

//problem 02

using namespace std;

void convert_decimal(int x)
{
    int decimal = 0;
    int base = 1;

    while(x > 0)
    {
        int n = x%10;
        decimal = decimal+(n*base);

        x = x/10;
        base = base*2;
    }
    cout<<decimal;
}


int main()
{
    int x;
    cin>>x;

    convert_decimal(x);

    return 0;
}
