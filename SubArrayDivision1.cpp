int birthday(vector<int> s, int d, int m) {
    
   int sum=0;
   int ways=0;
    for(int i=0; i< s.size() ; i++)
    {   sum=0;
        if(i+m <=s.size())
        {for(int j =i ; j<i + m ;j ++)
        {
          sum=sum + s[j];
        
        //  cout<<sum<<endl;
        }
        if(sum == d)
        {
            ways++;
        } }  
    }
    
    return ways;
}

//Optimal Solution
int birthday(vector<int> s, int d, int m) {
    

   int ways=0;
   vector<int> prefix(s.size());
   prefix[0]= s[0];
   for(int i =1 ; i < s.size() ; i++)
   {
       prefix[i]= s[i] + prefix[i-1];
   }
   int index=0;
   
   if(prefix[m-1] == d)
   {
       ways++;
   }
   for(int i=m; i< s.size();i++)
   {
       if(prefix[i]- prefix[index] ==d)
       {
           ways++;
       }
       index++;
   }
   return ways;
}
