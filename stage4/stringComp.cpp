#include <iostream>  
  
using namespace std;  
  
int main()  
{  
    char s1[80],s2[80];  
    cin.getline(s1,80);  
    cin.getline(s2,80);  
    int i=0;  
    for(;s1[i]!='\0'&&s2[i]!='\0';i++)  
    {  
        if(s1[i]>='A'&&s1[i]<='Z') 
            s1[i]+=32;  
        if(s2[i]>='A'&&s2[i]<='Z')  
            s2[i]+=32;  
        if(s1[i]>s2[i]) 
            {  
                cout << '>' ;  
                return 0;  
            }  
        else if(s1[i]<s2[i])  
            {  
                cout << '<' ;  
                return 0;  
            }  
    }  
    if(s1[i]==s2[i])
        cout << '=';  
    else if(s1[i]=='\0')  
        cout << '<';  
    else  
        cout << '>';  
    return 0;  
} 