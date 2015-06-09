/*
   Author : Rajdip Saha
*/

#include <bits/stdc++.h>

typedef long long int ll;

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    char s[100005];
    int x1,x2,x3,x4,x5;
    int count=0;
    while(gets(s)){
        if(count>0)printf("\n");
        x1=x2=x3=x4=x5=0;
        bool flag=true;
        for(int i=0;i<strlen(s);i++){
            x1=((x1*10)+(s[i]-'0'))%4;
            x2=((x2*10)+(s[i]-'0'))%100;
            x3=((x3*10)+(s[i]-'0'))%400;
            x4=((x4*10)+(s[i]-'0'))%15;
            x5=((x5*10)+(s[i]-'0'))%55;
        }
        if((!x1&&x2)||!x3)flag=false,printf("This is leap year.\n");
        if(!x4)flag=false,printf("This is huluculu festival year.\n");
        if(((!x1&&x2)||!x3)&&!x5)flag=false,printf("This is bulukulu festival year.\n");
        if(flag)printf("This is an ordinary year.\n");
        count++;
    }
    return 0;
}
