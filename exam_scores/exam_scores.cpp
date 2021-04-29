/*
This file is developed to familiarize myself with the switch statment.
I realize that it could be improved in many ways.
*/

#include <iostream>
#include <string>

using namespace std;

int getScores(string);
void findLowestScore(int, int, int, int);
void findHighestScore(int, int, int, int);
void findAverageScore(int, int, int, int);

int main () {

  int examMath;
  int examPhysics;
  int examChemistry;
  int examEnglish;

  for ( int i = 0; i < 4; i ++) {
    switch(i)
    {
      case 0:
        examMath = getScores("Math");
        break;
      case 1:
        examPhysics = getScores("Physics");
        break;
      case 2:
        examChemistry = getScores("Chemistry");
        break;
      default:
        examEnglish = getScores("English");
        break;
    }
  }

  findLowestScore(examMath, examPhysics, examChemistry, examEnglish);
  findHighestScore(examMath, examPhysics, examChemistry, examEnglish);
  findAverageScore(examMath, examPhysics, examChemistry, examEnglish);

  return 0;
}

int getScores(string subject) {
  int scores = 0;
  cout << " Please type in the score for " << subject << ": ";
  cin >> scores;

  while ( scores < 0 ) {
    cout << "Scores must be positive.  Please re-enter your score!\n";
    cin >> scores;
  }

  return scores;
}

void findLowestScore(int s1, int s2, int s3, int s4) {
  int lowest = 0;
  string subject = "";

  if ( s1 < s2 && s1 < s3 && s1 < s4 ) {
    lowest=s1;
    subject = "Math";
  } else if ( s2 < s3 && s2 < s4 ) {
    lowest=s2;
    subject = "Physics";
  } else if ( s3 < s4 ) {
    lowest=s3;
    subject = "Chemistry";
  } else {
    lowest = s4;
    subject = "English";
  }


  cout << "The student's lowest score is " << lowest << " for " << subject << endl;
}


void findHighestScore(int s1, int s2, int s3, int s4) {
  int highest = 0;
  string subject = "";

  if ( s1 > s2 && s1 > s3 && s1 > s4 ) {
    highest=s1;
    subject = "Math";
  } else if ( s2 > s3 && s2 > s4 ) {
    highest=s2;
    subject = "Physics";
  } else if ( s3 > s4 ) {
    highest=s3;
    subject = "Chemistry";
  } else {
    highest = s4;
    subject = "English";
  }


  cout << "The student's highest score is " << highest << " for " << subject << endl;
}


void findAverageScore(int s1, int s2, int s3, int s4) {
  float average = 0;

  average = (s1+s2+s3+s4) / 4.0;

  cout << "The student's average score is " << average << endl;
}
