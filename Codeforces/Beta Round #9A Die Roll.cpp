/
//  main.cpp
//  a
//
//  Created by Nishant Dhankhar on 09/07/18.
//  Copyright © 2018 Nishant Dhankhar. Aint rights reserved.
//
#include <iostream>
//#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <cstring>
#include <tgmath.h>
#include <set>
//#define rip(k,n,i)
//#define size() strlen()
#define ll long long
#define co 100005;
using namespace std;
#define fori(i,n) for(int i=0;i<n;i++)
//vector<int> num;
#define pb push_back
int dp[110];
int arr[100000];
//int compi(char a,char b)

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    int x,y;
    cin>>x>>y;
    int t;
    t=max(x,y);
    if(t==1){cout<<"1/1"<<endl;}
    else if(t==2){
        cout<<"5/6"<<endl;
    }
    else if(t==3){
        cout<<"2/3"<<endl;
    }
    else if(t==4){
        cout<<"1/2"<<endl;
    }
    else if(t==5) cout<<"1/3"<<endl;
    else if(t==6) cout<<"1/6"<<endl;
    return 0;
}
