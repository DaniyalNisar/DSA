int flippingMatrix(vector<vector<int>> matrix) {
    
    int n= matrix.size()/2;
    int sum=0;
    int max1,max2;
    for(int i=0 ; i < n ; i++)
    {
        
        for(int j=0 ; j< n ;j++)
        {
            // i  i    2n-i-1  2n-i-1
            //    0
            //    0
            //    1
            //    1 
            //j 2n-j-1   j     2n-j-1
            //    0
            //    1
            //    0
            //    1
            
            max1=max(matrix[i][j],matrix[i][2*n - j - 1]);
            max2=max(matrix[2*n - i-1][j],matrix[2*n-i-1][2*n - j -1]);
            max1=max(max1,max2);
            
            sum =sum+max1;
            
            
        }
    }
    return sum;

}
