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


    m[1]= "abc";
    m[5]= "cdc";
    m[3]= "acd";
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



    return 0;
}