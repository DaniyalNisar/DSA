string pangrams(string s) {
    int c[26] ={0};
    for(int i=0; i<s.length();i++){
       
        if(s[i] >=97 && s[i] <=122)
        {
            c[s[i] - 97]++;
            cout<<c[s[i] - 92];
        }
        else if(s[i] >=65 && s[i] <=90)
        {
            c[s[i]- 65]++;
        }
        else{
            continue;
        }
    }
    for(int i=0 ; i<26 ;i++)
    {
        if(c[i] <1)
        {
            return "not pangram";
        }
    }
    return "pangram";
}
