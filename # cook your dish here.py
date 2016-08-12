# cook your dish here
n = input("Enter a no;")
a=[0,0]
for i in range(n):
	a[i] = input()
	
def countsort(a,n):
	if n==1:
		return 0
	part1 = a[:n/2]
	part2 = a[n/2:]
	left = countsort(part1,n/2)
	right = countsort(part2,n-n/2)
	split = 0
	ans= []
	k=0
	j=0
	for i in range(n):
		if k<n/2 and part1[k] < part2[j]:
			ans.append(part1[k])
			k += 1
		elif j<n-n/2 and part1[k] > part2[j]:
			ans.append(part2[j])
			split += (n/2-k)
			j += 1
		elif k>=n/2:
			ans.append(part2[j])
			j += 1
		else :
			ans.append(part1[k])
			k += 1
	
	for i in range(n):
		a[i] = ans[i]
	return left+right+split
	
print(countsort(a,n))
