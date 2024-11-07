#include <iostream>
using namespace std;
void minimum(){
    int i,min,n;
    
    cout<<"Enter the amount : ";
    cin>>n;

    int a[n];

    cout<<"initializing the array: "<<endl;
    for ( i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    min = a[0];
    for (int i=0;i<=9;i++)
    {
        if(a[i]<min)
        {
        min=a[i];
        }
    }
    cout<<"printing minimum value :"<<min<<endl;

}
int main()
{
    minimum();
    return 0;
}

