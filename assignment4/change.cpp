#include <iostream>  
#include <iomanip>  
using namespace std;  
int fun(int a[5][5],int n,int m) 
{  
      
    if(n<0||n>=5||m>=5||m<0)  
    {  
        return 0;  
    }  
    else 
    {  
        int tmprow[5]={0};  
        for(int i=0;i<5;i++)  
        {  
            tmprow[i]=a[n][i];  
            a[n][i]=a[m][i];  
            a[m][i]=tmprow[i];  
        }  
        return 1;  
    }  
  
}  
  
int main()  
{  
    int retnum;
    int n,m; 
    int b[5][5];
	 for(int i=0;i<5;i++)  
            {  
                for(int j=0;j<5;j++)  

				cin>>b[i][j];
	 }
	cin >> n >> m ;  
    retnum = fun(b,n,m);  
    if(retnum==0)  
        {  
            cout<< "error" << endl;  
        }
	else if(retnum=1)
	{
    for(int i=0;i<5;i++)  
            {  
                for(int j=0;j<5;j++)  
                cout<< setw(4)<< b[i][j];
				cout<<endl;

			}
               
	}
    return 0;  
}  