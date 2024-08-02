#include<bits/stdc++.h>
using namespace std;
int main(){
    //n=3
    vector<vector<pair<int,int>>>flights;
    vector<pair<int,int>>flight1,flight2,flight3;
    for(int i=0;i<3;i++){
        int x,y;
        cin>>x>>y;
        flight1.push_back({x,y});
    }
    flights.push_back(flight1);
    for(int i=0;i<3;i++){
        int x,y;
        cin>>x>>y;
        flight2.push_back({x,y});
    }
    flights.push_back(flight2);
    for(int i=0;i<3;i++){
        int x,y;
        cin>>x>>y;
        flight3.push_back({x,y});
    }
    flights.push_back(flight3);
    
    return 0;
}