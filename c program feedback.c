#include<stdio.h>
int main() 
{
    FILE *fp;
    fp = fopen("feedback.txt", "w");
    if (fp == NULL) 
    {
    printf("failed opening file!\n");
    return 0;
    }
    fprintf(fp,"About c programming\n");
    fprintf(fp,"1.It is the basic programming language\n");
    fprintf(fp,"2.It is used to understand other programming languages\n");
    fprintf(fp,"3.It is the most popular programming language\n");
    fprintf(fp,"4.It is used in many applications\n");
    fprintf(fp,"5.It is used in many operating systems\n");
    fclose(fp);

    fp=fopen("feedback.txt", "a");
    
    fprintf(fp,"c-Teacher feedback","a");
    fprintf(fp,"1. The teacher is very good teacher\n");
    fprintf(fp,"2. The teacher is very good in teaching c programming\n");
    fprintf(fp,"3. The teacher explains the concepts clearly\n");
    fprintf(fp,"4. The teacher provides good guidance\n");
    fprintf(fp,"5. The teacher gives good advice\n");
    fclose(fp);

    fp=fopen("feedback.txt", "r");

    if (fp == NULL) 
    {
        printf("failed opening file!\n");
        return 0;
    }

    fclose(fp);
    printf("File created successfully\n");
    return 0;
    

}