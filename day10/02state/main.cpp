#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream ifs("none.txt");
    if (!ifs) {
        cout << "open failed" << endl;
        cout << boolalpha << ifs.good() << endl; // false
        cout << ifs.fail() << endl; // true
        cout << ifs.bad() << endl; // false
        return -1;
    }

    cout << "open success" << endl;
    int i;
    ifs >> i;
    cout << i << endl;
    if (!(ifs >> i)) {
        cout << "read failed" << endl;
        if (ifs.eof()) {
            cout << "end of file" << endl;
        }
        if (ifs.bad()) {
            cout << "read error" << endl;
        }
    }
    ifs.clear();
    ifs.seekg(ios::beg);
    i = 0;
    ifs >> i;
    cout << i << endl;

    return 0;
}

