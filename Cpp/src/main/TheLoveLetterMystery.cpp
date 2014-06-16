/*

Russian
Chinese

James got hold of a love letter that his friend Harry has written for his 
girlfriend. Being the prankster that James is, he decides to meddle with it. 
He changes all the words in the letter into palindromes.

While modifying the letters of the word, he follows 2 rules:

(a) He always reduces the value of a letter, e.g. he changes 'd' to 'c', but 
he does not change 'c' to 'd'. 
(b) He reduces the value untill a letter becomes 'a'.

Each reduction in the value of any letter is counted as a single operation. 
Find the minimum number of operations he carries out to convert a given string 
into a palindrome. 


Input Format 
The first line contains an integer T, i.e., the number of test cases. 
The next T lines will contain a string each.

Output Format 
A single line containing the number of minimum operations corresponding to each test case.

Constraints 
1 ≤ T ≤ 10
1 ≤ length of string ≤ 104 
All characters are lower cased.
*/

#include <iostream>
#include <assert.h>
#include <vector>
#include <string>

using namespace std;

int main()
{

	int T; 							//Number of test cases
	cin >> T;
	assert(1 <= T);
	assert(T <= 10);
  	while(T--)
  	{
  		string str;
  		cin>>str;
        int ops = 0;
        for(int i=0 ; i< str.length()/2 ; i++)
        {
              ops += abs(str[i] - str[str.length()-i-1]);
        }
        cout << ops << endl; 


  	}
    return 0;
}




