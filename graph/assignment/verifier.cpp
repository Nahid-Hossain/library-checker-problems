#include <iostream>

#include "testlib.h"
#include "params.h"

int main() {
    registerValidation();

    int n = inf.readInt(N_MIN, N_MAX);
    inf.readChar('\n');

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
            inf.readInt(-A_ABS_MAX, A_ABS_MAX);
            if (j != n - 1) inf.readSpace();
        }
        inf.readChar('\n');
    }
    inf.readEof();
    return 0;
}
