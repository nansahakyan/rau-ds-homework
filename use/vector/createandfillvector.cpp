#include <iostream>
#include <vector>
#include <cassert>

void createAndFillVector(int N) {
    std::vector<int> v(N);

    for (int i = 0; i < N; ++i) {
        v[i] = i + 1;
    }

    for (int x : v) {
        std::cout << x << ' ';
    }

    std::cout << '\n';
    std::cout << "Size: " << v.size() << '\n';
    std::cout << "Capacity: " << v.capacity() << '\n';

    assert(v.size() == N);

    for (int i = 0; i < N; ++i) {
        assert(v[i] == i + 1);
    }
}

int main() {
    createAndFillVector(5);

    return 0;
}