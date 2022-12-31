vector<int> countingSort(vector<int> arr) {
    vector <int> B(100);
    int index;
    
    for(int i=0 ; i< arr.size() ; i++)
    {
        index= arr[i];
        
        B[index]++;
    }

    
    return B;
}
