#include <iostream>

using namespace std;

int a,b,y;

int nwd (int a, int b)
{
  while ((a!=b)&&(a>0)&&(b>0))
    {
        if(a>b)
        {
        a=a-b;
        }
        else
        {
        b=b-a;
        }
    }
    return a;
}

int main()
{
    cin>>y;
    for (int i=1; i<=y; i++)
    {
    cin>>a>>b;
    cout<<nwd(a,b)<<endl;
    }
    return 0;
}
