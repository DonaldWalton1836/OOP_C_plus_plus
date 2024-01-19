#include<iostream>
#include<string>
using namespace std;



class Student
{
    /*This will print out the conetents of what a student is.*/
    friend ostream& operator<<(ostream& o, const Student& S);
    private:
    //These are the data members of what a student consist of.
        string studentName;
        string ID;
        char classification;
    public:
        Student();//default constructor
        Student(string studentName, string ID, char classification); //parameterized constructor
	//These are all my getters and setters for each charateristic of a student.
	void setName(string Name);
	string getName() const;

	void setID(string ID);
	string getID() const;

	void setClassification( char classification);
	char getClassification() const;
    


};


/*This roster class is primarily my container class that will take a 
and dynamically allocate multiple students in different rosters
under different classes.

To achieve this I would need to utilize the rule of three*/

class Roster
{
    friend ostream& operator<<(ostream& o, const Roster& R);
    private:
        Student* contents;
        int size;
        int capacity;
    public:
        Roster(); //This is the default constructor for the roster
        ~Roster();  //this is the destructor for the roster
        Roster(const Roster& inv); //This is the deep copy constructor
        Roster& operator=(const Roster& inv); //This is the deepCopy constructor responsible for creating adding student to the roster.

        void Add(const Student& stu);
        void RemoveFunction(const string&Identification);
       
       void setCapacity(int capacity);
       int getCapacity();

       void setSize(int size);
       int getSize();
        

};
class Course
{
    friend ostream& operator<<(ostream& o, const Course& C);
    private:
        string courseName;
        string courseCode;
        Roster roster; //This is a dependency

    public:
    Course();
    Course(string courseName, string courseCode, Roster r);

	void setCourseName(string courseName);
    string getCourseName() const;

    void setCourseCode(string courseCode);
    string getCourseCode() const;

    void setRoster(Roster roster);
    Roster getRoster() const;

    void AddStudent();
    void RemoveStudent();

};
