#include <bits/stdc++.h>

using namespace std;


int number_of_one(int x)
{
    int counter = 0;
    while(x>0)
    {
        if(x % 2 == 1)
            counter++;

        x = x/2;
    }
    return counter;
}




int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int x;
    cin>>x;
    int one_counter_of_given_input = number_of_one(x);


    for(int i = 1; i<= x; i++)
    {
        int smallest_number_of_same_one = number_of_one(i);
        if(smallest_number_of_same_one == one_counter_of_given_input)
        {
            cout<<i<<"\n";
            break;
        }
    }


    return 0;
}
