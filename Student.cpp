#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

void Student::assignDetails(int stdId,char stdName[]) {
  studentId = stdId;
  strcpy(name,stdName);
}

void Student::display() {
  cout<<studentId<<endl;
  cout<<name;
}

