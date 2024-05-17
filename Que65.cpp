#include<iostream>
using namespace std;
class abc
{
public:
    int a=1,x,y,i=1,res=1,z=1,c,res2;
    void input()
    {
        cout<<"enter value of x:";
        cin>>x;
    }
    void cal()
    {
        while(z<=5)
        {
            y=x;
            i=1;
            while(i<=z)
            {
                y=y*x;
                i++;
            }
            c=z;
            res2=c;
            while(c>1)
            {
                res2=res2*(c-1);
                c--;
            }
            z++;
            res=res+(y/res2);
        }
        cout<<res;
    }
};
int main()
{
    abc o1;
    o1.input();
    o1.cal();
}
