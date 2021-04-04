/*
Problem
Bob's crush's name starts with a vowel. That's the reason Bob loves vowels too much. He calls a string "lovely string" if it contains 
either all the lowercase vowels or all the uppercase vowels or both, else he calls that string "ugly string". 

For more clarification, see the sample testcase explanation.

Input

First line contains T, the number of test cases.
Next T lines contain a single string S.

Output

For each test case, print "lovely string" or "ugly string"  (without quotes)  according to the definition of Bob.

Sample Input
3
omahgoTuRuLob
OmAhgotUrulobEI
aeKORONAoiBATCHu

Sample Output
ugly string
lovely string
lovely string

string contains only lowercase and uppercase Latin letters. 
*/


// Two solutions

/*
#include <bits/stdc++.h>
using namespace std;

int main()
{    
	int testcases,flag=0;    
    cin>>testcases;
    string str;

    while(testcases--)    
    {	
    	char arr[256]={'\0'}; 
    	cin>>str;
    	int length = str.size();

    	for(int i=0; i<length; i++)
    	{
    		arr[str[i]]++;	

    	}

    	if (((arr[65]!=0) && (arr[69]!=0) && (arr[73]!=0) && (arr[79]!=0) && (arr[85]!=0)) || ((arr[97]!=0) && (arr[101]!=0) && (arr[105]!=0) && (arr[111]!=0) && (arr[117]!=0)))
    		cout<<"lovely string\n";
    	else 
    		cout<<"ugly string\n";

    }     
return 0;
}     

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{    
	int testcases,flag=0;    
    cin>>testcases;
    string str;
    string vowels_lower = "aeiou";
    string vowels_upper = "AEIOU";

    while(testcases--)    
    {	
    	cin>>str;
    	int length = str.size();
    	int count_lower=0, count_upper=0;

    	for (int i=0; i<5 ; i++)
    	{
    		for(int j=0; j<length; j++)
    		{
    			if (vowels_lower[i]==str[j])
    				{
    					count_lower++;
    					break;	
    				}

    		}
    	}

    	for (int i=0; i<5 ; i++)
    	{
    		for(int j=0; j<length; j++)
    		{
    			if (vowels_upper[i]==str[j])
    				{
    					count_upper++;
    					break;	
    				}

    		}
    	}

    	if (count_upper == 5 || count_lower == 5)
    		 cout<<"lovely string"<<endl;
        else
            cout<<"ugly string"<<endl;
    }
return 0;
 }