#include <bits/stdc++.h>
using namespace std;

#define debug(args...) _print_debug(#args, args);  // Macro for debugging variables
#define dbgsize(x) _print_size(#x, x);  // Macro to check the size of containers

// General print for primitive types
template <typename T>
void _print(T x) {
    cout << x;
}

// Recursive print for multiple arguments
template <typename T, typename... Ts>
void _print(T x, Ts... rest) {
    _print(x);  // Print the first argument
    cout << " ";  // Add a space between values
    _print(rest...);  // Recursively print the rest
}

// Specialized print for vector
template <typename T>
void _print(vector<T> v) {
    cout << "[ ";
    for (size_t i = 0; i < v.size(); i++) {
        cout << v[i];
        if (i != v.size() - 1) cout << ", ";  // Add commas between elements
    }
    cout << " ]";
}

// Specialized print for deque
template <typename T>
void _print(deque<T> dq) {
    cout << "[ ";
    for (size_t i = 0; i < dq.size(); i++) {
        cout << dq[i];
        if (i != dq.size() - 1) cout << ", ";  // Add commas between elements
    }
    cout << " ]";
}

// Specialized print for set
template <typename T>
void _print(set<T> s) {
    cout << "{ ";
    auto it = s.begin();
    while (it != s.end()) {
        cout << *it;
        if (++it != s.end()) cout << ", ";  // Add commas between elements
    }
    cout << " }";
}

// Specialized print for multiset
template <typename T>
void _print(multiset<T> ms) {
    cout << "{ ";
    auto it = ms.begin();
    while (it != ms.end()) {
        cout << *it;
        if (++it != ms.end()) cout << ", ";  // Add commas between elements
    }
    cout << " }";
}

// Specialized print for map
template <typename K, typename V>
void _print(map<K, V> m) {
    cout << "{ ";
    auto it = m.begin();
    while (it != m.end()) {
        cout << it->first << ": " << it->second;
        if (++it != m.end()) cout << ", ";  // Add commas between key-value pairs
    }
    cout << " }";
}

// Function to debug multiple arguments with their variable names
template <typename T, typename... Ts>
void _print_debug(const string &names, T x, Ts... rest) {
    stringstream ss(names);
    string var;
    getline(ss, var, ',');  // Extract the first variable name

    cout << "[" << var << "]: ";  // Print variable name in desired format
    _print(x);  // Print its value
    if constexpr (sizeof...(rest) > 0) {
        cout << " ";  // Add space for multiple variables on the same line
        size_t next_pos = names.find_first_of(",") + 1;
        _print_debug(names.substr(next_pos), rest...);  // Process the rest
    } else {
        cout << '\n';  // Add a newline at the end of all variables
    }
}

// Function to print the size of a container
template <typename T>
void _print_size(const string &name, T x) {
    cout << "[" << name << "] : Size = " << x.size() << '\n';
}
