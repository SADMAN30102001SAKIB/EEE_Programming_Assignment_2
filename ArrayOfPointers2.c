#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    char name[20];
    int age;
    float gpa;
};

int main() {
    struct student s1 = {"John", 18, 3.8};
    struct student s2 = {"Mary", 20, 3.5};
    struct student s3 = {"Tom", 19, 3.2};

    struct student *ptr[3] = {&s1, &s2, &s3};

    printf("Student Details:\n");
    for(int i = 0; i < 3; i++) {
        printf("Name: %s\n", ptr[i]->name);
        printf("Age: %d\n", ptr[i]->age);
        printf("GPA: %.2f\n", ptr[i]->gpa);
    }

    return 0;
}