//union example in c - declaration and accessing 

#include <stdio.h>

union StudentData {
    int id;
    float marks;
    char grade;
};

int main() {
    union StudentData s;
    s.id = 101;
    printf("Union ID: %d\n", s.id);

    s.marks = 92.5;
    printf("Union Marks: %.2f\n", s.marks);

    return 0;
}
