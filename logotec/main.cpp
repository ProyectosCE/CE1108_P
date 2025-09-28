#include <iostream>
#include "antlr4-runtime.h"

using namespace antlr4;
using namespace std;

int main() {
    cout << "Hello, World!" << endl;

    ifstream stream;
    stream.open("input.txt");
    ANTLRInputStream input(stream);

    return 0;
}
