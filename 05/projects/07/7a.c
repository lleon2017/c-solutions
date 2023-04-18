#include <stdio.h>

int main(void)
{
    int n1, n2, n3, n4, temp;

    printf("Enter four integers: ");
    scanf("%d%d%d%d", &n1, &n2, &n3, &n4);

    if (n1 > n2)
    {
        temp = n1;
        n1 = n2;
        n2 = temp;
    }
    if (n3 > n4)
    {
        temp = n3;
        n3 = n4;
        n4 = temp;
    }

    printf("Largest: %d\n", n2 > n4 ? n2 : n4);
    printf("Smallest: %d\n", n1 < n3 ? n1 : n3);

    return 0;
}
