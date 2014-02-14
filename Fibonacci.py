import sys

def run():
	for x in range(int(sys.stdin.readline())):
		print fib(x)

def fib(n):
	if(n>=3):
		return fib(n-2) + fib(n-1)
	else:
		if(n==0):
			return 0;
		else:
			return 1;


for i in range(int(sys.stdin.readline())):
  run()