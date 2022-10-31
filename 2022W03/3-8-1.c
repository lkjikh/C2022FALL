#include<stdio.h>
void reverse(const char* src)
{
    int i = 0;
    int len = strlen(src);
     int dst[1000] = { 0 };
    for (i = 0; i < len; i++)
    {
        src[len - i - 1] = dst[i];

    }
    printf("%s\n", dst);
    return;
}

int main() 
{
    char str[10] = "Homework";
    reverse(str);
    return 0;
}
