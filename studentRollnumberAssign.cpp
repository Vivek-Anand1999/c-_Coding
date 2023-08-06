#include <iostream>
using namespace std;
class student
{
private:
    int rollNo;

public:
    static int admissionNo;
    student(int rollNO = 0);
    int getRollNo();
};
int student::admissionNo = 0;
int student::getRollNo()
{
    return rollNo;
}
student::student(int rollNo)
{
    admissionNo++;
    this->rollNo = admissionNo;
}
int main()
{
    cout << "student RollNo"
         << "      "
         << "student AdmissionNo" << endl;
    student s1;
    cout << s1.getRollNo() << "                      " << s1.admissionNo << endl;
    student s2;
    cout << s2.getRollNo() << "                      " << s2.admissionNo;

    return 0;
}