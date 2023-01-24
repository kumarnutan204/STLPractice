#include<bits/stdc++.h>
using namespace std;

void printVec(vector<pair<int,int>>&v){
    cout<<"Size:" <<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {   //v.size( ) has a complexity of 0(1);
        cout<< v[i].first<< " " << v[i].second<< endl;
    }
    cout<<endl;
}

int main()
{
    vector<pair<int,int>> v = {{1,2},{2,3},{3,4}};
    printVec(v);
    cout<<"enter the number of pairs in the vector ";
    int n;
    cin>>n;
    cout<<"Enter the pairs";
    vector<pair<int,int>>v2;
    for(int i=0;i<n;i++)
    {   
        int x,y;
        cin>>x>>y;
        v2.push_back({x,y});
     
    }
    printVec(v2);
    
    return 0;
}