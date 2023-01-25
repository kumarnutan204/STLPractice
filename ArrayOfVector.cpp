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
    //Array of vectors
    int N;
    cout<<"Enter the number of vectors you want to input";
    cin>>N;
    vector<int>v[N];
    for(int i=0;i<N;++i)
    {
        int n;
        cout<<"Enter the number of values in the vector";
        cin>>n;
        for(int j=0;j<n;j++)
        {
            int x;
            cin>>x;
            v[i].push_back(x);
        }
    }
    for(int i=0;i<N;++i)
    {
        printVec(v[i]);
    }
    return 0;

}