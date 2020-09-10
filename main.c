//author: Joshua McIntyre jjm7410@psu.edu
//collaborator: Kushal Mandavia kqm5921@psu.edu
//collaborator: Lynn Francis jtf5383@psu.edu
//collaborator: Linghe Du lpd5243@psu.edu
//section 4
//breakout: 8

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  double grade;
  char *input = readline("Enter your CMPSC 131 grade: ");
  grade = atof(input);
  if (grade >= 93.0){
    printf("Your letter grade for CMPSC 131 is A.\n");
  }
  else if (grade >=90.0){
    printf("Your letter grade for CMPSC 131 is A-.\n");
  }
  else if (grade >=87.0){
    printf("Your letter grade for CMPSC 131 is B+.\n");
  }
  else if (grade >=83.0){
    printf("Your letter grade for CMPSC 131 is B.\n");
  }
  else if (grade >=80.0){
    printf("Your letter grade for CMPSC 131 is B-.\n");
  }
  else if (grade >=77.0){
    printf("Your letter grade for CMPSC 131 is C+.\n");
  }
  else if (grade >=70.0){
    printf("Your letter grade for CMPSC 131 is C.\n");
  }
  else if (grade >=60.0){
    printf("Your letter grade for CMPSC 131 is D.\n");
  }
  else {
    printf("Your letter grade for CMPSC is F.\n");
  }
  return 0;
}