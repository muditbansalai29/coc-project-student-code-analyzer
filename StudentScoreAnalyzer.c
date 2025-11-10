#include <stdio.h>

//  Calculate average score
float calculateAverage(int scores[], int count) {
    int sum = 0;
    for (int i = 0; i < count; i++) {
        sum += scores[i];
    }
    return (float)sum / count;
}

//  Find highest score
int findMaxScore(int scores[], int count) {
    int highest = scores[0];
    for (int i = 1; i < count; i++) {
        if (scores[i] > highest) {
            highest = scores[i];
        }
    }
    return highest;
}

//  Find lowest score
int findMinScore(int scores[], int count) {
    int lowest = scores[0];
    for (int i = 1; i < count; i++) {
        if (scores[i] < lowest) {
            lowest = scores[i];
        }
    }
    return lowest;
}

int main() {
    int studentCount;

    //  Start program
    printf(" Welcome to the Score Analyzer\n");
    printf("How many student scores will you enter? ");
    scanf("%d", &studentCount);

    int studentScores[studentCount];

    //  Input scores
    for (int i = 0; i < studentCount; i++) {
        printf("Enter score for Student #%d: ", i + 1);
        scanf("%d", &studentScores[i]);
    }

    //  Analyze scores
    float average = calculateAverage(studentScores, studentCount);
    int highest = findMaxScore(studentScores, studentCount);
    int lowest = findMinScore(studentScores, studentCount);

    //  Display results
    printf("\n Final Report:\n");
    printf("Average Score: %.2f\n", average);
    printf("Highest Score: %d\n", highest);
    printf("Lowest Score: %d\n", lowest);

    return 0;
}