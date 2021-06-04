#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numOfCourse;
    int score;
    int unitOfCourse;
    double gradePoint[10] = {5.00, 4.00, 3.00, 2.00, 1.00, 0.00};
    int totalUnits = 15;

    printf("Enter number of courses: ");
    scanf("%d", &numOfCourse);
    printf("==========================");

    for(int i = 0; i < numOfCourse; i++){
        printf("\nEnter your score: ");
        scanf("%d", &score);
        printf("Enter units: ");
        scanf("%d", &unitOfCourse);

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
