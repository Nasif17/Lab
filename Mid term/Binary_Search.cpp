#include<iostream>
using namespace std;

bool binarySearch(int arr[], int size,int first, int last, int searchValue)
{
    int mid=(first+last)/2;
    for(int i=0;i<size; i++)
    {
        if(arr[mid]==searchValue)
        {
            return true;
        }

        else if(arr[mid]<searchValue)
        {
            first=mid+1;
            mid=(first+last)/2;
        }

        else
        {
            last=mid-1;
            mid=(first+last)/2;
        }
    }

    return false;
}

int main()
{
    int arr[]={10,20,30,40,50,60,70,90,100,110,120};
    int searchValue=20;
    int size=(sizeof(arr)/sizeof(arr[0]));
    if(binarySearch(arr,size,0,size-1,searchValue)==true)
    {
        cout<<"found";
    }

    else
    {
        cout<<"Not Found";
    }


}
