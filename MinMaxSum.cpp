
void miniMaxSum(vector<int> arr) {
    
    long int max=arr[0], min=arr[0], sum =0;
    
    for(int i=0 ; i<arr.size(); i++)
    {
        sum = sum + arr[i];
        if(arr[i] > max)
        {
            max= arr[i];
        }
        else if(arr[i] < min)
        {
            min= arr[i];
        }
        
    }
 
  long int minsum= sum - max;
   long int maxsum= sum - min;
    cout<<minsum <<" "<<maxsum<<endl;
}
