#include<stdio.h>
void swap(int var1, int var2);
int main()
{
    int n1,n2;
    printf("\nENTER THE NUMBER 1 : ");
    scanf("%d", &n1);
    printf("\nENTER THE NUMBER 2 : ");
    scanf("%d", &n2);
    printf("\nBEFORE SWAPPING \n\t\t\tn1 = %d\t\t\tn2 = %d", n1, n2);
    swap(n1,n2);
    printf("\nAFTER SWAPPING \n\t\t\tn1 = %d\t\t\tn2 = %d", n1, n2);
    return 0;
}
void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
