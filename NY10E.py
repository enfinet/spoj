def fact(n):
	if n==0:
		return 1
	else:
		return n*fact(n-1)
array=[0]*70
i=1
array[0]=1
while(i<=65):
	p=fact(8+i)
        q=fact(i)
	r=p/(q*40320)
        array[i]=array[i-1]+r
	i+=1
t=int(raw_input())
while(t>0) :
	t-=1
	a=raw_input()
        b=a.split();
        x=int(b[0])
        y=int(b[1])
	print x,array[y]
