#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAX 100

void InputNum (int num[], int a)
{
    for (int i = 0; i < a; i++)
        {
            printf ( "Phan tu thu [%d] = ", i);
            scanf ("%d", &num[i]);
        }
}
void OutputNum (int num[], int a)
{
    for (int i = 0; i < a; i++)
        {
            printf ("%d\t", num[i]);
        }
    printf ("\n");    
}

// void AddNum (int *num, int *a, int *val, int *pos)
// {
//     for (int i = (*a) + 1; i >= (*pos); i--)
//     {
//         num[i] = num[i - 1];
//     }
//     num[(*pos)]= (*val);
//     ++(*a);
// }
// void OutputNumA (int num[], int a)
// {
//     for (int i = 0; i < a; i++)
//         {
//             printf ("Phan tu thu [%d] = %d\n", i, num[i]);
//         }  
// }
// void DeleteNum (int *num, int *a, int *pos_del)
// {
//     for (int j = (*pos_del); j < (*a) - 1; j++)
//     {
//         num[j] = num[j + 1];
//     }
//     --(*a); 
// }

// void OutputNumD (int num[], int a)
// {
//     for (int i = 0; i < a; i++)
//         {
//             printf ("Phan tu thu [%d] = %d\n", i, num[i]);
//         }     
// }

void Modify (int *num, int *pos_mod, int *value)
{
    num[(*pos_mod)] = (*value); 
}

void OutputNumM (int num[], int a)
{
    for (int i = 0; i < a; i++)
        {
            printf ("Phan tu thu [%d] = %d\n", i, num[i]);
        }  
}
// int RandomNum (int num[], int &a)
// {
//     srand (time(0));
//     int r = rand () % a + 0;
//     return num[r];
// }

int main ()  
{
    int num[MAX];
    int a;
    printf ("==============================");
    printf ("\n");
    printf ("Nhap so luong phan tu: "); 
    scanf ("%d", &a);
    InputNum (num, a);
    printf ("Mang ban da nhap la:\n"); 
    OutputNum (num, a);
    
    // int val, pos;
    // printf ("==============================");
    // printf ("\n");
    // printf ("Them 1 phan tu bat ki: "); scanf ("%d",&val);
    // printf ("Vi tri them phan tu: "); scanf ("%d",&pos);
    // AddNum (num, &a, &val, &pos);
    // OutputNumA (num, a);
    // printf ("Mang cua ban sau khi them 1 phan tu la:\n");
    // OutputNum (num, a);

    // int pos_del;
    // printf ("==============================");
    // printf ("\n");
    // printf ("Vi tri muon xoa phan tu bat ki: "); scanf ("%d", &pos_del);
    // DeleteNum (num, &a, &pos_del);
    // OutputNumD (num, a);
    // printf ("Mang cua ban sau khi xoa 1 phan tu la:\n");
    // OutputNum (num, a);

    int pos_mod, value;
    printf ("==============================");
    printf ("\n");
    printf ("Nhap vi tri phan tu muon doi: "); scanf ("%d", &pos_mod);
    printf ("Doi thanh so: "); scanf ("%d", &value);
    Modify (num, &pos_mod, &value);
    OutputNumM (num, a);
    printf ("Mang cua sau khi chinh sua la:\n");
    OutputNum (num, a);

    // int ans;
    // int ansnum;
    // printf ("==============================");
    // printf ("\nBan co muon choi loto khong ?\n"); 
    // printf ("==============================");
    // printf ("\n");
    // printf ("\nGo: 0 = NO <=> 1 = YES\n"); 
    // printf ("==============================");
    // printf ("\n");
    // printf ("\nCau tra loi cua ban la: "); 
    // scanf ("%d", &ans);
    // if (ans == 1)
    //     {
    //         printf ("==============================");
    //         printf ("\n");
    //         printf ("\nNhap so ban muon: "); 
    //         scanf ("%d", &ansnum);
    //         if (ansnum == RandomNum(num, a))
    //             {
    //                 printf ("==============================");
    //                 printf ("\n");
    //                 printf ("\n*** Con may gi ra ? Xin thua con so: %d ***\n",RandomNum(num, a));
    //                 printf ("==============================");
    //                 printf ("\n");
    //                 printf ("\nChuc mung ban da trung 10 ty!!!\n");
    //                 printf ("==============================");
    //                 printf ("\n");
    //                 printf ("\nKET THUC CHUONG TRINH\n");
    //                 printf ("\n");
    //             }
    //         else 
    //             {
    //                 printf ("==============================");
    //                 printf ("\n");
    //                 printf ("\nCon may gi ra ? Xin thua con so: %d\n",RandomNum(num, a));
    //                 printf ("==============================");
    //                 printf ("\n");
    //                 printf ("\nCon gi nua dau ma khoc voi sau...\n");
    //                 printf ("==============================");
    //                 printf ("\n");
    //                 printf ("\nKET THUC CHUONG TRINH\n");
    //                 printf ("\n");
    //             }
    //     }
    // else    
    //     {
    //         printf ("==============================");
    //         printf ("\n");
    //         printf ("\nKET THUC CHUONG TRINH\n");
    //         printf ("\n");
    //     }
    return 0;
}