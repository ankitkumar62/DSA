#include <bits/stdc++.h>

using namespace std;

class MissingNumber
{
private:
    vector<int> &a;

public:
    MissingNumber(vector<int> &inputArray) : a(inputArray) {}

    int findMissingNumber()
    {
        sort(a.begin(), a.end());

        for (auto i = a.begin(); i != a.end(); i++)
        {
            if (*i > distance(a.begin(), i))
            {
                return *i - 1;
            }
        }
        return -1;
    }
};

int main()
{

    vector<int> a{0, 1, 5,4, 2};
    MissingNumber finder(a);
    int missingNumber = finder.findMissingNumber();

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
