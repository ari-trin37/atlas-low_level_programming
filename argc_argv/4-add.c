# include "main.h"

/*
*/

int main(int argc, char *argv[])
{
    if (argc == 1) {
        printf("0\n");
        return 0;
    }

    int sum = 0;
    int i;

    for (i = 1; i < argc; i++) {
        int j = 0;
        while (argv[i][j] != '\0') {
            if (!isdigit(argv[i][j])) {
                printf("Error\n");
                return 1;
            }
            j++;
        }

        int num = atoi(argv[i]);
        sum += num;
    }

    printf("%d\n", sum);
    return 0;
}
