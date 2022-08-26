#include <bits/stdc++.h>
using namespace std;

//custom function
bool cmp(pair<int, int> a, pair<int, int> b){
    return a.second == b.second ? a.first < b.first : a.second < b.second;  //checking the value
}

//declare vector and map
vector<pair<int, int>> sortmap(unordered_map<int, int>& mp){
    vector<pair<int, int>> v;
    
    //start a for loop
    for(auto& p: mp)
        v.push_back(p);
        
    //sorting vector
    sort(begin(v), end(v), cmp);
    return v;
}

int main()
{
    unordered_map<int, int> mp;   
    //declare size
    int size;
    cin>>size;
    int a, b;     //deaclare varibales
    for(int i=0; i<size; i++){
        cin>>a>>b;       
        mp[a] = b;
    }
    
    vector<pair<int, int>> result = sortmap(mp);
    for(auto& x: result){
        cout<<x.first<<" "<<x.second<<endl;
    }
    
    return 0;
}

//Chestha Goyal
//2010990167
Set 2
Ques 2