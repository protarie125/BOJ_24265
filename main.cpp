#include <iostream>

using namespace std;

using ll = long long;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	ll n; cin >> n;

	cout << (n - 1) * n / 2 << '\n' << 2;

	return 0;
}