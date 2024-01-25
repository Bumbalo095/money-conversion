#include <stdio.h>

int cantous(void);
int ustocan(void);
int cantoeuro(void);
int eurotocan(void);
int ustoeuro(void);
int eurotous(void);

int main()
{
  
    int convertoption;
  
    printf("What type of convertion would you like to do?\n");
    printf("Canadian dollars to Us : 1\n");
    printf("Us to Canadian dollars : 2\n");
    printf("Canadian dollars to Euro: 3\n");
    printf("Euro to Canadian dollars : 4\n");
    printf("Us dollars to Euro : 5\n");
    printf("Euro dollars into Us : 6\n");
    scanf(" %d", &convertoption);

    switch (convertoption)
    {
    case 1:
    cantous();
    break;

    case 2:
    ustocan();
    break;

    case 3:
    cantoeuro();
    break;

    case 4:
    eurotocan();
    break;

    case 5:
    ustoeuro();
    break;

    case 6:
    eurotous();
    break;
    
    default:
    printf("\nEnter a valid Option!");
    break;
    }

    return 0;
}

int cantous(void)
{
    double numb1, result;
    char choose;

    printf("You have choosen to convert Canadian dollars into Us dollars!\n");
    printf("Enter the number that you would like to convert\n");
    scanf(" %lf", &numb1);

    result = numb1 * 0.74;

    printf(" %.2lf CAN is equal to\n %.2lf US\n" ,numb1, result);

    printf("Would you like to proceed to another convertion? ( y or n )\n");
    scanf(" %c", &choose);

    switch (choose)
    {
    case 'y':
    return 1;
    break;
    
    case 'n':
    return 0;
    break;

    default:
    printf("\nEnter a valid option!");
    break;
    }
    
}

int ustocan(void)
{
    double numb1, result;
    char choose;

    printf("You have choosen to convert Us dollars into Canadian dollars!\n");
    printf("Enter the number that you would like to convert\n");
    scanf(" %lf", &numb1);

    result = numb1 / 0.74;

    printf(" %.2lf US is equal to\n %.2lf CAN\n" ,numb1, result);

    printf("Would you like to proceed to another convertion? ( y or n )\n");
    scanf(" %c", &choose);

    switch (choose)
    {
    case 'y':
    return 1;
    break;
    
    case 'n':
    return 0;
    break;

    default:
    printf("\nEnter a valid option!");
    break;
    }
    
}

int cantoeuro(void)
{
    double numb1, result;
    char choose;

    printf("You have choosen to convert Canadian dollars into Euro dollars!\n");
    printf("Enter the number that you would like to convert\n");
    scanf(" %lf", &numb1);

    result = numb1 * 0.68;

    printf(" %.2lf CAN is equal to\n %.2lf Euro\n" ,numb1, result);

    printf("Would you like to proceed to another convertion? ( y or n )\n");
    scanf(" %c", &choose);

    switch (choose)
    {
    case 'y':
    return 1;
    break;
    
    case 'n':
    return 0;
    break;

    default:
    printf("\nEnter a valid option!");
    break;
    }
    
}

int eurotocan(void)
{
    double numb1, result;
    char choose;

    printf("You have choosen to convert Euro dollars into Canadian dollars!\n");
    printf("Enter the number that you would like to convert\n");
    scanf(" %lf", &numb1);

    result = numb1 * 1.47;

    printf(" %.2lf Euro is equal to\n %.2lf Can\n" ,numb1, result);

    printf("Would you like to proceed to another convertion? ( y or n )\n");
    scanf(" %c", &choose);

    switch (choose)
    {
    case 'y':
    return 1;
    break;
    
    case 'n':
    return 0;
    break;

    default:
    printf("\nEnter a valid option!");
    break;
    }
    
}

int ustoeuro(void)
{
    double numb1, result;
    char choose;

    printf("You have choosen to convert Us dollars into Euro dollars!\n");
    printf("Enter the number that you would like to convert\n");
    scanf(" %lf", &numb1);

    result = numb1 * 0.92;

    printf(" %.2lf Euro is equal to\n %.2lf Us\n" ,numb1, result);

    printf("Would you like to proceed to another convertion? ( y or n )\n");
    scanf(" %c", &choose);

    switch (choose)
    {
    case 'y':
    return 1;
    break;
    
    case 'n':
    return 0;
    break;

    default:
    printf("\nEnter a valid option!");
    break;
    }
    
}

int eurotous(void)
{
    double numb1, result;
    char choose;

    do {

    printf("You have choosen to convert Euro dollars into Us dollars!\n");
    printf("Enter the number that you would like to convert\n");
    scanf(" %lf", &numb1);

    result = numb1 * 1.09;

    printf(" %.2lf Euro is equal to\n %.2lf Us\n" ,numb1, result);

    printf("Would you like to proceed to another convertion? ( y or n )\n");
    scanf(" %c", &choose);

    if (choose != 'y' && choose != 'n') {
        printf("\nEnter a valid option!\n");
    }

} while (choose == 'y');

return 1;
    
}