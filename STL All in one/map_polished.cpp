
#include <bits/stdc++.h>
using namespace std;

void map_study() {
    // MAP
    // Stores unique keys in **sorted order**.
    // Time Complexities: insert, erase, find, count, etc. = O(log n)

    map<int, int> mpp;
    map<int, pair<int, int>> mpp0;
    map<pair<int, int>, int> mpp1;

    //🔹 Insertion & Access
    mpp[1] = 2;         // → {{1, 2}}
    mpp[1]++;           // → {{1, 3}}
    mpp.clear();        // clear all entries

    mpp.insert({1, 3}); // → {{1, 3}}
    mpp.insert({1, 4}); // ignored (duplicate key)

    //🔹 Pair as key (lexicographical comparison)
    mpp1[{2, 3}] = 5;
    mpp1[{1, 3}] = 6;
    // Sorted as: { {1,3} → 6 }, { {2,3} → 5 }

    //🔹 Accessing Values
    auto it = mpp.find(1);          // returns iterator to {1, 3}
    if (it != mpp.end()) {
        cout << it->second << endl; // prints 3
    }

    auto itp = mpp1.begin();
    int a = itp->first.first; // key = pair → first = 1

    //🔹 Iteration
    for (auto it : mpp) {
        cout << "Key: " << it.first << " Value: " << it.second << endl;
    }

    for (auto it : mpp1) {
        cout << "(" << it.first.first << "," << it.first.second << ") → " << it.second << endl;
    }

    //🔹 Common Operations
    // lower_bound(key), upper_bound(key), erase(key), size(), empty(), swap() → Same as set
}

void multimap_study() {
    // MULTIMAP
    // Stores **duplicate keys** in sorted order.
    // Implemented as Red-Black Tree
    multimap<int, string> mmap;

    mmap.insert({1, "a"});
    mmap.insert({1, "b"}); // duplicate key allowed
    mmap.insert({2, "z"});

    for (auto it : mmap) {
        cout << it.first << " → " << it.second << endl;
    }
    // No operator[] in multimap
}

void unordered_map_study() {
    // UNORDERED_MAP
    // Stores unique keys in **no specific order** (random).
    // Internally uses Hash Table
    // Time Complexity: Average O(1), Worst case O(n)

    unordered_map<int, int> umpp;

    umpp[1] = 10;
    umpp[2] = 20;
    umpp[1]++;

    for (auto it : umpp) {
        cout << "Key: " << it.first << " Value: " << it.second << endl;
    }

    // lower_bound, upper_bound - Not available
    // rest: insert, erase, size, empty, swap  same
}

int main() {
    cout << "\n--- map ---\n";
    map_study();

    cout << "\n--- multimap ---\n";
    multimap_study();

    cout << "\n--- unordered_map ---\n";
    unordered_map_study();

    return 0;
}
