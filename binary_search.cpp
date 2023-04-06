#include <bits/stdc++.h>
using namespace std;
signed main(){
	vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int l, r, mid, target = 4;
	for (l = 0, r = 9, mid = (l + r) / 2; l <= r; mid = (l + r) / 2){
		target > a[mid] ? l = mid + 1 : r = mid - 1;
	}
	cout << a[l] << '\n';
	cout << l << '\n';
}
