#include <stdio.h>
typedef struct student
{
    int num;
    char name [50];
    char studentid [10];
    float score;
}st;
void Input_infor(st &in_st_infor)
{
    printf ("\nInput Num: ");
    scanf ("%d", &in_st_infor.num);

    printf ("\nInput Name: ");
    scanf ("%d", &in_st_infor.name);
    fgets (in_st_infor.name, sizeof(in_st_infor.name), stdin);

    printf ("\nInput Student ID: ");
    scanf ("%s", &in_st_infor.studentid);

    printf ("\nInput Score: ");
    scanf ("%f", &in_st_infor.score);
}
void Output_infor(st out_st_infor)
{
    printf ("\nOutput Num: %d\n", out_st_infor.num);
    printf ("\nOutput Name: ");
    puts (out_st_infor.name);
    printf ("Output StudentID: %s\n", out_st_infor.studentid);
    printf ("\nOutput Score: %.1f\n", out_st_infor.score);
    printf ("\n");
}

int main ()
{
    st sv;

    Input_infor(sv);

    printf ("\n===========\n");

    Output_infor(sv);

    return 0;
}