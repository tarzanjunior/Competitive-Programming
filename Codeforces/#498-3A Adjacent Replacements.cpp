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
#define pb push_back
int dp[110];
int arr[100000];
//int compi(char a,char b)
int main() {
    std::ios_base::sync_with_stdio(false);
    ll n,x;
    cin>>n;
    for(ll i=0;i<n;i++){
        cin>>x;
        if(x%2==0) cout<<x-1<<" ";
        else cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
