#include <stdio.h>

int main()
{
    //     int count = 1;
    // label:

    //     printf("We are inside the lable: %d\n", count);
    //     goto end;
    //     printf("Hello %d\n", count);
    //     count++;

    // goto label;
    // end:
    //     printf("End program:");
    int num;
    for (int i = 0; i < 9; i++)
    {
        printf("%d\n", i);
        for (int j = 0; j < 9; j++)
        {
            printf("Enter 0 to Exit: ");
            scanf("%d", &num);
            if (num == 0)
            {
                // break;
                goto end;
            }
        }
    }
end:

    return 0;
}