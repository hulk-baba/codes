def countsort(a,n):
	# print("n is %d"%n)
	if n==1:
		return 0
	x = (int)(n/2)
	# print("x is %d"%x)
	part1 = a[:x]
	# print("part1")
	# print(part1)
	part2 = a[x:]
	# print("part2")
	# print(part2)
	left = countsort(part1,x)
	right = countsort(part2,n-x)
	split = 0
	ans = a;
	k=0
	j=0
	# print("While Combining")
	# print("x is %d" % x)
	# print("n is %d" % n)
	i = 0
	while True:
		# print("i is%d" %i)
		# print("k is%d" %k)
		# print("j is%d" %j)
		if k<x and j < n-x and part1[k] < part2[j]: 
			# print("Condition 1 is true")
			ans[i] = part1[k]
			k += 1
			# print("k has become %d"%k)
		elif j< (n-x) and k < x and part2[j] < part1[k]:
			# print("Condition 2 is true")
			ans[i] = part2[j]
			split += (x-k)
			j += 1
			# print("split has become %d"%split)
			# print("j has become %d"%j)
		elif k>=x :
			# print("Condition 3 is true")
			ans[i] = part2[j]
			j += 1
			# print("j has become %d"%j)
		else :
			# print("Condition 4 is true")
			ans[i] = part1[k]
			k += 1
			# print("k has become %d"%k)
		i += 1
		if i==n:
			break
	
	# print("ans array")
	# print(ans)
	for w in range(0,n):
		# print("w is %d"%w)
		a[w] = ans[w]
	return left+right+split
	
# cook your dish here
# t = int(raw_input())
# for i in range(t):
n = int(raw_input())
a = map(int, raw_input().split())
# a = []
# for i in range(0,n):
	# a.append(int(raw_input()))
# print(a)
p = countsort(a,n)
print(p)