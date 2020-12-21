#include <iostream>


using namespace std;


int score {};
char letter_grade {};

int main(){
  cout << "\n\t\tEnter your score on exam (0-100): ";
  cin>>score;

  if (score >= 0 && score <= 100){
      if (score > 90)
          letter_grade = 'A';
      else if (score > 80)
           letter_grade = 'B';
      else if (score > 70)
            letter_grade = 'C';
      else if (score > 60)
            letter_grade = 'D';
      else
            letter_grade = 'F';
      cout << "\t\tYour grade is: " << letter_grade << endl;

      if ( letter_grade == 'F')
           cout << "\t\tSorry, you must repeat the class" << endl;
  }else{
      cout << "\t\tSorry " << score << " is not in range" << endl;


  }




















}
