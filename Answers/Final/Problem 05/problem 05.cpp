#include <bits/stdc++.h>

using namespace std;

int index_of_first_1(string x)
{
    int low = 0;
    int high = (int)x.size()-1;

    while(low < high)
    {
        int mid = ((low+high)/2);

        if(x[mid] == '0')
            low = mid+1;
        else
            high = mid;
    }
    return low;
}

int main()
{
    string x;
    cin>>x;

    int i = index_of_first_1(x);
    cout<<i<<endl;

    return 0;
}
