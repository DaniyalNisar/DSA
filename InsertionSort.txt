void insertionSort2(int n, vector<int> arr) {
    for(int j=1 ; j <n ; j++)
    {
        int key= arr[j];
        int i= j-1;
        
        while(i >=0 && arr[i] > key)
        {
            arr[i+1]  =arr[i];
            i--;
            for(int k=0 ; k <n ; k++)
            {
                cout<<arr[k]<< " ";
            }
            cout<<endl;
        }
       
         arr[i+1] = key;
       
       
    }
    for(int k=0 ; k <n ; k++)
     {
          cout<<arr[k]<< " ";
     }
     cout<<endl;
}
