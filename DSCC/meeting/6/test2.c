#include <stdio.h>
void Input (int x[][100], int r, int c)
{
    for ( int i = 0; i < r; i++ )
        {
            for ( int j = 0; j < c; j++ )
                {
                    printf ("[%d][%d] = ", i, j);
                    scanf ("%d", &x[i][j]);
                }
                
        }    
}
void Output (int x[][100], int r, int c)
{
    for ( int i = 0; i < r; i++ )
        {
            for ( int j = 0; j < c; j++ )
                {
                    printf ("%d\t", x[i][j]);
                }
            printf ("\n");
        }    
}
int main ()
{
    int x[100][100], i, j;
    int r, c;
    printf ("Row = "); scanf ("%d", &r);
    printf ("Column = "); scanf ("%d", &c);
    Input (x,r,c);
    Output (x,r,c);
    return 0;
}