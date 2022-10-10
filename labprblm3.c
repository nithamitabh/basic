// structure odf student store id ,cgpa and name
#include <stdio.h>
struct studentsdata
    {
        int id;
        float cgpa;
        char name[100]; 
        /* data */
    }s1,s2,s3;

int main(){
    
    // struct studentdata s1 ;
    printf("Enter id of student 1 ");
    scanf("%d",&s1.id);
    printf("Enter cgpa of student 1 ");
    scanf("%f",&s1.cgpa);
    printf("Enter name of first student ");
    scanf("%s",&s1.name[100]);
    printf("Enter id of student 2 ");
    scanf("%d",&s2.id);
    printf("Enter cgpa of student 2 ");
    scanf("%f",&s2.cgpa);
    printf("Enter name of second student ");
    scanf("%s",&s2.name[100]);
    printf("Enter id of student 3 ");
    scanf("%d",&s3.id);
    printf("Enter cgpa of student 3 ");
    scanf("%f",&s3.cgpa);
    printf("Enter name of third student ");
    scanf("%s",&s3.name[100]);

    return 0;

}