import urllib, json
url = "http://codeforces.com/api/user.ratedList?activeOnly=false"
response = urllib.urlopen(url)
data = json.loads(response.read())

with open('resultnewuserfalse.txt','w') as outfile:
	json.dump(data, outfile)