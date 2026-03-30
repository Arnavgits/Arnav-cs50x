#include <stdio.h>

void func (int i, int j)
{
    printf("%d %d\n", i , j);
}

int main(void)
{
    int a = 1;
    func(a++, a++);
    printf("%d\n", a);
    return 0;
}
