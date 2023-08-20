class Solution{
public:	
	int count(int arr[], int n, int x) {
	    // code here
int i=lower_bound(arr, arr+n, x) - arr;
	    if (arr[i] != x) return 0;
	    int j=upper_bound(arr, arr+n, x) - arr;
	    return (j-i);
	}
};
