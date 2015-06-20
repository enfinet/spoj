t=int(raw_input())
while t>0:
	t-=1
	s=raw_input()
	a=s.split();
	x=int(a[0])
	y=int(a[1])
	if y==0:
		print 1
	else :
		z = x % 10;
		if z==0:
			print 0;
		elif z==5:
			print 5;
		else :
			i=y%4
			if i==0:
				u=z%2
				if u!=0:
					print 1
				else:
					print 6;
			elif i==1:
				print z;
			elif i==2:
				print z*z%10;
			else:
				print z*z*z%10;
