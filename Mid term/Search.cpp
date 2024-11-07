#include <iostream>
using namespace std;
void search(){
    int i,key,n,flag=0;
    
    cout<<"Enter the amount : ";
    cin>>n;

    int a[n];

    cout<<"initializing the array: "<<endl;
    for ( i = 0; i < n; i++)
    {
        cin>>a[i];
    }
   cout<<"find the number : ";
   cin>>key;

    for (int i=0;i<=n;i++)
    {
        if(a[i]==key)
        {
        cout<<"Target element found at location: "<<i<<endl;
            flag =1;
            break;
        }
    }
    if(flag == 0)
    {
        cout<<"Item not found";
    }
    else
    {
        cout<<"Item found";
    }

}
int main()
{
    search();
    return 0;
}

