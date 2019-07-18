#include <iostream>
#include "Cite.h"
#include "Methods.h"

using namespace std;

//using std::cout;
//using std::endl;

int main() {
    cout << "Hello, World!" << endl;

//    Cite *pCite = new Cite();
//    pCite->test();

    Methods *pMethods = new Methods();
    pMethods->test();
    return 0;
}