#include <iostream>
#include <string>
using namespace std;

void printNIHARIKA() {
    string N[5] = {
        "*    * ", "**   * ", "* *  * ", "*  * * ", "*   ** "
    };
    string I[5] = {
        "***** ", "  *   ", "  *   ", "  *   ", "***** "
    };
    string H[5] = {
        "*    * ", "*    * ", "****** ", "*    * ", "*    * "
    };
    string A[5] = {
        "  ***  ", " *   * ", " ***** ", "*     *", "*     *"
    };
    string R[5] = {
        "*****  ", "*    * ", "*****  ", "*   *  ", "*    * "
    };
    string K[5] = {
        "*   * ", "*  *  ", "***   ", "*  *  ", "*   * "
    };

    // Print letters N I H A R I K A
    for (int i = 0; i < 5; i++) {
        cout << N[i] << "  "
             << I[i] << "  "
             << H[i] << "  "
             << A[i] << "  "
             << R[i] << "  "
             << I[i] << "  "
             << K[i] << "  "
             << A[i] << endl;
    }
}

int main() {
    cout << "\nPATTERN NAME: NIHARIKA\n\n";
    printNIHARIKA();
    return 0;
}
