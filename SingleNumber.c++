#include <bits/stdc++.h>

using namespace std;

class SingleNumber
{
private:
    vector<int> arr;

public:
    SingleNumber(vector<int> &a) : arr(a) {}
    int findNumber()
    {
        sort(arr.begin(), arr.end());

        for (auto i = 0; i < arr.size(); i++)
        {
            if (i == arr.size() - 1 || arr[i] != arr[i + 1]) {
                return arr[i];
            }

            else
               
                  i++;
            
        }
        return -1;
    }
};

int main()
{
    vector<int> b{1, 1, 5, 5, 2,2,9};
    SingleNumber finder(b);
    int missingNumber = finder.findNumber();

    if (missingNumber != -1)
    {
        cout << "The missing number is: " << missingNumber << endl;
    }
    else
    {
        cout << "No missing number found." << endl;
    }

    return 0;
}
