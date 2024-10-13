#include <stdio.h>
#include <conio.h>
void Arithematic(void); // Takes nothing,returns nothing.  /*Declaration*/
void OddEven(void);     // Takes nothing,returns nothing.  /*Declaration*/
int G(int, int);        // Takes something,returns some thing.  /*Declaration*/
void G2(void);          // Takes nothing,returns nothing.  /*Declaration*/
int N(int);            // Takes something,returns nothing.  /*Declaration*/
void scale(void);       // Takes nothing,returns nothing.  /*Declaration*/
void scale2(void);      // Takes nothing,returns nothing.  /*Declaration*/
void Time(void);        // Takes nothing,returns nothing.  /*Declaration*/
int f1(int);            // Takes nothing,returns nothing.  /*Declaration*/

int main()
{
    int a, b, c, choice, choice2, x, y, z, t, l, p, f, q;
    char n[15];
    printf("Enter your name\n");
    scanf("%s", n);
    printf("Welcome %s\n", &n);
    printf("enter your password");
    scanf("%d", &p);
    if (p == 1289)
    {
        printf("1. Arithmatic Calculation\n");
        printf("2. Greater number\n ");
        printf("3. odd-Even numbers\n ");
        printf("4. FirstN natural numbers\n ");
        printf("5.Converter of units\n");
        printf("6. Factorial\n");
        printf("Enter your choice no.\n ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            Arithematic();
            break;
        case 2:
            printf("1. Between two digits\n");
            printf("2. Between three digits\n");
            printf("Enter how many digit numbers you want to compaire ?\n");
            scanf("%d", &l);
            switch (l)
            {
            case 1:
                printf("Enter two numbers for comparisons\n");
                scanf("%d%d", &x, &y);
                z = G(x, y);
                printf("Greater number is %d\n", z); /* code */
                break;
            case 2:
                G2(); // Takes nothing,returns nothing.
                break;

            default:
                break;
            }

            break;
        case 3:
            OddEven();
            break;
        case 4:
            printf("Enter a number ");
            scanf("%d", &t);
            printf("Sum of first %d numbers are %d",t,N(t));
            break;
        case 5:
            printf("1. meter & centimeter\n");
            printf("2. kilogram & gram\n");
            printf("3. Time Calculation\n");
            //  printf("5. Year & month\n");
            printf("enter your choice");
            scanf("%d", &choice2);
            switch (choice2)
            {
            case 1:
                scale();

                break;
            case 2:
                scale2();
                break;
            case 3:
                Time();
                break;
            default:
                break;
            }
            break;
        case 6:
            printf("enter a number for factorial");
            scanf("%d", &f);
            q = f1(f);
            printf("Factorial of %d is %d",f,q);
            break;
        default:
            printf("Invalid");
            break;
        }
    }
    else
        printf("\nLol!!!!    Wrong pasword!");
    return 0;
}

                //arithematic program//
                
void Arithematic() // Takes nothing,returns nothing.
{
    int a, c;
    char b;
    printf("enter your opperation");
    scanf("%d %c%d", &a, &b, &c);
    switch (b)
    {
    case '+':
        printf("Sum is %d", a + c);
        /* code */
        break;
    case '-':
        printf("Subtraction: %d", a - c);
        break;
    case '*':
        printf("Multiplication: %d", a * c);
        break;
    case '/':
        printf("Quotient: %d\n", a / c);
        printf("Remainder: %d", a % c);
        break;
    default:
        printf("Invalid");
        break;
    }
}

                    // odd - even ptogram //

void OddEven() // Takes nothing,returns nothing.
{
    int a, b;
    printf("Enter a number");
    scanf("%d", &a);
    b = a % 2;
    if (b == 0)
        printf("Even number");
    else
        printf("Odd number");
}
int G(int a, int b) // Takes something,returns some thing.  /*Declaration*/
{
    if (a > b)
        return a;
    else
        return b;
}
void G2()
{
    int a, b, c;
    printf("enter three numbers for comparison\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
            printf("Greater number is %d", a); /* code */
        else
            printf("Greater number is %d", c);
    }
    else if (b > c)
        printf("Greater number is %d", b);
    else
        printf("Greater number is %d", c);
}

int N(int a) // Takes something,returns Nothing.  /*Declaration*/
{
    if(a==1)
            return 1;
    else
        return(a+N(a-1));
}
void scale() // Takes something,returns nothing.  /*Declaration*/
{
    int a, b, t;
    float c;
    printf("What you want to choose\n");
    printf("First: Meter to centimeter\n");
    printf("Second: Centimeter to meter\n");
    scanf("%d", &t);
    switch (t)
    {
    case 1:
        printf("enter a number in meter\n");
        scanf("%d", &a);
        b = a * 100;
        printf("%d in centimeter is %d\n", a, b);
        break;
    case 2:
        printf("enter a number in centimeter\n");
        scanf("%d", &a);
        c = a / 100;
        printf("%d in meter is %f", a, c);
    }
}
void scale2() // Takes something,returns nothing.  /*Declaration*/
{
    int a, b, t;
    float c;
    printf("What you want to choose\n");
    printf("First: kilogram to Gram\n");
    printf("Second: Gram to kilogram\n");
    scanf("%d", &t);
    switch (t)
    {
    case 1:
        printf("enter a number in kilogram\n");
        scanf("%d", &a);
        b = a * 1000;
        printf("%d in Gram is %d\n", a, b);
        break;
    case 2:
        printf("enter a number in Gram\n");
        scanf("%d", &a);
        c = a / 100;
        printf("%d in Kilogram is %f", a, c);
    }
}
void Time()   // Takes nothing,returns nothing.
{
    int a, b, c;
    printf("enter what you want to calculate\n");
    printf("1. Hours to minutes\n");
    printf("2. Minutes to Hours\n");
    printf("3. Minutes to second\n");
    printf("4. Seconds to minutes\n");
    printf("5. Hours to seconds\n");
    printf("6. Seconds to hours\n");

    scanf("%d", &a);
    if (a <= 3)
    {
        if (a == 3)
        {
            printf("Enter the time in minutes");
            scanf("%d", &b);
            c = b * 60;
            printf("%d minutes: %d seconds", b, c);
        }
        else if (a == 2)
        {
            printf("Enter the time in minutes");
            scanf("%d", &b);
            c = b / 60;
            printf("%d minutes : %d hour", b, c); /* code */
        }
        else
        {
            printf("Enter the time in Hours");
            scanf("%d", &b);
            c = b * 60;
            printf("%d hours : %d minutes", b, c); /* code */
        }
    }
    else if (a > 3)
    {
        if (a == 4)
        {
            printf("Enter the time in seconds");
            scanf("%d", &b);
            c = b / 60;
            printf("%d seconds : %d minutes", b, c); /* code */
        }
        else if (a == 5)
        {
            printf("Enter the time in Hours");
            scanf("%d", &b);
            c = b * 3600;
            printf("%d hours : %d seconds", b, c); /* code */
        }
        else
        {
            printf("Enter the time in seconds");
            scanf("%d", &b);
            c = b / 3600;
            printf("%d seconds : %d hours", b, c);
        }
    }
}
int f1(int a)       // Takes something,returns something.
{
    if (a == 1 || a == 0)
    {
        return 1;
    }
    else
    {
        return (a * f1(a - 1));
    }
}
