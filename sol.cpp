/*Template dos Campeoes
menos que isso falta
mais que isso sobra*/
//TESTADO = TRUE

#include <iostream>
#include <vector>
#include <cmath>
#include <set>
#include <map>
#include <string>
#include <iomanip>
#include <queue>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <stack>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;
typedef vector < int > vi;
typedef vector < vi > vvi;
typedef pair < int, int > ii;
typedef vector < ii > vii;
typedef vector < vii > vvii;
typedef vector < bool > vb;
typedef vector < ll > vll;

#define f first
#define s second
#define pb push_back
#define mp make_pair
#define buff ios::sync_with_stdio(false)
#define db(x) cout<<#x<<": "<<x<<endl
#define for0(i, n) for(int i = 0; i < n; i++)

const int inf=0x3f3f3f3f;
const ll linf=0x3f3f3f3f3f3f3f3f;
const ld pi=acos(-1.0);
const int mod=1e9+7;
const int maxn=100050;

int bb(int e, int d, vi &v, int x) {
	if(e>=d)	return v[e] == x;
	int m = (e + d) / 2;
	if(v[m] < x)	return bb(m+1, d, v, x);
	else	return bb(e, m, v, x);
}

int main() {
	buff;

	int n, q;
	cin>>n>>q;

	vi v;
	for(int i=0; i<n; i++) {
		int x;
		cin>>x;
		v.pb(x);
	}

	sort(v.begin(), v.end());

	for(int i=0; i<q; i++) {
		int x;
		cin>>x;
		if(bb(0, n-1, v, x))	cout<<1<<endl;
		else	cout<<0<<endl;
	}
	
	return 0;
}
