#include<stdio.h>
int main()
{
    char n[50], m[10], n1[50], m1[10], n2[50], m2[10], x[10]="Ho ten", y[10]="Tuoi", z[10]="MSSV";
    int a, a1, a2;

    printf ("Sinh vien thu nhat");
    printf ("\nHo ten:");
    scanf ("%s", &n);

    printf ("\nTuoi:");
    scanf ("%d", &a);

    printf ("\nMSSV:"); 
    scanf ("%s", &m);
    
    printf ("Sinh vien thu hai");
    printf ("\nHo ten:");
    scanf ("%s", &n1);

    printf ("\nTuoi:");
    scanf ("%d", &a1);

    printf ("\nMSSV:");
    scanf ("%s", &m1);
    
    printf ("Sinh vien thu ba");
    printf ("\nHo ten:"); 
    scanf ("%s", &n2);

    printf ("\nTuoi:");
    scanf ("%d", &a2);

    printf ("\nMSSV:");
    scanf ("%s", &m2);

    printf ("\n|%-30s| |%-5s| |%-10s|", x, y, z);
    printf ("\n|%-30s| |%-5d| |%-10s|", n, a, m);
    printf ("\n|%-30s| |%-5d| |%-10s|", n1, a1, m1);
    printf ("\n|%-30s| |%-5d| |%-10s|", n2, a2, m2);
    return 0;
}