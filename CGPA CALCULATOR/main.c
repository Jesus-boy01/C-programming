#include <stdio.h>
#include <stdlib.h>

int main()
{

    //Created variables for the calculator to prompt the user and accept input
    int numOfCourse;
    int score;
    int unitOfCourse;
    double gradePoint[10] = {5.00, 4.00, 3.00, 2.00, 1.00, 0.00};
    double qualityPoints[20];
    double totalQualityPoints[30];

    printf("Enter number of courses: ");
    scanf("%d", &numOfCourse);
    printf("==========================");

    //Created a loop that prints the prompt which depends upon the number of courses entered by the user
    for(int i = 0; i < numOfCourse; i++){
        printf("\nEnter your score: ");
        scanf("%d", &score);
        printf("Enter units: ");
        scanf("%d", &unitOfCourse);

        //Assigned variable arrays to store the quality points which would be used to print the GPA of the student
        qualityPoints[0] = unitOfCourse * gradePoint[0];
        qualityPoints[1] = unitOfCourse * gradePoint[1];
        qualityPoints[2] = unitOfCourse * gradePoint[2];
        qualityPoints[3] = unitOfCourse * gradePoint[3];
        qualityPoints[4] = unitOfCourse * gradePoint[4];
        qualityPoints[5] = unitOfCourse * gradePoint[5];

        //Created an if statement block to print out a grade for the user based on the score they input
        if(score >= 70 && score <=100){
            puts("Your grade is A");
            printf("Your quality point is: %f", unitOfCourse * gradePoint[0]);
        } else if(score >= 60 && score <= 69){
            puts("Your grade is B");
            printf("Your quality point is: %f", unitOfCourse * gradePoint[1]);
        } else if(score >= 50 && score <= 59){
            puts("Your grade is C");
            printf("Your quality point is: %f", unitOfCourse * gradePoint[2]);
        } else if(score >= 45 && score <= 49){
            puts("Your grade is D");
            printf("Your quality point is: %f", unitOfCourse * gradePoint[3]);
        } else if(score >= 40 && score <= 44){
            puts("Your grade is E");
            printf("Your quality point is: %f", unitOfCourse * gradePoint[4]);
        } else if(score >= 0 && score <= 39 ){
            puts("Your grade is F");
            printf("Your quality point is: %f", unitOfCourse * gradePoint[5]);
        } else {
            puts("Invalid Score");
        }
        printf("\n==========================");
    }
    return 0;
}
