#include <iostream>
#include <vector>
#include <random>
using namespace std;


int main() {
    mt19937 generator(time(NULL));
    uniform_int_distribution<int> ztf(0,5);

    vector<string> prefix = 
        {"mr", "ms", "captain", "kernel", "general", "sir"};
    vector<string> middle = 
        {"orion", "callan", "kelly", "vivian", "alex", "andrew"};
    vector<string> last   = 
        {"average", "above average", "below average", "manic", "slimy", "dry"};

    cout << 
    prefix[ztf(generator)] << " " << 
    middle[ztf(generator)] << " the " << 
    last[ztf(generator)] << endl;
}