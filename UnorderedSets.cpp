#include<bits/stdc++.h>
using namespace std;
void print(unordered_set<string> &s){
    for(string value:s){
        cout<< value << endl;
    
    }
}
//unordered sets are similar to sets but are unordered as they are inserted using the Hash functions so the complexity is O(1).

int main()
{
    unordered_set<string> s;
    //complex data structures are not allowed in unordered sets
    s.insert("abc"); //Complexity= O(1)
    s.insert("zsdf");
    s.insert("bcd");
    s.insert("xyz");
    s.insert("lmn");
    auto it = s.find("abc");//returns a iterator // O(1)
    // if(it != s.end()){
    //     cout<<(*it);
    // }
    if(it != s.end()){
        s.erase(it); //used to erase the key from the set
    }
    s.erase("bcd");//it can take a string as input as well

    print(s);
    return 0;

}