#include <stdio.h>

int main() {
    int numSubjects;
    printf("Enter the number of subjects: ");
    scanf("%d", &numSubjects);
    float gpaArray[numSubjects];
    for (int i = 0; i < numSubjects; ++i) {
        printf("Enter GPA for Subject %d: ", i + 1);
        scanf("%f", &gpaArray[i]);
    }
    float sum = 0;
    for (int i = 0; i < numSubjects; ++i) {
        sum += gpaArray[i];
    }
    float average = sum / numSubjects;
    printf("\nAverage GPA: %.2f\n", average);
    printf("\nIndividual GPAs:\n");
    for (int i = 0; i < numSubjects; ++i) {
        printf("Subject %d: %.2f\n", i + 1, gpaArray[i]);
    }

    return 0;
}
