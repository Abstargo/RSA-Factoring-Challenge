#include "factor.h"

int main(int argc, char *argv[])
{
    unsigned long long num;
    FILE *file = fopen(argv[1], "r");

    if (argc != 2)
    {
        printf("Usage: %s <file>\n", argv[0]);
        return (1);
    }

    if (file == NULL)
    {
        perror("ERROR");
        return (1);
    }

    while (fscanf(file, "%llu", &num) != EOF)
    {
        if (num > 1)
        {
            factorize(num);
        }
    }

    fclose(file);
    return (0);
}
