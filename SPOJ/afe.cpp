#include<bits/stdc++.h>
using namespace std;

int main(){
    int d,l,v1,v2;
    scanf("%d%d%d%d",&d,&l,&v1,&v2);
    double a=0.0;
    a =(double) (l-d)/(v1+v2);
    printf("%0.6lf",a);
    return 0;

}
