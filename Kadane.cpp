#include <iostream>
using namespace std;

void maxSubarray(int array[], int n)
{
    int sum = 0, csum = 0;
    for(int i=0; i<n; i++) {
        csum += array[i];
        if (sum < csum) sum = csum;
        if (csum < 0) csum = 0;
    }
    cout << sum << endl;
}

int main() {
	//code
	int T;
	cin >> T;
	while (T--) {
	    int n;
	    cin >> n;
	    int array[n];
	    for(int i=0; i<n; i++) {
	        int t;
	        cin >> t;
	        array[i] = t;
	    }
	    maxSubarray(array, n);
	}
	return 0;
}