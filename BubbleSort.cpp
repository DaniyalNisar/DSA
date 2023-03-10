#include <iostream>
using namespace std;

void swap(int a[], int x, int y)
{
    int temp = a[x];
    a[x] = a[y];
    a[y] = temp;
}

void bubble(int a[], int x)
{
    int i=x-1;
    while (i > 0)
    {
        if(a[i]< a[i-1])
        {
            swap(a, i, i-1);
        }
        i--;
    }
    
}
void bubblesort(int arr[], int x)
{
    int i=0;
    while(i<x-1){
        bubble(arr,x);
        i++;
    }
}

int main() {
   int arr[] = {102, 3, 5, 324, 1, 32432,3};
   int size= sizeof(arr)/sizeof(int);
    for(int i=0; i< size; i++)
    {
        cout<<arr[i]<<endl;
    }
    bubblesort(arr, size);
    for(int i=0; i< size; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
