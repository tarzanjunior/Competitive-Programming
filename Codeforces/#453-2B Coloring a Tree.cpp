#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <cstring>
#include <cstdio>
#include <stack>
#include <queue>
#include <map>
#include <utility>

#include <iostream>
using namespace std;



int main() {
	std::ios::sync_with_stdio(false);

	int n, m;
	int count = 1;
	cin >> n;
	int color[n];
	vector <int> adj[n];

	for (int i = 0; i < n - 1; i++) {
		cin >> m;
		adj[m - 1].push_back(i + 1);
	}
	for (int i = 0; i < n; i++) {
		cin >> color[i];
	}
	for (int i = 0; i < n; i++) {
		for (auto it : adj[i]) {
			count += (color[it] != color[i]);
		}
	}

	cout << count << '\n';
	return 0;
}
