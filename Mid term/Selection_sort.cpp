#include <iostream>
using namespace std;
void printArray(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void selectionSort(int arr[], int size)
{
    int minIndex;
    for(int i=0;i<size-1;i++)
    {
        minIndex=i;
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]<arr[minIndex])
            {
                minIndex=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex]=temp;
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
    selectionSort(arr, size);
}