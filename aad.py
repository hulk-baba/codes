
def answer(i):
	curr_min = arr[0]
	curr_max = arr[0]
	prev_max = arr[0]
	prev_min = arr[0]
	ans = arr[0]
	for j  in range(1,i):
		curr_max = max(prev_max * arr[j], prev_min*arr[j], arr[j])
		curr_min = min(prev_max * arr[j], prev_min*arr[j], arr[j])
		ans = max(ans,curr_max)
		prev_max = curr_max
		prev_min = curr_min
	return ans

while True :
	arr = [int(x) for x in input().split()]
	if (len(arr)<1) :
		break
	print(answer(len(arr)-1))
