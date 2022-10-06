#include <bits/stdc++.h>

using namespace std;

void passwordGenerator(string x, int pass_length )
{
    if(x.size() == pass_length)
    {
        cout<<x<<"\n";
        return;
    }

    int j = rand()%9;
    x = x+to_string(j);

    if(x.size() < pass_length)
    {
        int i = (rand()%(90-65))+65;
        x = x+char(i);
    }

    if(x.size() < pass_length)
    {
        int i = (rand()%(122-97))+97;
        x = x+char(i);
    }

    passwordGenerator(x,pass_length);

}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int n;
    cin>>n;
    srand(time(0));

    passwordGenerator("",n);

    return 0;
}
