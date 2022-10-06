//ques 04

#include <bits/stdc++.h>

using namespace std;


void combination(int x, int data[], int current_x_index, int current_data_index, int x_length, int data_length)
{
    if(current_data_index == data_length)
    {
        for(int i=0; i<data_length; i++)
        {
            cout<<data[i]<<" ";
        }
        cout<<"\n";
    }

    for(int i=current_x_index; i<x_length; i++)
    {
        data[current_data_index] = x[i];
        combination(arr,data,i, current_data_index+1,x_length,data_length);
    }

}


int main()
{
    int n,k;
    cin>>n>>k;
    string x;

    for(int i=1; i<=n; i++)
    {
        x = x+to_string(i);
    }
    int x_length = x.size();

    for(int i=0; i<(x_length-k); i++ )
    {
        int data[k];
        combination(x,data,i,0,x_length, k);
    }

}
