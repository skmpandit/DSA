#include<bits/stdc++.h>
using namespace std;
int main() 
{
    vector <int> v = {12, 34, 2, 75, 26, 93, 29};
    set <int> s(v.begin(), v.end());
    v.clear();
    for(auto it:s) v.push_back(it);
    int n=v.size();
    cout<<"The second largest element in vector is ";
    cout<<v[n-2]<<endl;
    return 0;
}