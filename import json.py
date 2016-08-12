import json
result = json.loads('http://codeforces.com/api/problemset.problems?tags=implementation')
with open('result.txt','w') as outfile:
	json.dump(result, outfile)