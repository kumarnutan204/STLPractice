#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v ={2,3,5,6,7};
    for(int i=0;i<v.size();++i)
    {
        cout<< v[i] << " ";
    }
    cout<< endl;
    //syntax for iterators
    // container syntax :: iterator var_name = container_var.begin()
    vector<int>::iterator it= v.begin();
    // cout<< (*it)<< endl;
    // cout<< (*(it +1))<< endl;
    for(it=v.begin();it!=v.end();++it){
        cout<< (*it)<<endl;
    }
    //it++ menas to go on next iterator which works for basically maps and all other containers
    // it+1 however goes to next location in continuity ,,,this workss in vector but not for maps and other containers
    
    return 0;



}