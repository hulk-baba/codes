num = int(raw_input())
n = len(str(num))
low = pow(10,n-1)
ans = num - low;
ans = ans + pow(10,n-1)
s1 = str(ans)
s2 = s1[::-1]
print(s1+s2)