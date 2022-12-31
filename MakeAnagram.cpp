int makeAnagram(string a, string b) {
 int alphabets[26]={0};
 int count=0;
 for(int i=0; i< a.length(); i++)
 {
     alphabets[a[i] - 97]++;
 }
 for(int i=0; i< b.length(); i++)
 {
       alphabets[b[i] - 'a']--;
 }
 for(int i=0; i< 26; i++){
     count = count + abs(alphabets[i]);
 }
 return count;
}
