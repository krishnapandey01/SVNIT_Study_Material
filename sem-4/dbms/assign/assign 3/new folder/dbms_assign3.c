#include <stdio.h>
#include <stdlib.h>

typedef struct record {
    int student_id;
    char fname[20];
    char lname[20];
    unsigned int age;
    char gender;
    char city[20];
    int jee_marks;
} record;

const char *FILE_NAME = "stu.txt";

int get_file_length() {
    char c;
    int count = 0;
    FILE *fptr = fopen(FILE_NAME, "r");
    if(fptr) {
        for(c = fgetc(fptr); c != EOF; c = fgetc(fptr)) if(c == '\n') count++;
        fclose(fptr);
    } else {
        printf("File not found.\n");
    }
    return count;
}

void add_record() {
    int n = get_file_length();
    record r;
    printf("Enter student id: ");
    scanf("%d", &r.student_id);
    printf("Enter first name: ");
    scanf("%s", r.fname);
    printf("Enter lname name: ");
    scanf("%s", r.lname);
    printf("Enter age: ");
    scanf("%d", &r.age);
    printf("Enter gender (M for male, F for female): ");
    scanf(" %c", &r.gender);
    printf("Enter city: ");
    scanf("%s", r.city);
    printf("Enter JEE marks: ");
    scanf("%d", &r.jee_marks);
}

int main() {
    
    int choice = 0;
    do {
        printf("Menu: \n");
        printf("1) Add record. \n");
        printf("-1) Exit. \n");
        printf("> ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                add_record();
                break;
            default:
                break;
        }
        
    } while(choice != -1);
    
    return 0;
}