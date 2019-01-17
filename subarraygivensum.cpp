/*
Given an unsorted array A of size N of non-negative integers, find a continuous sub-array which adds to a given number.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. 
Each test case consists of two lines. The first line of each test case is N and S, where N is the size of array and S is the sum. 
The second line of each test case contains N space separated integers denoting the array elements.

Output:
For each testcase, in a new line, print the starting and ending positions(1 indexing) of first such occuring subarray from the left if sum equals to 
subarray, else print -1.

Constraints:
1 <= T <= 100
1 <= N <= 107
1 <= Ai <= 1010

Example:
Input:
2
5 12
1 2 3 7 5
10 15
1 2 3 4 5 6 7 8 9 10
Output:
2 4
1 5
*/
#include <iostream>
using namespace std;

void subarray( int a[],int n, int s)
{
	int sum=0,f=0,i=0;
	//cout<<"run    ";
	for (i=0;i<n;i++)
	{
		sum=sum+a[i];
		if (sum==s)
			break;
		else if (sum>s)
		{
			for (f=0;f<i;f++)
			{
				sum=sum-a[f];
			//	cout<<f;
				if (sum==s)
					break;
			}f++;
			if(f>i)
			{
				sum=0;

			}
			else
				break;
		}
	}
	cout<<(f+1)<< " " <<(i+1)<<endl;
}

int main() {
	//code
	int T;
	cin >> T;
	while (T--) {
	    int n,sum;
	    cin >> n>> sum;
	    int array[n];
	    for(int i=0; i<n; i++) {
	        int t;
	        cin >> t;
	        array[i] = t;
	    }
	    subarray(array, n,sum);
	}
	return 0;
}