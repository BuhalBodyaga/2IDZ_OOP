#include <string>

#include <cstring>
#include "source.h"

using namespace std;

string getHashtagGenerator(string a)
{

    char ENG[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char eng[] = "abcdefghijklmnopqrstuvwxyz";

    int j = 0;
    bool b = false;
    for (int i = 0; i < size(a) - 1; i++) {

        if (a == "") {
            break;
        }
        if (a[i] == ' ') {
            b = false;
            j = 0;
        }
        if (a[i] != ' ' && b != true && j == 0) {
            if (strchr(ENG, a[i]) || strchr(eng, a[i])) {
                a[i] = toupper(a[i]);

                b = true;
            }
            j++;
        }

    }

a.erase(remove(a.begin(), a.end(), ' '), a.end());



    if (int size = a.size() > 100 || a == "") {
        return a = "<Exception>";
    }
    return a = "#" + a;;
}