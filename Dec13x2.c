#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

// Sort students by marks (descending)
void sort(struct Student *s, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (s[j].marks > s[i].marks) {
                struct Student temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll: ");
        scanf("%d", &s[i].roll);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    sort(s, n);

    printf("\nSorted list (highest marks first):\n");
    for (int i = 0; i < n; i++) {
        printf("%s  | Roll: %d | Marks: %.2f\n", s[i].name, s[i].roll, s[i].marks);
    }

    return 0;
}
