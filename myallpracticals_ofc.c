#include <stdio.h> //goto
#include <stdlib.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void function_call();
void maths_use_and_string_files();
void implement_structure();
void length_and_reverce_of_string();
void _2Darray();
void D1array();
void for_loop();
void while_and_dowhileloops();
void nested_ifelse();
void bitwise_operaters();
void logical_operators();
void pattern();
void relation_operators();
void datatype_conversion();
void consta();
void arithmatic_operators();
void _prac21();
void array_of_structure();
void main()
{
    int z;
    printf("which practical do you want to see just type the number");
    scanf("%d", &z);
    switch (z)
    {
    case 1:
        printf("first practical is the steps to install turboc++");
        break;
    case 2:
        consta();
        break;
    case 3:
        arithmatic_operators();
        break;
    case 4:
        datatype_conversion();
        break;
    case 5:
        datatype_conversion();
        break;
    case 6:
        relation_operators();
        break;
    case 7:
        logical_operators();
        break;
    case 8:
        bitwise_operaters();
        break;
    case 9:
        printf("I have used the logic of if &if else bou then also if you want it then type 6");
        break;
    case 10:
        nested_ifelse();
        break;
    case 11:
        printf("I have used switch case in this program to call functions ");
        break;
    case 12:
        printf("I have used switch case in this program to call functions ");
        break;
    case 13:
        while_and_dowhileloops();
        break;
    case 14:
        for_loop();
        break;
    case 15:
        pattern();
        break;
    case 16:
        D1array();
        break;
    case 17:
        _2Darray();
        break;
    case 18:
        length_and_reverce_of_string();
        break;
    case 19:
        implement_structure();
        break;
    case 20:
        array_of_structure();
        break;
    case 21:
        maths_use_and_string_files();
        break;
    case 22:
        function_call();
        break;
    case 23:
        break;
    case 24:
        break;
    case 25:
        break;
    default:
        printf("wrong choice ");
    }
}

void consta()
{
    float P; // changed int to float
    P = 3.142;
    float r, a;
    printf("Enter a radius: ");
    scanf("%f", &r);
    printf("Area of circle is: %f\n", P * r * r);
}

void arithmatic_operators()
{
    int n1, n2;
    printf("enter 2 numbers :\n");
    scanf("%d%d", &n1, &n2);
    printf("addition is:%d\n", n1 + n2);
    printf("substraction is :%d\n", n1 - n2);
    printf("multiplication is :%d\n", n1 * n2);
    printf("division is :%d\n", n1 / n2);
    printf("remainder is :%d\n", n1 % n2);
}

void datatype_conversion()
{
    float a; // comment of fifth program
    int b;
    b = 11;
    a = b;
    printf("%d", a);
    printf("%d", b);
}

void relation_operators()
{
    int b;
    printf("enter a number");
    scanf("%d", &b);
    if (b % 2 == 0)
    {
        printf("num is even");
    }
    else if (b % 2 != 0)
    {
        printf("num is odd");
    }
    else
    {
        printf("wrong choice");
    }
}

void logical_operators()
{
    printf("%d\n", (5 > 1) && (3 > 4));
    printf("%d\n", !(5 > 1) && (3 > 4));
}

void bitwise_operaters()
{
    int a = 5, b = 9;
    printf("a=%d,b=%d\n", a, b);
    printf("a&b=%d", a & b);
    printf("a|b=%d\n", a | b);
    printf("a^b=%d\n", a ^ b);
    printf("b<<1=%d\n", b << 1);
    printf("a>>1=%d\n", a >> 1);
}

void nested_ifelse()
{
    int n1, n2, n3;
    printf("enter 3 num:");
    scanf("%d%d%d", &n1, &n2, &n3);
    if (n1 > n2)
    {
        if (n1 > n3)
        {
            printf("\n maximum num is n1:%d", n1);
        }
        else
        {
            printf("\n maximum num is n3:%d", n3);
        }
    }
    else
    {
        if (n2 > n3)
        {
            printf("\n maximum num is n2:%d", n2);
        }
        else
        {
            printf("\n wrong choice");
        }
    }
}

void while_and_dowhileloops()
{
    int q;
    q = 1;
    while (q < 11)
    {
        printf("while loop");
        q++;
    }
    do
    {
        printf("do while loop");
        q++;
    } while (q < 11);
}

void for_loop()
{
    for (int w = 1; w < 11; w++)
    {
        printf("forloop");
    }
}

void pattern()
{
    int i, j;
    for (i = 1; i < 7; i++)
    {
        for (j = 1; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void D1array()
{
    float p[10];
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("\n enter percentages :\t");
        scanf("%f", &p[i]);
    }
    for (i = 0; i < 10; i++)
    {
        printf("\n persentages are :\t%f", p[i]);
    }
}

void _2Darray()
{
    int m[2][2], i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("enter matrix[%d][%d]\t", i, j);
            scanf("%d", &m[i][j]);
        }
    }
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
        {
            printf("matrix is %d", m[i][j]);
        }
}

void length_and_reverce_of_string()
{
    char s[] = "I love to do programs";
    int i, l, g;
    for (i = 0; s[i] != '\0'; i++)
        printf("length of string is :%d", i);
    printf("\nNow we will find the reverce] of the string");
    for (g = i - 1; g >= 0; g--)
    {
        printf("%c", s[g]);
    }
}

