//Accept division of student from user and depends on the division 
//display exam timing. There are 4 divisions in school as A,B,C,D. Exam 
//of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM. 
//(Application should be case insensitive) 

#include<stdio.h>
#include<stdbool.h>

void DisplaySchedule(char chDiv)
{
    if((chDiv == 'A') || (chDiv == 'a'))
    {
        printf("Your Exam is at 7 AM\n");
    }
    else if((chDiv == 'B') || (chDiv == 'b'))
    {
        printf("Your Exam is at 8:30 AM\n");
    }
    else if((chDiv == 'C') || (chDiv == 'c'))
    {
        printf("Your Exam is at 9:20 AM\n");
    }
    else if((chDiv == 'D') || (chDiv == 'd'))
    {
        printf("Your Exam is at 10:30 AM\n");
    }
    else
    {
        printf("Invalid Division Entered! (There are only 4 Divisions A, B, C, D\n");
    }

}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter your Division : ");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}