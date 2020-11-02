#include <stdio.h>
int main(int argc, char **argv)
{
    int n,i;
    printf("enter the number of students:");
    scanf("%d",& n);
    struct student
    {
        int id;
        int age;
        int marks;
    }s[n];
    for (i=0;i<n;i++)
    {
        printf("%d)student id:",i+1);
        scanf("%d",& s[i].id);
        printf("%d)student age:",i+1);
        scanf("%d",& s[i].age);
        printf("%d)student marks:",i+1);
        scanf("%d",& s[i].marks); 
    }
    printf("the valid student details:\n");
    printf("*****************************\n");
    for (i=0;i<n;i++)
    {
        if(s[i].age>20)
        {
        if(s[i].marks>=65)
        {
            printf("student %d is eligible for admission\n",i+1);
          
        }
        }
    }
    
	return 0;
}
