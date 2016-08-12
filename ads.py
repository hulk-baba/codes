def mod(b,p,m):
	if b==0 :
		return 0
	if p==0 :
		return b%m
	left = mod(b,p//2,m)
	if p%2 == 0 :
		return ((left%m)*(left%m))%m
	else :
		return ((left%m)*(left%m)* b%m)%m

t = int(input())
for i in range(t):
	b =int(input())
	p = int(input())
	m = int(input())
	print (mod(b,p,m))
