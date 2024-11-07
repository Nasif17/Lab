#include <iostream>
using namespace std;
void printArray(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void bubbleSort(int arr[], int size)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<endl<<"after Sorting:"<<endl;
    printArray(arr,size);
}
int main()
{
    int arr[]={10,11,5,1,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before sorting:"<<endl;
    printArray(arr,size);
    bubbleSort(arr, size);
}