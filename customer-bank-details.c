/*customer bank details using function*/
#include <stdio.h>
struct bank
{
    int acc_no;
    char name[20];
    int bal;
};

int check(struct bank b[], int n)
{
    int i;
    printf("\n customer details whose balance <100 Rs.\n");
    printf("-------\n");
    for (i = 0; i < n; i++)
    {
        if (b[i].bal < 100)
        {
            printf("account number : %d\n", b[i].acc_no);
            printf("name  :%s\n", b[i].name);
            printf("balance  : %d\n", b[i].bal);
            printf("---------\n");
        }
    }
}
int main()
{
    int i;
    struct bank b[3];
    for (i = 0; i < 3; i++)
    {
        printf("enter details of customer %d\n", i + 1);
        printf("---------\n");
        printf("enter account number :");
        scanf("%d",&b[i].acc_no);
        printf("enter name   :");
        scanf("%s",b[i].name);
        printf("enter balance   :");
        scanf("%d",&b[i].bal);
        printf("----------\n");
        check(b, 3);
        
    }
    return 0;
}