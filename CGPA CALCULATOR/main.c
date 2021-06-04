#include <stdio.h>
#include <stdlib.h>

int main()
{
    //creating integers for calculating GPA
    int score;
    int unitOfCourse;
    int numOfCourse;
    char grade[10] = {'A', 'B', 'C', 'D', 'E', 'F'};
    double gradePoint[10] = {5.00, 4.00, 3.00, 2.00, 1.00, 0.00};
    double qualityPoints1;
    /*double qualityPoints2;
    double qualityPoints3;
    double qualityPoints4;
    double qualityPoints5;
    double qualityPoints6;*/
    //int totalUnits;
    //double totalQualityPoints;
    //double GPA;

    printf("Enter number of courses: ");
    scanf("%d", &numOfCourse);
    printf("==========================");

    for(numOfCourse = 1; numOfCourse < 6; numOfCourse++){
        printf("\nEnter your score: ");
        scanf("%d", &score);
        printf("Enter units: ");
        scanf("%d", &unitOfCourse);
        if(score >= 70 && score <=100){
            puts("Your grade is A");
        } else if(score >= 60 && score <= 69){
            puts("Your grade is B");
        } else if(score >= 50 && score <= 59){
            puts("Your grade is C");
        } else if(score >= 45 && score <= 49){
            puts("Your grade is D");
        } else if(score >= 40 && score <= 44){
            puts("Your grade is E");
        } else if(score >= 0 && score <= 39 ){
            puts("Your grade is F");
        } else {
            puts("Invalid Score");
        }

        printf("==========================");
    }

    /*switch(grade[10]){
    case 'A' :
        qualityPoints1 = numUnits * gradePoint[0];
        printf("Your quality point: %f", gradePoints1);
    }*/


    return 0;
}
