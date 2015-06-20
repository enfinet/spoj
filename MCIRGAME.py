t=int(raw_input())
while t != -1:
	i=1
	s=t*2
	while s>0:
		i*=s
		s-=1
	j=1
	u=t
	while u>0:
		j*=u
		u-=1
	p=j*j*(t+1)
	h=int (i/p)
	print h
	t=int(raw_input())
