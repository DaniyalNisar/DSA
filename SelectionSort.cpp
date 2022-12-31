// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void swap(int a[], int x, int y)
{
    int temp = a[x];
    a[x] = a[y];
    a[y] = temp;
}

int locOfSmallest(int a[], int s, int e){
    int i=s;
    int j=i;
    
    while(i<=e){
        if(a[i]<a[j])
        {
            j=i;
        }
        i++;
    }
    return j; 
}

void selectionSort(int a[], int n){
    int i=0;
    while(i<n-1)
    {
        int j= locOfSmallest(a,i,n-1);
        swap(a, i, j);
        i++;
    }
}
int main() {
   int arr[] = {102, 3, 5, 324, 1, 32432,3};
   int size= sizeof(arr)/sizeof(int);
    selectionSort(arr, size);
    for(int i=0; i< size; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}



n^2
