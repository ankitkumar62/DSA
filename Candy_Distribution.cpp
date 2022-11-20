#include <iostream>
using namespace std;
string check(int a,int b,int c){

c=a/b;
 if (a%b==0&&c%2==0){
        return "Yes";
        }
        else
        {
           return "No";
        }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        int b;
        int c;


        cin >> a >> b;

       
        cout << check(a, b,c) << endl;
    }

    return 0;
}