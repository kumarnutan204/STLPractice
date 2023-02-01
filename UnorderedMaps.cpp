#include <bits/stdc++.h>
using namespace std;
void print(unordered_map<int,string> &m){
    cout<<"size: "<<m.size()<<endl;
    for(auto &pr : m){
        cout<<pr.first <<" " << pr.second<<endl;
    }
}
int main()
{
    //Diff between the ordered and unordered maps
    //1.Inbuilt implementation == they use hash tables instead of Trees(like ordered maps)
    //2. Time complexity == Here complexity is O(1) in average 
    //3. Valid keys datatype
    //We can not use complex datatypes with unordered maps like <pairs,string> as there is no inbuilt hash values defined.
    unordered_map<int , string> m;
    
    m[1]= "abc"; 
    m[5]= "cdc";
    m[3]= "acd";
    m[6]= "a";
    m[5]="cde";    
    
    auto it = m.find(7);
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
    
    print(m);
    return 0;
}