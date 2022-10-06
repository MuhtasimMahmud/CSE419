#include <iostream>

using namespace std;

bool isPalindrome(string x, int i, int j)
{
    if(i == x.size()-1 && j == 0 && x[i] == x[j])
        return true;

    if(x[i] == x[j])
        isPalindrome(x, i+1, j-1);
    else
        return false;
}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    string x;
    cin>>x;
    int y = x.size();

    if(isPalindrome(x,0,y-1) == true)
        cout<<"The word is palindrome"<<"\n";
    else
        cout<<"The word isn't palindrome"<<"\n";

    return 0;
}
