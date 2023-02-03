#include<bits/stdc++.h>
using namespace std;
void print(set<string> &s){
    for(string value:s){
        cout<< value << endl;
    
    }
    // for(auto it=s.begin(); it!= s.end(); ++it){
    //     cout<< (*it)<< endl;
    // }
}

int main()
{
    //set will strore the keys in sorted order
    set<string> s;
    s.insert("abc"); //Complexity= log(n)
    s.insert("zsdf");
    s.insert("bcd");
    //similar to maps the values insreted are always unique
    auto it = s.find("abc");//returns a iterator // O(log(n))
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