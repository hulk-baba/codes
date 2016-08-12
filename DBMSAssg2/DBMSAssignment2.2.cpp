#include<bits/stdc++.h>
using namespace std;

struct student{

	int studentiD;
	char name[20];
};
int main(){
	FILE *fp ;
	struct student x;
	fp = fopen("student.txt","wb");
	cout<<"How many records?\n";
	int n;
	cin>>n;
	printf("Enter n records\n");
	for(int i=0;i<n;i++){
		cout<<"\nStudent ID:\n";
		scanf("%d",&x.studentiD);
		cout<<"\nName:\n";
		scanf("%s",x.name);
		fwrite(&x,sizeof(x),1,fp);
	}
		printf("Enter the record no\n");
		int rec;
		scanf("%d",&rec);
		fseek(fp,(rec-1)*sizeof(x),0);
		fread(&x,sizeof(x),1,fp);
		printf("studentiD: %d\n Name: %s\n",x.studentiD,x.name);
		fclose(fp);
		return 0;
}
