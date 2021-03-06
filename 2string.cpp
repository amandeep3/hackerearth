
/*
Problem
Given two strings of equal length, you have to tell whether they both strings are identical.

Two strings S1 and S2 are said to be identical, if any of the permutation of string S1 is equal to the string S2. See Sample explanation for more details.

Input :

First line, contains an intger 'T' denoting no. of test cases.
Each test consists of a single line, containing two space separated strings S1 and S2 of equal length.
Output:

For each test case, if any of the permutation of string S1 is equal to the string S2 print YES else print NO.
Constraints:

1<= T <=100
1<= |S1| = |S2| <= 10^5
String is made up of lower case letters only.
Note : Use Hashing Concept Only . Try to do it in O(string length) .

Sample Input
3
sumit mitsu
ambuj jumba
abhi hibb
Sample Output
YES
YES
NO
Time Limit: 1
Memory Limit: 256
Source Limit:
Explanation
For first test case,

mitsu can be rearranged to form sumit .

For second test case,

jumba can be rearranged to form ambuj .

For third test case,

hibb can not be arranged to form abhi.

*/

#include <bits/stdc++.h>
#include<cstring>

using namespace std;

int main ()
{
	int t,count=0;
	cin>>t;
	while(t--)
	{
		string s1, s2;
		cin>>s1>>s2;
		sort(s1.begin(), s1.end());	
		sort(s2.begin(), s2.end());

		if (s1 == s2)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;

	}
}