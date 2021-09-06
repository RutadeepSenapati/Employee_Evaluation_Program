#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include "Email_Check.h"
int main()
{
    char employee_name[50];
    char official_mail_id[60];
    char it_skills[100];
    char it_skill_check[4];
    char *token;
    int mobile_numer, count1 = 0, count2 = 0, count3 = 0, tenure, incentive,mail_count=0,mobile_count=0;
    printf("###################################################################\n");
    printf("*******************************************************************\n");
    printf("                 EMPLOYEE EVALUATION PROGRAM\n");
    printf("*******************************************************************\n");
    printf("###################################################################\n\n");
    printf("Enter Your Name : ");
    gets(employee_name);
    mail:
    printf("Enter Your Official Mail ID : ");
    gets(official_mail_id);
    if(EmailCheck(official_mail_id)){
        if(mail_count==3){
            printf("\nMaximum Attempts reached");
            exit(1);
        }
        printf("Please Enter a valid mail id\n");
        mail_count++;
        goto mail;
    }
    mobile:
    printf("Enter Your Mobile Number : +91 ");
    scanf("%d", &mobile_numer);
    if(1000000000>=mobile_numer>=10000000000){
        if(mobile_count==3){
            printf("\nMaximum Attempts reached");
            exit(1);
        }
        printf("Invalid Mobile Number, Please enter a valid mobile number.\n");
        mobile_count++;
        goto mobile;
    }
    printf("Do You Have any IT SKills Yes/No : ");
    fflush(stdin);
    gets(it_skill_check);
    if (strcmp(it_skill_check, "Yes") == 0)
    {
    skill:
        printf("Enter atleast 1 and at most 5 IT skills(Sample Input: C, Java, C++, Python, Oracle) : \n");
        gets(it_skills);
        if (strcmp(it_skills, "\0") == 0)
        {
            goto skill;
            count1++;
            if (count1 == 3)
            {
                printf("\nMaximum Attempts reached");
                exit(1);
            }
        }
        token = strtok(it_skills, ",");
        while (token != NULL)
        {
            count2++;
            token = strtok(NULL, ",");
        }
        printf("Did You recieved any award for the above mentioned skills (Yes/No) :");
        gets(it_skill_check);
        if (strcmp(it_skill_check, "Yes") == 0)
        {
            printf("Enter those IT skills for which youn are awarded *Max 5* (Sample Input: C, Java, C++, Python, Oracle) : \n");
            gets(it_skills);
            token = strtok(it_skills, ",");
            while (token != NULL)
            {
                count3++;
                token = strtok(NULL, ",");
            }
        }
        printf("Enter Your Service Period in months (dont enetr fractional value): ");
        scanf("%d", &tenure);
        printf("Did you patented any new design/software made by you (Yes/No): ");
        fflush(stdin);
        gets(it_skill_check);
        if (strcmp(it_skill_check, "Yes") == 0)
        {
            printf("Congratulations You are eligible for promotion.\n");
        }
        if (count3 == 5&&tenure>=6)
        {
            printf("\nCongratulations You are eligible for 10% incentive");
        }
        else if (count3 == 4&&tenure>=6)
        {
            printf("\nCongratulations You are eligible for 8%% incentive");
        }
        else if (count3 == 3&&tenure>=6)
        {
            printf("\nCongratulations You are eligible for 6%% incentive");
        }
        else if (count3 == 2&&tenure>=6)
        {
            printf("\nCongratulations You are eligible for 4%% incentive");
        }
        else if (count3 == 1&&tenure>=6)
        {
            printf("\nCongratulations You are eligible for 2%% incentive");
        }
        else
            printf("\nWe appreaciate you efforts, Please improve your skills.");
    }
    else
        printf("\nWe appreciate your efforts, please learn some new technical skills, see you in the next quarter");
    return 0;
}
