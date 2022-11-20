#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int mat[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }

    int k;
    cin >> k;
int j=n-1,i=0;
   while(i<n&&j>=0){
    if(mat[i][j]==k){
        cout<<"GetIt"<<" "<<i<<" "<<j<<endl;

        break;
    }
    else if(mat[i][j]>k){
        j--;
    }
    else {
        i++;
    }
   }
    return 0;
}