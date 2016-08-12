#include <bits/stdc++.h>
using namespace std;


class CCipher {
public:
	string decode(string cipherText, int shift) {
		string str = cipherText;
		for(int i=0;i<str.length();i++){
			char ch = str.at(i);
			int a = (int)ch;
			a -= shift;
			if(a<65)
			a+=26;
			ch = (char)a;
			str.at(i) = ch;
		}
		return str;
	}
};

int main(){
	CCipher obj1;
	string str = "";
	str = obj1.decode("hgyuhu",2);
	cout<<str<<endl;
}

