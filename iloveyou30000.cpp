#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> data;

    while (true) {
        data.push_back(string(3000000, 'A')); 
        cout << "ILOVEYOU " << data.size() << endl;

        //~ if (data.size() >= 100) {
            //~ cout << "Stop biar gak crash" << endl;
            //~ break;
        //~ }
    }

    return 0;
}
