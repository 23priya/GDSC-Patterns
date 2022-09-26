#include <iostream>

using namespace std;

int main()
{
    int r;
    
    cout<<"enter the no. of r :";
    cin>>r;
    
    for (int i=1;i<=r;++i)
    { 
       for(int j=1;j<=i;++j)
       {
           cout<<"*";
       }
        cout<<"\n";
    }

    return 0;
}
