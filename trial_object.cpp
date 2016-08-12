#include<bits/stdc++.h>
using namespace std;
class person {
	int age;
	string name;
	public :
		void getdata();
		void display();
};

void person::getdata(){
	cout<<"enter age";
	cin>>age;
	cout<<"enter name";
	cin>>name;
	
}
void person::display(){
	cout<<"age :->"<<age<<endl;
	cout<<"name :->"<<name;
}

int main(){
	person p;
	p.getdata();
	p.display();
	return 0;
}
