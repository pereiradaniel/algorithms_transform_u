// Algorithms - Transform - Unary Operation
// transform_u.cpp
// source: https://ict.senecacollege.ca/~oop345/pages/content/algor.html

// OutputIterator transform(InputIterator f, InputIterator l, OutputIterator o, Fn u)
// apply the unary operation u to all of the elements within range[f, l) and store the result starting at o

// The transform function templates perform programmer
// specified transformations on the elements of a sequence.
// A function object defines the transformation.
//
// This program multiplies each element in vector v by 3,
// stores the result in vector cand displays the contents of vector c.

#include <vector>
#include <algorithm>
#include <iostream>

int main() {
    std::vector<int> v = { 1, 2, 4, 5, 7, 8, 10, 13, 17, 21, 43 };
    std::vector<int> c(11);
    std::transform(v.begin(), v.end(), c.begin(),
        [](int i) { return 3 * i; });
    for (auto e : c)
        std::cout << e << std::endl;
}