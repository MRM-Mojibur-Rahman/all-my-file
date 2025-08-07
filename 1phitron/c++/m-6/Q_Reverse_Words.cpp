#include<bits/stdc++.h>
using namespace std;
int main ()
{
   string sentence ;
   getline(cin,sentence);
   string word ;
   stringstream word_by_word(sentence);
   string rev_word="\0";
   
   while (word_by_word>>word)
   {
      reverse(word.begin(),word.end());
      rev_word+=word;
      rev_word+=" ";
      
   }
   for (int i = 0; i < rev_word.size()-1; i++)
   {
    cout<<rev_word[i];
   }
   
   
    return 0;
}