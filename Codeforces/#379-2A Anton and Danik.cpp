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

//vector<int> num;
int dp[110];
int arr[100000];


int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,cnt;
    cin>>n;
    string a;
        cin>>a;

    cnt=0;
    for (int i=0;i<n;i++){
        if(a[i]=='A') cnt++;
        else if(a[i]=='D') cnt--;
    }
    if(cnt<0) cout<< "Danik"<<endl;
    if(cnt>0) cout<<"Anton"<<endl;
    if(cnt==0) cout<<"Friendship"<<endl;
    return 0;
    
}
