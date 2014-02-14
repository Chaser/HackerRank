#include <iostream>
using namespace std;
int fib(int);
int main() {
  int cases;
  int x = 0;
  cin >> cases;
  cin >> x;
  while (cases--) {
  	for (int i=0;i<=x-1;i++) {
  		cout << fib(i) << '\n';
  	}
  }
}

int fib(int n) {
	if(n==0)
		return 0;
	if(n==1 || n==2)
		return 1;
	else
	{
		return (fib(n-2) + fib(n-1));
	}

}
