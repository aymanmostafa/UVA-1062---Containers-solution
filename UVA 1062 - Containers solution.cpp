//============================================================================
// Name        : ayman.cpp
// Author      : Ayman Mostafa
// Email       : ayman93live@hotmail.com
// Version     : v5.0
//============================================================================

#include <cstring>
#include <map>
#include <deque>
#include <queue>
#include <stack>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <vector>
#include <set>
#include <complex>
#include <list>
#include <climits>
#include <cctype>
#include <bitset>

using namespace std;

#define all(x) x.begin(),x.end()
#define allr(x) x.rbegin(),x.rend()

void fastInOut();
//##########################################################################################
//###################################MAIN FUNCTION##########################################
//##########################################################################################
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "rt", stdin);
//freopen("output.txt", "wt", stdout);
#endif
	fastInOut();
//----------------------------------------------------------------------------------
//----------------------------------------------------------------------------------
//UVA 1062 - Containers
	vector<stack<char>> v;
	stack<char> st;
	string s;
	int c = 1, i, k;
	while (cin >> s && s != "end") {
		v.clear();
		for (i = 0; i < s.size(); i++) {
			for (k = 0; k < v.size(); k++) {
				if (s[i] <= v[k].top()) {
					v[k].push(s[i]);
					goto hell;
				}
			}
			v.push_back(st);
			v.back().push(s[i]);
			hell: ;
		}
		cout << "Case " << c++ << ": " << v.size() << endl;
	}
}
void fastInOut() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
}
