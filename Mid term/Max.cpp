#include <iostream>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9};
    int max;
    max = a[0];
    for (int i=0;i<=9;i++)
    {
        if(a[i]>max)
        {
        max=a[i];
        }
    }
    cout<<"printing maximum value :"<<max<<endl;

}