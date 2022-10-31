
#include<stdio.h>
#include<string.h>
#include<math.h>


void print_hex(int num)
{
    int index = 0;
    char ans[10];
    if (num == 0)  printf(" the hex:  0");
    else {
        int a = num;
        while (a) {
            int b = a % 16;
            if (b >= 10) {
                ans[index] = 'A' + b - 10;

            }
            else if (b < 10)
            {

                ans[index] = '0' + b;
            }
            a = a / 16;
            index++;
        }
    }
    for (int i = index - 1; i >= 0; i--)
    {
        printf("%c", ans[i]);
    }
    printf("\n");
}

int main() {

    int num ;
    scanf_s("%d", &num);
    print_hex(num);
    return 0;
}