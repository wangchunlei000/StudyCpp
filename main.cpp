#include <iostream>
#include "Cite.h"
#include "Methods.h"
#include "Student.h"

using namespace std;

//using std::cout;
//using std::endl;

int main() {
    cout << "Hello, World!" << endl;

//    Cite *pCite = new Cite();
//    pCite->test();

//    Methods *pMethods = new Methods();
//    pMethods->test();

    Person p1 = {"BugKiller",28,176};
    p1.print();

    Student student;
    student.setName("aaa");
    student.testPublic();
    const string &name = student.getName();
    cout << "getName->" << name << endl;

    Student stu2("WangChunlei",25,180);
    stu2.print();

    Student stu3("BigThunder");
    stu3.print();

    student.createStudentArray();
    return 0;
}