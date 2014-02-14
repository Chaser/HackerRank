#include <iostream>

using namespace std;
int main() 
{
  int cases;
  int x = 0;
  cin >> cases;
  long fib[100];
  while (cases--) 
  {
  	cin >> x;
	if(x<=2) 
	{
		fib[0]=0;
		cout << fib[0] << '\n';
		fib[1]=1;
		cout << fib[1] << '\n';
	}
	else 
	{
		fib[0]=0;
		cout << fib[0] << '\n';
		fib[1]=1;
		cout << fib[1] << '\n';
		for(int i=2; i<x; i++)
		{
			fib[i] = fib[i-1] + fib[i-2]; 	
			cout << fib[i] << '\n';
		} 		 
	}		
  }
  return 0;
}

