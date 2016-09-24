//Print char-int pairs.
#include "../std_lib_facilities.h"

int main() {
    char a = 'a';
    int i;
    while (a <= 'z') {
        i = a;
        cout << a << "\t" << i << endl;
        ++a;
    }
    return 0;
}