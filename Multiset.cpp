#include<bits/stdc++.h>
using namespace std;
void print(multiset<string> &s){
    for(string value:s){
        cout<< value << endl;
    
    }
}
//unordered sets are similar to sets but are unordered as they are inserted using the Hash functions so the complexity is O(1).

int main()
{
    multiset<string> s;
    //complex data structures are not allowed in unordered sets
    s.insert("abc"); //Complexity= O(log(n))
    s.insert("zsdf");
    s.insert("bcd");
    s.insert("abc");//here this will be inserted again ie. duplicates are allowed

    auto it = s.find("abc");//O(log(n))
    //when finding a value that has duplicates present, it returns the iterator for the first matching value
   
    if(it != s.end()){
        s.erase(it);
    } 
    //using above method to delete will only delete the value that was found by the find() function 

    s.erase("abc");
    //if the above is used by passing value, all the matching values are deleted
    print(s);
    return 0;

}