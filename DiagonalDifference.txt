int diagonalDifference(vector<vector<int>> arr) {
    int size= arr.size();
    int d1=0, d2 = 0;
    cout<<size<<endl;
    cout<<arr.size()<<endl;
    for(int i=0; i< size; i++)
    {
        d1=d1 +arr[i][i];
        d2= d2+ arr[i][size-1 - i];
    }
    return abs(d1-d2);
}
