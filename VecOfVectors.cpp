#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int>&v){
    cout<<"Size:" << v.size() << endl;
    for(int i=0;i<v.size();i++)
    {   //v.size( ) has a complexity of 0(1);
        cout<<v[i]<< " ";
    }
    cout<<endl;
}

int main()
{
    //Vector of vectors taking input
    int N;
    cout<<"Enter the number of vectors you want to input";
    cin>>N;
    vector<vector<int>>v;
    for(int i=0;i<N;++i)
    {
        int n;
        cout<<"Enter the number of values in the vector";
        cin>>n;
        vector<int> temp;
        for(int j=0;j<n;j++)
        {
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    for(int i=0;i<v.size();++i)
    {
        printVec(v[i]);
    }
    return 0;

}