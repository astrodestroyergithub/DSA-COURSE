#include<iostream>
using namespace std;

class StarPattern
{
    int n,i,j,k;
    public:
    int disp()
    {
        cout<<"Enter the number of rows = ";
        cin>>n;

        for(i=0;i<n;i++)
        {
            for(j=0;j<i;j++)
            {
                cout<<" ";
            }
            for(k=1;k<=n-i;k++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
        for(i=1;i<=n;i++)
        {
            for(j=0;j<n-i;j++)
            {
                cout<<" ";
            }
            for(k=1;k<=i;k++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
    return 0;
    }
};

int main()
{
    StarPattern obj;
    obj.disp();
    return 0;
}