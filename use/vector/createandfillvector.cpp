#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> createAndFillVector(int N) {
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

    return v;
}

void test_createAndFillVector() {
    std::vector<int> v = createAndFillVector(5);

    assert(v.size() == 5);
    assert(v[0] == 1);
    assert(v[1] == 2);
    assert(v[2] == 3);
    assert(v[3] == 4);
    assert(v[4] == 5);

    std::vector<int> one = createAndFillVector(1);

    assert(one.size() == 1);
    assert(one[0] == 1);

    std::vector<int> empty = createAndFillVector(0);

    assert(empty.empty());

    std::cout << "test_createAndFillVector passed" << std::endl;
}

int main() {
    test_createAndFillVector();

    return 0;
}