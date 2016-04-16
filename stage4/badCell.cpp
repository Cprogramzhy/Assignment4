#include <iostream>  
#define MAX 20  
using namespace std;  
  
int main()  
{  
    int n;
    cin >> n ;  
    int badcell=0; 
    int a[100][100]={0};  
    for(int i=0;i<n;i++)  
        for(int j=0;j<n;j++)  
            cin >> a[i][j];  
    for(int i=1;i<n-1;i++)  
        for(int j=1;j<n-1;j++)  
        {  
       
            if((a[i-1][j]-a[i][j]>=50)&&  
               (a[i+1][j]-a[i][j]>=50)&&  
               (a[i][j-1]-a[i][j]>=50)&&  
               (a[i][j+1]-a[i][j]>=50))  
            badcell++;  
        }    
    cout << badcell <<endl;  
    return 0;  
}