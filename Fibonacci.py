import sys

def run():
	x = int(sys.stdin.readline());
	fib=[0]*x;								#Initialise the list
	print fib[0];
	if(x<=2):
		fib[1]=1;
		print fib[1]
	else:
		fib[1]=1;
		print fib[1]
		for i in range(2,x):
			fib[i] = fib[i-1] + fib[i-2] 
			print fib[i]


for i in range(int(sys.stdin.readline())):
  run()