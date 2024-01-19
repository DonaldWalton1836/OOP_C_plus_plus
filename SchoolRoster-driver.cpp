#include<iostream>
#include<string>
#include "SchoolRoster.h"

int main()
{
    int counter = 0;
    Course*classes=new Course[5];
    bool keepGoing = true;
    int choice;
    string courseName;
    string courseCode;
    Student stu;
    Roster r;
    string studentName, ID;
    char classification;
    int number;

    cout<<"Welcome to the Student Academy!"<<endl;
    cout<<"Today we will create a stduent enrollment log in preparation for the 2024 Fall Semester"<<endl;
    while(keepGoing == true)
    {
        
        cout<<"'1' is to add a course"<<endl;
        cout<<"'2' is to list a course"<<endl;
        cout<<"'3' is to remove a course"<<endl;
        cout<<"'4' is to add a student"<<endl;
        cout<<"'5' is to remove a student"<<endl;
        cout<<"'6' is to end the program"<<endl;

        cout <<"Option: ";
        cin >> choice;
        cout <<endl;
        
        while(choice > 6)
        {
            cout<<"You have entered an invalid option. Please enter a valid option"<<endl;
            cout<<" select 1 to add a course"<<endl;
            cout<<" select 2  to list a course"<<endl;
            cout<<" select 3 to remove a course"<<endl;
            cout<<" select 4 to add a student"<<endl;
            cout<<" select 5 to remove a student"<<endl;
            cout<<" select 6 to end the program"<<endl;
            cout <<"Option: ";
            cin >> choice;
        } 
        
        
        switch(choice)
        {
            case 1:   if(counter < 5) //This will check to see if the size is less than the course capacity.
                        {
                            cout<<"Enter the name of the course: ";
                            cin >> courseName;
                            cout <<endl;
                            cout<<"Enter the name of the Course ID: ";
                            cin >> courseCode;
                            cout << endl;
                            classes[counter] = Course(courseName, courseCode, r); 
                        }
                        else

                        {
                            cout<<"You have reached the capacity of courses"<<endl;
                        }
                        counter++;
                        break;
            case 2:   cout<<"Current Status"<<endl;
                        for(int i = 0; i < counter; i++)
                        {
                            cout<<classes[i]<<endl;

                        }

                        
                        break;

            case 3:  if(keepGoing == true)
                        {
                            Course *temp = new Course[counter];
                            cout<<"Enter the name of course you would like to delete"<<endl;
                            cin >> courseName;
                             for(int i = 0; i < counter; i++)
                             {
                                if(courseName == classes[i].getCourseName())
                                {
                                    for(int j = i; i < counter-1;i++ ) 
                                    {
                                        temp[j]= classes[j+1];
                                    }

                                    counter--;
                                }
                             }
                            delete [] classes;
                            classes = temp;

                           
                        }
                        break;
            case 4:     
                       
                            for(int i = 0; i < counter; i++)
                            {
                                cout<<"Option "<<i <<" : "<<classes[i];
                            }
                            cout<<"Select a course you would like to add a student in: "<<endl;;
                            cout<<"Option: ";
                            cin >> number;

                            while(number > counter)
                            {
                                cout<<"you have entered an invalid option"<<endl;
                                for(int i = 0; i < counter; i++)
                                {
                                cout<<i<<" .) "<<classes[i]<<endl;
                                }		
                                        cin>>number;
                            };
                            classes[number].AddStudent();
                         
                        
                        
                    
                        
                        break;
            case 5:   for(int i = 0; i < counter; i++)
                        {
                            cout<<i <<" .) "<<classes[i];
                        }
                        cout<<"Select a course you would like to remove a student from: ";
                        cin >> number;

                        classes[number].RemoveStudent();

                        break;

            case 6:   keepGoing = false;
                        break; 

            default:
            cout<<"You have entered an invalid option. Please select a valid option"<<endl;

        }

        
    }
    
    cout<<"Fall 2024 courses have been submitted."<<endl;
    

delete [] classes;






    return 0;
}

