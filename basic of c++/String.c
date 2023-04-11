#include <stdio.h>
int main()
{
    // int a =5++; invalid (in constant we can not use increment and decrement)
    char *ptr = "AjayKumar";
    printf("%s", ptr);
    ptr = ptr + 2;
    printf("\n%s", ptr);

    char name[] = {"AjayKumar"};
    printf("%s", name);
    // name = name+2; (array name vlaue (vafriable) can not be incremented or decremented)
}