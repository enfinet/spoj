a=raw_input()
b=a.split()
num1=int(b[0])
while num1!=0:
	num2=int(b[1])
	i=num2
	x=1
	while(i>0) :
		i-=1
		x=x*num1
	print x
	a=raw_input()
	b=a.split()
	num1=int(b[0])
	num2=int(b[1])
