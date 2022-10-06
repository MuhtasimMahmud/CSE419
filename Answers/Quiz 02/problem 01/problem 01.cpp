#include <bits/stdc++.h>

using namespace std;

int index_of_last_0(string x)
{
    int low = 0;
    int high = (int)x.size()-1;

    while(low < high)
    {
        int mid = ((low+high)/2)+1;

        if(x[mid] == '0' && x[mid+1] == '1')
            return mid;

        if(x[mid] == '1')
            high = mid-1;
        else
            low = mid;
    }
    return -1;
}

int main()
{
    string x;
    cin>>x;

    int i = index_of_last_0(x);
    cout<<i<<endl;

    return 0;
}
