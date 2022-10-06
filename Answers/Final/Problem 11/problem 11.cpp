#include <bits/stdc++.h>

using namespace std;

int k;

void printArray(vector<int> arr, int n)
{
    int product = 1;
	for (int i = 0; i < n; i++)
    {
        product = product*arr[i];
    }
    if(product%k == 0)
    {
        for(int i=0; i<n; i++)
            cout<< arr[i] << " ";
        cout<< endl;
    }
}

void Subsequences(vector<int> arr, int index,vector<int> subarr)
{
	if (index == arr.size())
	{
		int l = subarr.size();
		if (l != 0)
			printArray(subarr, l);
	}
	else
	{
		Subsequences(arr, index + 1, subarr);
		subarr.push_back(arr[index]);
		Subsequences(arr, index + 1, subarr);
	}
	return;
}

int main()
{
	vector<int> arr;
	vector<int> b;

	int n;
	cin>>n>>k;

	for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    cout<< endl;
    Subsequences(arr, 0, b);

	return 0;
}
