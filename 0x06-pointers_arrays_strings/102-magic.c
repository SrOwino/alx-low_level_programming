#include <stdio.h>

void main(void)
{
int a[5] = {98, 198, 298, 398, 498};
int *p;

p = (int *)&a + 5;
printf("a[2] = %d\n", *(p - 3));
}
