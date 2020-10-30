#include <iostream>

using namespace std;

int a,b,c,y;

int nwd (int a, int b)
{
  while (b!=0)
    {
        c=a%b;
        a=b;
        b=c;
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
