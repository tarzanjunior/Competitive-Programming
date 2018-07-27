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
//int compi(char a,char b){



int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    string a;
    cin>>a;
    set<int> kaka;
    for (int i=0;i<a.size();i++){
        kaka.insert(int(a[i])); //cout<<a[i]<<endl;
    }
    if(kaka.size()%2==1) cout<<"IGNORE HIM!"<<endl;
    else if(kaka.size()%2==0) cout<<"CHAT WITH HER!"<<endl;
    
    return 0;
    
}
