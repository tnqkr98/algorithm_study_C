#include <cstdio>
#include <vector>
#include <algorithm>
#include <string>
#pragma warning(disable:4996)
using namespace std;
vector<int> v;
int n, m;
void back(string s,int d,int p) {
	if (d == m) {
		s.pop_back();
		printf("%s\n", s.c_str());
		return;
	}
	for (int i = 0; i < n; i++) 
		if (v[i]>=p) 
			back(s + to_string(v[i]) + " ", d + 1,v[i]);
}
int main() {
	scanf("%d %d", &n,&m);
	for (int i = 0; i < n; i++) {
		int t;
		scanf("%d", &t);
		v.push_back(t);
	}
	sort(v.begin(), v.end());
	back("",0,0);
	return 0;
}