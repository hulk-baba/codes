#include<bits/stdc++.h>
using namespace std;

int main(){
    string input;
    cin>>input;
    bool flag = false;
    char oneword[100];
    string str[10000];
    char c;
    int i=0;
    FILE *fp = fopen("source.txt","r");
     do {
      c = fscanf(fp,"%s",oneword);
      //printf("%s\n",oneword);
      str[i++] = oneword;
   } while (c != EOF);              /* repeat until EOF           */
    for(int j=0;j<i;j++){
        //cout<<str[j];
        if(str[j]==input)
        {
            flag = true;
            break;
        }
    }
    if(flag==true)
    cout<<"Found the record";
    else
    cout<<"Not found the record";
    return 0;

}
