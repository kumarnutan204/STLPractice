#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int>v){
    for(int i=0;i<v.size();i++)
    {   //v.size( ) has a complexity of 0(1);
        cout<<v[i]<< " ";
    }
    cout<<endl;
}


int main()
{
    //int a[10];
    //vector<int>v;
    //cout<<"enter the size of the vector";
    // int n;
    // cin>>n;
    // cout<<"Enter the values";
    // for(int i = 0;i<n;i++)
    // {
    //     int x;
    //     cin>>x;
    //     v.push_back(x);// add an element x to the end of the vector. complexity 0(1) 
    // }
    // printVec(v);
    vector<int>v2;
    v2.push_back(4);
    v2.push_back(6);
    v2.push_back(9);
    printVec(v2);
    v2.pop_back();
    printVec(v2); //pushback and popback are both of complexity 1.
    //we can directly copy vectors.
    vector<int>v3=v2;//complexity is 0(n), as one by one is copied.
    v3.push_back(2);
    printVec(v3);
    return 0;

}