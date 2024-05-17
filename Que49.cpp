#include<iostream>
using namespace std;
class abc
{
public:
    int a=1,b=1,i=1,j=1;
    void cal()
    {
        while(i<=4)
        {
           j=1;
           while(j<=i)
           {
               cout<<b;
               j++;
               b++;
           }
           a=1;
           while(a<=1)
           {
               cout<<"\n";
               a++;
           }
           i++;
        }
    }
};
int main()
{
    abc o1;
    o1.cal();
}
