#include <stdio.h>
#include "functions.h"
#include <stdlib.h>

const int pop = 10;     //number of students (variable)

int main()
{

    student all_students[pop];
    int user_input;
    do
    {
    
        printf("\nFollowing are the options. Please click any of the following numbers.\n");
        printf("1 - Enter Student Information \n2 - Enter Marks \n3 - Grade Card\n4 - Exit\n\n");

        printf("Enter choice : ");
        scanf("%d",&user_input);
        printf("\n");

        switch(user_input)
        {
            case 1:
                student_data(all_students, pop);    //to input student data
                break;
            case 2:
                marks(all_students, pop);       //to input marks of the students
                break;
            case 3:
                card(all_students, pop);        //to print grade card of all students
                break;
            case 4:
                return 1;
        }
    } while (user_input != 4); //breaks out when user wants to exit
}