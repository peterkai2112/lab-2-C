#include <stdio.h>
#include <readline/readline.h>
#include<stdlib.h>
// Author: peter Schulman pks5481@psu.edu
// Collaborator: mack mason mjm8542@psu.edu
// Collaborator: brendan Corso bvc5434@bvc.edu
// Collaborator: jiulong Tang jzt5526@psu.edu
// Section: 1
// Breakout: 6

int main(void) {
  double grade = atof(readline("Enter your CMPSC 131 grade: "));
  if (grade >= 93) {
    printf("Your letter grade for CMPSC 131 is A.\n");
  }
  else if (grade < 93 && grade >= 90) {
    printf("Your letter grade for CMPSC 131 is A-.\n");
  }
    else if (grade < 90 && grade >= 87) {
    printf("Your letter grade for CMPSC 131 is B+.\n");
  }
    else if (grade < 87 && grade >= 83) {
    printf("Your letter grade for CMPSC 131 is B.\n");
  }
    else if (grade < 83 && grade >= 80) {
    printf("Your letter grade for CMPSC 131 is B-.\n");
  }
    else if (grade < 80 && grade >= 77) {
    printf("Your letter grade for CMPSC 131 is C+.\n");
  }
    else if (grade < 77 && grade >= 70) {
    printf("Your letter grade for CMPSC 131 is C.\n");
  }
    else if (grade < 70 && grade >= 60) {
    printf("Your letter grade for CMPSC 131 is D.\n");
  }
    else {
    printf("Your letter grade for CMPSC 131 is F.\n");
  }
  return 0;
}