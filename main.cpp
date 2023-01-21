#include <string>
#include <iostream>
#include "source.h"

using namespace std;

int main()
{

    string a;
    string b;
    cout << "String " << endl;
    getline(cin, a);

    cout << getHashtagGenerator(a) << endl;


}