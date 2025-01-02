#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int n; // the number of temperatures to analyse
    int diff = 99999999;
    int result;
    cin >> n; cin.ignore();
    for (int i = 0; i < n; i++) {
        int t; // a temperature expressed as an integer ranging from -273 to 5526
        cin >> t; cin.ignore();
        if (t < 0 && abs(t) < diff) {
            diff = abs(t);
            result = t;
        }
        if (t >= 0 && abs(t) <= diff) {
            diff = abs(t);
            result = t;
        }
    }

    cout << result << endl;
}
