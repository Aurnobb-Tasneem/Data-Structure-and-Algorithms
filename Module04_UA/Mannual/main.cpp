#include <iostream>
#include "UnsortedType.h"
#include "UnsortedType.cpp"

using namespace std;
class studentInfo {
public:
    int studentID;
    string studentName;
    double studentCGPA;
    studentInfo(){
     studentID=0; studentName="Unknown";
     studentCGPA=0.0;
    }
    studentInfo(int id,string name, double cgpa)  {
        studentID=id; studentName=name;
        studentCGPA=cgpa;
    }

    void Print() {
       cout << studentID << ", " << studentName << ", " << studentCGPA << endl;
    }

    bool operator==(const studentInfo& other) const {
        return studentID == other.studentID;
    }

    bool operator!=(const studentInfo& other) const {
        return studentID != other.studentID;
    }
};

int main() {
    UnsortedType<int> intList;
    UnsortedType<studentInfo> studentList;

    intList.InsertItem(5);
    intList.InsertItem(7);
    intList.InsertItem(6);
    intList.InsertItem(9);

    intList.ResetList();
    int item;
    for (int i = 0; i < intList.LengthIs(); i++) {
        intList.GetNextItem(item);
        cout << item << " ";
    }
   cout << endl;

   cout <<  intList.LengthIs() << endl;

    intList.InsertItem(1);

    intList.ResetList();

    for (int i = 0; i < intList.LengthIs(); i++) {
        intList.GetNextItem(item);
        cout << item << " ";
    }
    cout << endl;



    bool found;
    int retrieveItem = 4;
    intList.RetrieveItem(retrieveItem, found);
    if (found) {
        cout << "Item is found" << endl;
    } else {
        cout << "Item is not found" << endl;
    }
     retrieveItem = 5;
    intList.RetrieveItem(retrieveItem, found);
    if (found) {
        cout << "Item is found" << endl;
    } else {
        cout << "Item is not found" << endl;
    }
     retrieveItem = 9;
    intList.RetrieveItem(retrieveItem, found);
    if (found) {
        cout << "Item is found" << endl;
    } else {
        cout << "Item is not found" << endl;
    }

    retrieveItem = 10;
    intList.RetrieveItem(retrieveItem, found);
    if (found) {
        cout << "Item is found" << endl;
    } else {
        cout << "Item is not found" << endl;
    }
    if (intList.IsFull()) {
        cout << "List is full." << endl;
    } else {
        cout << "List is not full." << endl;
    }


    intList.DeleteItem(5);

    if (intList.IsFull()) {
        cout << "List is full." << endl;
    } else {
        cout << "List is not full." << endl;
    }
    intList.DeleteItem(1);

    intList.ResetList();
    for (int i = 0; i < intList.LengthIs(); i++) {
        intList.GetNextItem(item);
        cout << item << " ";
    }
    std::cout << std::endl;
    studentList.InsertItem(studentInfo(15234, "Jon", 2.6));
    studentList.InsertItem(studentInfo(13732, "Tyrion", 3.9));
    studentList.InsertItem(studentInfo(13569, "Sandor", 1.2));
    studentList.InsertItem(studentInfo(15467, "Ramsey", 3.1));
    studentList.InsertItem(studentInfo(16285, "Arya", 3.1));

    studentList.DeleteItem(studentInfo(15467, "", 0.0));

    studentInfo retrievedStudent(0, "", 0.0);
    found = false;
    studentList.RetrieveItem(retrievedStudent, found);

    if (found) {
        std::cout << "Item is found" << std::endl;
        retrievedStudent.Print();
    } else {
        std::cout << "Item is not found" << std::endl;
    }
    studentList.ResetList();
    for (int i = 0; i < studentList.LengthIs(); i++) {
        studentInfo s(0, "", 0.0);
        studentList.GetNextItem(s);
        s.Print();
    }

    return 0;

}