void implement_structure(){
    char name[3][10];
    int pri[3], pag[3], i;
    for (i = 0; i < 2; i++)
    {
        printf("enter details of books");
        printf("\tname:\t\t");
        scanf("%s", &name[i]);
        printf("\tpgno:\t\t\t");
        scanf("%d", &pri[i]);
        printf("\tprice:\t\t");
        scanf("%d", &pag[i]);
    }
    printf("Details are");
    for (i = 0; i < 2; i++)
    {
        printf("\t%d\n\tname:\t%s\nprice:\t%d\n\tno. of pages:\t%d\n", i++, name[i], pri[i], pag[i]);
    }
    }

    void array_of_structure()
    {
        int i, e;
        struct emp;
        {
            char na[10], s[20], c[20];
        };
        printf("how many employes data do you want to enter");
        scanf("%d", &e);
        struct emp [e];
        printf("\n Enter details of emploies\n");
        for (i = 0; i < e; i++)
        {
            printf("\n name:\t \nstreet:\t \ncity:\t");
            scanf("%s%s%s", emp[i].na, emp[i].s, emp[i].c);
        } // miss explain me this program
        printf("\ndetails are\n");
        printf("\n names\tstreet\tcity\n");
        for (i = 0; i < e; i++)
        {
            printf("\n%s\t%s\t%s", emp[i].na, emp[i].s, emp[i].c);
        }
    }

    // void array_of_structure(){
    //     int i, e;
    //     struct em{
    //         char na[10], s[20], c[20]};
    //     printf("how many employes data do you want to enter");
    //     scanf("%d", &e);
    //     struct emp[e];
    //     printf("\n Enter details of emploies\n");
    //     for (i = 0; i < e; i++)
    //     {
    //         printf("\n name:\t \nstreet:\t \ncity:\t");
    //         scanf("%s%s%s", emp[i].na, emp[i].s, emp[i].c);
    //     } // miss explain me this program
    //     printf("\ndetails are\n");
    //     printf("\n names\tstreet\tcity\n");
    //     for (i = 0; i < e; i++)
    //     {
    //         printf("\n%s\t%s\t%s", emp[i].na, emp[i].s, emp[i].c);
    //     }
    // }

    void maths_use_and_string_files()
    {
        int a = 1, b = 1, c = 1, d = 1;
        a = sqrt(1);
        b = sin(1);
        c = cos(1);
        d = pow(2, 2);
        printf("\n%d %d %d %d\n", a, b, c, d); // corrected printf statement

        char ch = '0';
        char s1[25] = "hahahah", s2[25] = "Hardik", s3[] = " "; // corrected string initialization
        strcat(s1, s2);
        char str1[25]; // declare str1
        strchr(str1, ch);
        strcmp(s1, s2);
        int len = strlen(s1);
        printf("Length of s1: %d\n", len);
        strcpy(s1, s2);
        printf("%s%s\n", s1, s2);
    }

    // void maths_use_and_string_files()
    // {
    //     int a = 1, b = 1, c = 1, d = 1;
    //     a = sqrt(1);
    //     b = sin(1);
    //     c = cos(1);
    //     d = pow(2, 2);
    //     printf("\n%d", a, b, c, d);

    //     char ch = '0';
    //     char s1[25] = 'hahahah', s2[25] = 'Hardik', s3[] =' ';
    //     strcat(s1, s2);
    //     strchr(str1, ch);
    //     strcmp(s1, s2);
    //     strlen(s1);
    //     strcpy(s1, s2);
    //     printf("%s%s", s1, s2);
    // }

    void function_call()
    {
        printf("I am truely tired😎");
    }

    //     void _prac21() {void copy(char s1[], char s2[], int 11, int 12);
    //     char org_string[20], new_string[20];
    //     gets(org_string);
    //     printf("Enter first string: \t");
    //     printf("Enter second string:\t");
    //     gets(new_string);
    //     int 11 = strlen(org_string);
    //     int 12 = strlen(new_string);
    //     copy(org_string.new_string, 11, 12);
    // }

    // void copy(char s1[], char s2[], int 11, int 12)
    // {
    //     int i = 0, j = 0;
    //     if (11 + 12 < 20){
    //         for (i = 0; i < 12; i++);

    //     sl[i] = s2[i];
    //     sl[i] = '\0';}
    //     else
    //     {
    //         printf("string is too large can't be copied.");
    //     }
    //     printf("\nAfter copy\nFirst string: \t%s", s1);
    //     printf("\nSecond string:\t%s", s2);
    // }

    void _prac21()
    {
        void copy(char s1[], char s2[], int len1, int len2);
        char org_string[20], new_string[20];
        printf("Enter first string: \t");
        gets(org_string);
        printf("Enter second string:\t");
        gets(new_string);
        int len1 = strlen(org_string);
        int len2 = strlen(new_string);
        copy(org_string, new_string, len1, len2);
    }

    void copy(char s1[], char s2[], int len1, int len2)
    {
        int i = 0;
        if (len1 + len2 < 20)
        {
            for (i = 0; i < len2; i++)
            {
                s1[i] = s2[i];
            }
            s1[i] = '\0';
        }
        else
        {
            printf("string is too large can't be copied.");
        }
        printf("\nAfter copy\nFirst string: \t%s", s1);
        printf("\nSecond string:\t%s", s2);
    }