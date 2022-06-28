#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	auto v = vector<int>(n, 0);
	for (auto i = 0; i < n; ++i) {
		int x;
		cin >> x;

		v[x - 1] = i + 1;
	}

	for (const auto& x : v) {
		cout << x << '\n';
	}

	return 0;
}