#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v ={2,3,5,6,7};
    for(int i=0;i<v.size();++i)
    {        cout<< v[i] << " ";
    }
    cout<< endl;

    
    vector<int> :: iterator it; //declaring itereator which points to the pair 
   for(it =v.begin(); it!=v.end();++it)
    {
        cout<< (*it) <<" ";
    }
    cout<<endl;
    // Range based Loops
    //here the values in v are copies of the list 
    

    for(int value : v){
        cout<< value <<" ";
    }
    cout<<endl;
    //we can get the actual values using the reference operator
    
    for(int &value : v){
        cout<< ++value <<" ";
    }
    cout<<endl;
    vector<pair<int,int>> v_p = {{1,2},{4,5}};
    for(pair<int,int> &value : v_p){
        cout<<value.first <<" "<<value.second<<"\n ";
    }
    cout<<endl;

    return 0;
}