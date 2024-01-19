#include<iostream>
#include "SchoolRoster.h"
#include<string>

///////////////////////////////////////////////Student////////////////////////////////////////////////////////

//This prints out the contents of a student.
ostream& operator<<(ostream& o, const Student& S)
{
   o<<"Name: "<<S.getName()<<"         "<<"ID: "<<S.getID()<<"          "<<"Classification: "<<S.getClassification();

    return o; //returns it to the output.
}

Student::Student() 
{
    string StudentName;
    string ID;
    char classification;
}
Student::Student(string studentName, string ID, char classification)
{
    this->studentName = studentName;
    this->ID = ID;
    this->classification = classification;
}

void Student::setName(string studentName)
{
    this->studentName = studentName;
}

string Student::getName() const
{
    return studentName;
}

void Student::setID(string ID)
{
    this->ID = ID;
}

string Student::getID() const
{
    return ID;
}

void Student::setClassification(char classification)
{
    this->classification=classification;
}

char Student::getClassification() const
{
    return classification;
}

//////////////////////////////////////////////Roster///////////////////////////////////////////////////////////
//will print out the contents of the roster with respect to how many students in each roster.
ostream& operator<<(ostream& o, const Roster& R)
{
    for(int i = 0; i < R.size; i++)
    {
        o<<"     "<<R.contents[i]<<endl;
    }

    return o;
}

/*This is the default constructor for the roster.*/
Roster::Roster() 
{
    capacity = 5;
    size = 0;
    contents = new Student[capacity]; //dynamic array: can hold up to 5 students at default.
}


Roster::~Roster()
{
    delete [] contents; //delete the allocted space once it goes out of scope.
} 

/*The purpose of a copy constructor is to copy all data of an
exsting object to create a new object with respect to dynamic
memory involvement.*/
Roster::Roster(const Roster& inv)
{
    capacity = inv.capacity;
    size = inv.size;

    contents = new Student[capacity];

    for(int i =0; i < size; i++)
    {
        contents[i] = inv.contents[i];
    }
}
/*The purpose of this */
Roster& Roster::operator=(const Roster& inv)
{

    

    capacity = inv.capacity; //this sets the current capacity 
    size = inv.size; // set the current size 

    delete [] contents; //this deletes the contents
    contents = new Student[capacity];

    for(int i =0; i < size; i++)
    {
        contents[i] = inv.contents[i];
    }
    
    return *this;

}

void Roster::Add(const Student& stu)  //This is to add a student to the roster.
{
    if(size == capacity) //checks if the size reached full capacity.
    {
        capacity = capacity + 5; //This will increase the size of capacity by 5.
        Student*temp = new Student[capacity];
        for(int i = 0; i < size; i++)
        {
            temp[i] = contents[i];
        }
        delete [] contents;
        contents = temp;
    }
    contents[size] = stu;
    size++;
}

void Roster:: RemoveFunction(const string&Identification)
{
    for(int i = 0; i < size; i++)
    {
        if(Identification == contents[i].getID())
        {
            for(int j = i; i < size-1;i++ ) 
            {
                contents[j]= contents[j+1];
            }

            size--;
        }
    }
}

void Roster::setCapacity(int capacity)
{
    this->capacity = capacity;
}
int Roster::getCapacity()
{
    return capacity;
}

void Roster::setSize(int size)
{
    this->size = size;
}

///////////////////////////////////////////Course/////////////////////////////////////////////////////////////
void Course::AddStudent()
{
    string studentName;
    string ID;
    char classification;

    cout<<"Enter the lastname of the student: ";
    cin >> studentName;
    cout<<"Enter the ID of the student: ";
    cin >> ID;
    cout<< "Enter the classification of the student:"<<endl;
    cout<<"Valid inputs: f = freshman, s = sophmore, j = junior, S = senior"<<endl;
    cin >> classification;

    Student one(studentName, ID, classification);

    cout <<"student has been added to the course!"<<endl;

    roster.Add(one);

}
void Course::RemoveStudent()
{
    string studentName;
    string ID;
    char classification;

    cout<<"Enter the last name of the student:"<<endl;
    cin >> studentName;
    cout<<"Enter the ID of the student:"<<endl;
    cin >> ID;
    cout<< "Enter the classification of the student"<<endl;
    
    cin >> classification;

    Student one(studentName, ID, classification);

    roster.RemoveFunction(ID);

}


ostream& operator<<(ostream& o, const Course& C)
{
    o<<C.courseName<<"   "<<C.courseCode<<endl;
    o<<C.roster;
    
    return o;
}

Course::Course()
{
	string CourseName;
    string CourseCode;
    Roster roster;
}


Course::Course(string courseName, string courseCode, Roster r)
{   
    this->courseName = courseName;
    this->courseCode = courseCode;
    
}    

void Course::setCourseName(string courseName)
{
    this->courseName = courseName;
}
    
string Course::getCourseName() const
{
    return courseName;
}

void Course::setCourseCode(string courseCode)
{
    this->courseCode = courseCode;
}
    
string Course:: getCourseCode() const
{
    return courseCode;
}

void Course::setRoster(Roster roster)
{
    this->roster = roster;
}
    
Roster Course::getRoster() const
{
    return roster;
}

