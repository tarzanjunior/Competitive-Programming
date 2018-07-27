//
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

int dp[110];
int arr[100000];
//int compi(char a,char b)

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    int x,b,c,d;
    string a;
    cin>>x>>b>>c>>d>>a;
    //cout<<x<<endl;
        int sum=0;
   // sum+=1;
    for(int i=0;i<a.size();i++){
        if(a[i]=='1') sum+=x;
        if(a[i]=='2') sum+=b;
        if(a[i]=='3') sum+=c;
        if(a[i]=='4') sum+=d;
    }
    
        cout<<sum<<endl;
    
    return 0;
}
