#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v = {11,65,193,36,209,664,32};
    partial_sort(v.begin(), v.begin()+3, v.end(), greater<int>() );
    cout<<"first = "<<v[0]<<"\n";
    cout<<"second = "<<v[1]<<"\n";
    cout<<"Third = "<<v[2]<<"\n";
    return 0;
}