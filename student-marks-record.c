#include <stdio.h>
struct student
{
    int rno;
    char name[20];
    int marks[3];
    int total;
    float avg;
};
int main()
{
    int i, j;
    struct student s[2];
    struct student t;
    for (i = 0; i < 2; i++)
    {
        printf("Enter Record for Student-%d \n", i + 1);
        printf("-----------------------------------\n");
        printf("Enter Roll-No. : ");
        scanf("%d", &s[i].rno);
        printf("Enter Name     : ");
        scanf("%s", s[i].name);
        s[i].total = 0;
        for (j = 0; j < 3; j++)
        {
            printf("Enter Marks of Subject %d : ", j + 1);
            scanf("%d", &s[i].marks[j]);
            s[i].total = s[i].total + s[i].marks[j];
            s[i].avg = s[i].total / 3.0;
        }
        printf("\n-----------------------------------\n");
    }
    for (i = 0; i < 2; i++)
    {
        for (j = i + 1; j < 2; j++)
        {
            if (s[i].total < s[j].total)
            {
                t = s[i];
                s[i] = s[j];
                s[j] = t;
            }
        }
    }
    printf("Records in Descending Order.\n (According to Total-Marks)");
    printf("\n-----------------------------------\n");
    printf("\n ROLLNO   NAME  TOTAL-MARKS  AVG\n");
    for (i = 0; i < 2; i++)
    {
        printf("\n %d\t %s\t %d\t %.2f", s[i].rno, s[i].name, s[i].total, s[i].avg);
    }
    return 0;
}