/*
Given an array C of size N-1 and given that there are numbers from 1 to N with one element missing, the missing number is to be found.

Input:
The first line of input contains an integer T denoting the number of test cases. For each test case first line contains N(size of array). 
The subsequent line contains N-1 array elements.

Output:
Print the missing number in array.

Constraints:
1 ≤ T ≤ 200
1 ≤ N ≤ 107
1 ≤ C[i] ≤ 107

Example:
Input:
2
5
1 2 3 5
10
1 2 3 4 5 6 7 8 10

Output:
4
9


*/

#include <iostream>
using namespace std;

void missing(int a[], int n)
{
	//cout<<"run";
	for(int i=1;i<=n;i++)
	{
	//	cout<<a[i-1]<<"  - "<<i<<"   |    ";
		if(a[i-1]!=i)
		{
			cout<<i<< endl;
			break;
		}
	}
	
}
int main() {
	int T;
	cin >> T;
	while (T--) {
	    int n;
	    cin >> n;
	    int array[n-1];
	    for(int i=0; i<n-1; i++) {
	        int t;
	        cin >> t;
	        array[i] = t;
	    }
	    missing(array,n-1);
	}
	return 0;
}