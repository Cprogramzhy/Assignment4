#include <iostream>
using namespace std;
#include <stdio.h>
#include<string.h>
int main()
{
 char str[80];
 int a=0,e=0,i=0,o=0,u=0;
 
 gets(str);
 for(int j=0;j<strlen(str);j++)
 switch(str[j])
 {
 case'a':a++;break;
 case'e':e++;break;
 case'i':i++;break;
 case'o':o++;break;
 case'u':u++;break;
 }
cout<<a<<" "<<e<<" "<<i<<" "<<o<<" "<<u<<endl;

 return 0;
}