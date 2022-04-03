//******************************************************************
//This program reads student's test score into a two dimensional array
//and prints the content of the array
//*********************************************************************

#include <iostream>
#include <iomanip>

using namespace std;

// constant declarations
const int MAX_STUDENTS = 30;       //maximum number of students
const int MAX_TESTS = 10;          //maximum number of tests


//function prototypes

void ReadScores(double[] [MAX_TESTS], int& , int&);
void PrintScores(const double[] [MAX_TESTS], int, int);
void AvarageScores(const int[][MAX_TESTS],int,int, double[]);
void AverageTests(const int[][MAX_TESTS],int,int,double[]);
void PrintAverageScores(const int[] [MAX_TESTS], int, int, double[]);
void PrintAverageTests(const int[] [MAX_TESTS], int, int, double[]);


int man()
{
  //variable declarations
  bool passing[MAX_STUDENTS];    //array of performance of each studend
  double scores[MAX_STUDENTS] [MAX_TESTS];   //array of test scores
  int numberOfStudents;     //number of students in a class
  int numberOfTests;        //number of tests written
  cout<<"This program reads student's test score and prints it";

  //read each student's test scores into an array scores
  ReadScores(scores[], numberOfStudents,numberOfTests);

  //print each student's scores
  PrintScores(scores,numberOfStudents,numberOfTests);

  //print average scores
  PrintAverageScores(scores[],numberOfStudents,numberOfTests,studentAvgs);


  cout<< "Young Coder, This program is ending now";

  system("pause");
  return 0;



}

//********************************************************************
//Definition of function ReadScores
//This function reads each student's test scores into array scores
//The parameter scores is an array to hold numbers between 0 and 100 entered as test scores.
//The parameter numberOfStudents is a reference paramater to the number of students read.
//The parameter numberOfTests is a reference paramater to the number o
//tests read.
//********************************************************************

void ReadScores(double scores[][MAX_TESTS], //array of test scores
               int& numberOfStudents,       //number of students read
               int& numberOfTests)          //number of tests read
{
  int student;         //row index used for stuents
  int test;           // column index used for tests

  //prompt for and read the number of students and the number of test
  cout<<"Enter the number of students(up to"<< MAX_STUDENTS <<"): ";
  cin >> numberOfStudents;

  cout <<"Enter the number of tests(up to " << MAX_TESTS << "): ";
  cin >>numberOfTest;

  //read the test scores into the array scores
  for (student = 0; student < numberOfStudents; student++)
  {
    cout << "Enter the " << numberOfTests
      << " tst scores (0-100inclusive) for student# "
      << (student + 1) << endl;

    for (test = 0; test < numberOfTests; test++)
      cin>> scores[student][test];
  }

}

//********************************************************************
//Definition of function PrintScores
//This function prints each student's test scores
//The parameter scores is an array to hold each student's test scores
//the parameter numberOfStudents holds the number of students integers
//The parameter numberOfTests holds the number of test.
//********************************************************************


void PrintScores( const double scores[][MAX_TESTS],
    int numberOfStudents,
    int numberOfTests)
{
  int student;
  int test;

  for (student = 0; student < numberOfStudents; students++)
  {
    cout <<"the test scores for sudent# " << (student + 1)
      <<" are: ";

    for(test = 0; test < numberOfTests; test++)
      cout << setw(3) << scores [students][test];

    cout << endl;
  }
}
//********************************************************************
//Definition of function AverageScores
//This function finds the average scores of each students test scores
//The parameter score array to hold each student's test scores
//The parameter studentAvgs array to hold each student's avarage scores
//the parameter numberOfStudents holds the number of students integers
//The parameter numberOfTests holds the number of test.
//********************************************************************

void AverageScores(const int scores[][MAX_TESTS],
    int numberOfStudents,
    int numberOfTests,
    double studentAvgs[])
{
  double studentAvgs;
  int numberOfStudents;
  int numberOfTests;
}






//*********************************************************************
//Definition of function AverageTests
//This function finds the average score of each test
//The parameter scores array to hold each studen'ts test scores
//The parameter testAvgs array to hold the average of each tests
//The parameter numberOfStudents holds the number of students integers
//The parameter numberOfTests holds the number of test.
//********************************************************************

void AverageTests(const int scores[][MAX_TESTS],
    int numberOfStudents,
    int numberOfTests,
    double testAvgs[]);
{
  double testAvgs;
  int numberOfStudents;
  int numberOfTests;
}




