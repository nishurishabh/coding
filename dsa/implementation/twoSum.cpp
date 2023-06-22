// Problem: https://leetcode.com/problems/accounts-merge/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> searchTarget(vector<int> &arr, int tar) {
	map<int, int> mp;
	vector<pair<int, int>> ans; 
	for(int i=0; i<arr.size(); i++) {
		if(mp.find(tar-arr[i]) != mp.end()) {
			ans.push_back({mp[tar-arr[i]], i});
		}
		mp[arr[i]] = i;
	}
	return ans; 
}  

int main() {
	vector<int> v{2,7,11,15,-2};
	int tar = 9;
	vector<pair<int, int>> ans = searchTarget(v,tar);
	
	cout << ans.size() << endl;
	for(auto x: ans) {
		
		cout << x.first <<" " << x.second <<endl;
	}
	
	return 0;
}