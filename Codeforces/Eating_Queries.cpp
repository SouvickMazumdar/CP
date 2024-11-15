//https://codeforces.com/contest/1676/problem/E
#include "bits/stdc++.h"
#ifdef mlocal
#include "./Competitive-Code-Library/snippets/prettyprint.h"
#endif
using namespace std;
#define for_(i, s, e) for (int i = s; i < (int) e; i++)
#define for__(i, s, e) for (ll i = s; i < e; i++)
typedef long long ll;
typedef vector<int> vi;
typedef array<int, 2> ii;
#define endl '\n'
 
 
int main() {
#ifdef mlocal
	freopen("test.in", "r", stdin);
#endif
	
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int t; cin >> t;
	while (t--) {
		int n, q; cin >> n >> q;
		vector<ll> nums(n);
		for_(i, 0, n) cin >> nums[i];
		sort(nums.rbegin(), nums.rend());
		
		for_(i, 1, n) nums[i] += nums[i-1];
		
		while (q--) {
			ll x; cin >> x;
			int pt = lower_bound(nums.begin(), nums.end(), x) - nums.begin();
			if (pt == n) cout << -1;
			else cout << pt+1;
			cout << endl;
		}
	}
}