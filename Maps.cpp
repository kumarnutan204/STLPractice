#include <bits/stdc++.h>
using namespace std;
void print(map<int,string> &m){
    cout<<"size: "<<m.size()<<endl;
    for(auto &pr : m){
        cout<<pr.first <<" " << pr.second<<endl;
    }
}
int main()
{
    map<int , string> m;
    //map looks something like:
    //1--> abc
    //5--> cdc


    //maps will insert values using RED BLACK TREES ...ie the new value is compared with other values to find its position in the sorted keys.
    map<string,string>m2;//for strings as keys , insertion will take complexity as m2.size().O(log(n)) 
    m[1]= "abc"; //O(log(n)) for this operation
    m[5]= "cdc";
    m[3]= "acd";
    m[6];//just writing this will take a log(n) time complexity
    
    
    //another way of inserting values is by using the function insert()
    //maps will store the keys in increasing order ie. ascending order for int and string in lexographical order
    
    
    m.insert({4,"afg"});
    // map<int,string>::  iterator it;
    // for(it=m.begin();it !=m.end();it++)
    // {
    //     cout<<(*it).first <<" "<< (*it).second<<endl;
    // }
    // for(auto &pr : m){
    //     cout<<pr.first <<" " << pr.second<<endl;
    // }
    print(m);
    //all the keys in the maps are unique.
    //ie we can not use the ket 5 again and if we try to add ..the prev value is replaced with the new one
    auto it = m.find(7);//find returns an iterator // O(log(n))
    //m.erase();//a function to remove values and parameter can be a key or an iterator
    //m.erase(5);
    if(it !=m.end())
    {
        m.erase(it);
    }
    //if we use m.erase(it) where it == m.end() it gives a segmentation fault error


    if(it == m.end()){
        cout<< "NO VAlue";
    }
    else{
        cout<< (*it).first<<" "<<(*it).second<<endl;
    }
    //m.clear()== is a function to clear out all the values


    //m.erase(3);//O(log(n))
    print(m);
    return 0;
}