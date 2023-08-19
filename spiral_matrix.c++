#include <bits\stdc++.h>
using namespace std;
int main()
{
    int n;
    int i;
    cin >> n;
    int mat[n][n];
    for (i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }
    for (i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    int top = 0, right = n - 1, bottom = n - 1, left = 0;

    while (top <= bottom && left <= right)
    {

        for ( i = left; i <= right; i++)
        {
            cout << mat[top][i] << " ";
        }
        top++;

        for ( i = top; i <= bottom; i++)
        {
            cout << mat[i][right] << " ";
        }
        right--;

        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                cout << mat[bottom][i] << " ";
            }
            bottom--;
        }

        if (left <= right)
        {
            for ( i = bottom; i >= top; i--)
            {
                cout << mat[i][left] << " ";
            }
            left++;
        }
    }
    return 0;
}
