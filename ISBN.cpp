/*
Problem
Harry wants to find Voldemort's potion making book but he is confused about how to get it.

The book has a special ISBN(International Standard Book Number) which is  unique numeric book identifier only for Voldemort's book printed on it. The ISBN is based upon a 10-digit code. The ISBN is valid if:
1xdigit1 + 2xdigit2 + 3xdigit3 + 4xdigit4 + 5xdigit5 + 6xdigit6 + 7xdigit7 + 8xdigit8 + 9xdigit9 + 10xdigit10 is divisible by 11.
Help Harry to find the book!
Input:
 Input the ISBN code as a 10-digit integer.

Output:
If the ISBN is not a 10-digit integer, output the message “Illegal ISBN” and terminate the program.
If the number is 10-digit, extract the digits of the number and compute the sum as explained in the explanation.
If the sum is divisible by 11, output the message, “Legal ISBN”. If the sum is not divisible by 11, output the message, “Illegal ISBN”.

Sample Input
1401601499
Sample Output
Legal ISBN
Time Limit: 5
Memory Limit: 256
Source Limit:
Explanation
For an ISBN 1401601499
Sum=1×1 + 2×4 + 3×0 + 4×1 + 5×6 + 6×0 + 7×1 + 8×4 + 9×9 + 10×9 = 253 which is divisible by 11.

*/

#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main()
{
	long int input;
	int sum=0,digits=0,count_digit=0,len,last_digit=0;
	cin>>input;
	len = std::to_string(input).length();
	int arr[len];
	if(len==10)
	{	
		int i,j;
		for (i=0,j=10; i<len,j>0;i++,j--)
		{
			last_digit = input%10;
			input/= 10;
			count_digit++;
			
			sum = sum+(last_digit*j);
		}		
		
			if (sum%11==0)	
				cout<<"Legal ISBN";
			else 
				cout<<"Illegal ISBN";
	}
		
	else
		cout<<"Illegal ISBN";

	
return 0;
} 
	