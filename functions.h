#ifndef FUNCTIONS_H
#define FUNCTIONS_H

extern const int pop;
typedef struct
{
    char name[100];
    int sem;
    int roll;
    long long int contact;
    int isa1[3];
    int isa2[3];
    int esa[3];
    float sgpa;
} student;



extern student all_students[];
void student_data(student *ptr, int pop);
void marks(student *ptr, int pop);
int gp(float temp[], int n);
void sgpa(int k, student *ptr);
void card(student *ptr, int pop);
void pm(student *ptr);

#endif