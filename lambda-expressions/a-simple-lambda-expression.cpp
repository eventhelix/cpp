#include <vector>
#include <cstdio>
template <typename T, typename F>
void visit(std::vector<T>& vec, const F& visitor) {
	for (auto item : vec) {
		visitor(item);
	}
}
int main() {
	std::vector<int> vec = { 0, 1, 2 };
	visit(vec, [](int a) { printf("%d\n", a); });
	return 0;
}