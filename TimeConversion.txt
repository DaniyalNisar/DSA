string timeConversion(string s) {
    int hour;
    string h= "";
    stringstream ss;
    if(s[8] == 'P' ) //use .find("PM")
    {
        h= s.substr(0,2);
        ss << h;
        ss >> hour; //use stoi
        
        if(hour ==12)
        {
         //Do nothing
        }
        else
        {
            hour = hour + 12;  
            h=to_string(hour);
            s[0]=h[0];
            s[1]= h[1];
            cout<<h<<endl;
        }
            
    }
    else{
        if(s.substr(0,2) == "12")
        {
             s[0]= '0';
            s[1]= '0';
        }
    }
    return s.substr(0,8);
}   
    

