import sys

def run():
	for x in range(int(sys.stdin.readline())):
		print fib(x)

def fib(n):
	if(n==0):
		return 0;
	elif(n==1 or n == 2):
		return 1;
	else:
		return fib(n-2) + fib(n-1)


for i in range(int(sys.stdin.readline())):
  run()