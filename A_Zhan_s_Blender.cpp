#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y,p;
        cin>>n>>x>>y;
        if(x<y)
        {
            p=n/x;
              if(p*x==n)
            {
                cout<<p<<endl;
            }
            else{
                cout<<p+1<<endl;
            }
        }
        else{
            p=n/y;
            if(p*y==n)
            {
                cout<<p<<endl;
            }
            else{
                cout<<p+1<<endl;
            }
        }
        
    }
    return 0;
}