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
    int a,b,i=0;
    cin>>a>>b;
    while(a<=b){
        a*=3;
        b*=2;
        i++;
    }
    cout<<i<<endl;
    return 0;
    
}
