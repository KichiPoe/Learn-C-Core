#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "calculator.h"

void print_help(void)
{
    printf(
        "mycalc - a lightweight command-line calculator\n"
        "\n"
        "USAGE\n"
        "    mycalc <command> <operand> [operand]\n"
        "\n"
        "DESCRIPTION\n"
        "    Perform arithmetic operations directly from your terminal.\n"
        "\n"
        "COMMANDS\n"
        "    add                 Add two numbers\n"
        "    sub                 Subtract two numbers\n"
        "    mul                 Multiply two numbers\n"
        "    div                 Divide two numbers\n"
        "    pow                 Raise a number to a power\n"
        "    mod                 Calculate modulo remainder\n"
        "    sqrt                Calculate square root\n"
        "\n"
        "OPTIONS\n"
        "    -h, --help          Show this help message\n"
        "    -d, --dev           Show developer information\n"
        "    -v, --version       Show version information\n"
        "\n"
        "EXAMPLES\n"
        "    mycalc add 12 8\n"
        "    mycalc mul 4 5\n"
        "    mycalc pow 2 10\n"
        "    mycalc sqrt 81\n"
        "\n"
        "PROJECT\n"
        "    MyCalc - Learn-C-Core\n"
        "    Author: Kishan Pujari (Kichi Poe)\n"
        "\n"
        "REPORTING BUGS\n"
        "    https://github.com/KichiPoe/Learn-C-Core\n"
        "\n");
}

void print_dev(void)
{
    printf(
        "mycalc - developer information\n"
        "\n"
        "PROJECT\n"
        "    Learn-C-Core\n"
        "    Level 0 Project\n"
        "\n"
        "DESCRIPTION\n"
        "    A lightweight command-line calculator\n"
        "    written in C.\n"
        "\n"
        "AUTHOR\n"
        "    Kishan Pujari (Kichi Poe)\n"
        "\n"
        "SOURCE\n"
        "    https://github.com/KichiPoe/Learn-C-Core\n"
        "\n"
        "BUILT WITH\n"
        "    C (ISO C standard)\n"
        "\n");
}

void print_ver(void)
{
    printf(
        "mycalc 1.0.0\n"
        "Learn-C-Core Level 0 Project\n"
        "Copyright (c) Kishan Pujari (Kichi Poe)\n");
}

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        fprintf(stderr,
            "mycalc: no command provided\n"
            "Try 'mycalc --help' for more information.\n");
        return 1;
    }

    /* Options */
    if (strcmp(argv[1], "-h") == 0 || strcmp(argv[1], "--help") == 0)
    {
        print_help();
        return 0;
    }

    if (strcmp(argv[1], "-d") == 0 || strcmp(argv[1], "--dev") == 0)
    {
        print_dev();
        return 0;
    }

    if (strcmp(argv[1], "-v") == 0 || strcmp(argv[1], "--version") == 0)
    {
        print_ver();
        return 0;
    }

    /* Binary operations */
    if (strcmp(argv[1], "add") == 0 ||
        strcmp(argv[1], "sub") == 0 ||
        strcmp(argv[1], "mul") == 0 ||
        strcmp(argv[1], "div") == 0 ||
        strcmp(argv[1], "pow") == 0 ||
        strcmp(argv[1], "mod") == 0)
    {
        if (argc != 4)
        {
            fprintf(stderr,
                "mycalc: missing operand\n"
                "usage: mycalc %s <operand> <operand>\n",
                argv[1]);
            return 1;
        }

        double a = atof(argv[2]);
        double b = atof(argv[3]);

        if (strcmp(argv[1], "add") == 0)
            printf("%.2f\n", add(a, b));
        else if (strcmp(argv[1], "sub") == 0)
            printf("%.2f\n", sub(a, b));
        else if (strcmp(argv[1], "mul") == 0)
            printf("%.2f\n", mul(a, b));
        else if (strcmp(argv[1], "div") == 0)
            printf("%.2f\n", divide(a, b));
        else if (strcmp(argv[1], "pow") == 0)
            printf("%.2f\n", power(a, b));
        else
            printf("%d\n", modulus((int)a, (int)b));

        return 0;
    }

    /* Unary operation */
    if (strcmp(argv[1], "sqrt") == 0)
    {
        if (argc != 3)
        {
            fprintf(stderr,
                "mycalc: missing operand\n"
                "usage: mycalc sqrt <operand>\n");
            return 1;
        }

        double a = atof(argv[2]);
        printf("%.2f\n", square_root(a));

        return 0;
    }

    /* Unknown command */
    fprintf(stderr,
        "mycalc: unknown command '%s'\n"
        "Try 'mycalc --help' for more information.\n",
        argv[1]);

    return 2;
}