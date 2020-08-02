/*student name, roll no., admission and birth date detail*/
#include <stdio.h>
struct student
{
    int roll_no;
    char name[20];
    struct date
    {
        int D;
        int M;
        int Y;
    } ad, bd;
};
int main()
{
    struct student a;
    printf("\tDisplay student details \n");
    printf("-------\n");
    printf("enter roll-number :");
    scanf("%d", &a.roll_no);
    printf("enter name  :");
    scanf("%s", a.name);
    printf("enter birth date :");
    scanf("%d-%d-%d", &a.bd.D, &a.bd.M, &a.bd.Y);
    printf("enter admission date :");
    scanf("%d-%d-%d", &a.ad.D, &a.ad.M, &a.ad.Y);
    int r;
    r = a.ad.Y-a.bd.Y;
    printf("------------\n");
    printf("\nage of student at the time of admission\n");
    printf("---------------\n");
    printf("\t%d Years", r);
    return 0;
}