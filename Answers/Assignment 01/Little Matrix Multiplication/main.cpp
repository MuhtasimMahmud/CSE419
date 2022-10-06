#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);



    int A[2][2];
    int B[2][2];


    int A_row = sizeof(A)/sizeof(A[0]);
    int A_column = sizeof(A[0])/sizeof(A[0][0]);


    int B_row = sizeof(B)/sizeof(B[0]);
    int B_column = sizeof(B[0])/sizeof(B[0][0]);


    int x;

    for(int i=1; i<=A_row; i++)
    {
        for(int j=1; j<=A_column; j++)
        {
            cin>>x;
            A[i][j] = x;
        }
    }



    for(int i=1; i<=B_row; i++)
    {
        for(int j=1; j<=B_column; j++)
        {
            cin>>x;
            B[i][j] = x;
        }
    }


    int c11 = A[1][1]*B[1][1] + A[1][2]*B[2][1];
    int c12 = A[1][1]*B[1][2] + A[1][2]*B[2][2];
    int c21 = A[2][1]*B[1][1] + A[2][2]*B[2][1];
    int c22 = A[2][1]*B[1][2] + A[2][2]*B[2][2];


//    for(int i=0; i<2; i++)
//    {
//        for(int j=0; j<2; j++)
//        {
//            cout<<C[i][j]<<" ";
//        }
//        cout<<"\n";
//    }






    return 0;
}
