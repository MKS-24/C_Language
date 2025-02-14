#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
#include <time.h>

void admin();
void login();
void menu();
void transaction();
void option();
void menuexit();
void chkblnc();
void deposit();
void withdrawl();
void search();
void search_acc();
void view();
void add();
void edit();
void del();
void about();
int generateUniqueAccountNumber();

int verify();

COORD coord = {0, 0};
int m, r;

char id[20], password[15];

struct record
{
    char name[25];
    int account;
    char phone[15];
    char address[25];
    char email[35];
    char citiz[20];
    double blnc;
    char UserID[10];
} rec;

void gotoxy(int a, int b)
{
    coord.X = a;
    coord.Y = b;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{
    system("color f4");
    gotoxy(43, 4);
    printf(" WELCOME TO RAKZ BANKING SYSTEM ");
    gotoxy(50, 8);
    printf("ACCOUNT TYPE");
    gotoxy(44, 10);
    printf("[1] . ADMINISTRATOR ");
    gotoxy(44, 11);
    printf("[2] . USER ");
    gotoxy(44, 14);
    printf("Enter Your Choice .... ");
    scanf("%d", &m);
    if (m != 1 && m != 2)
    {
        system("cls");
        main();
    }
    system("CLS");
    admin();
    return 0;
}

void admin()
{
    system("color f4");  
    gotoxy(43, 4);
    printf(" WELCOME TO RAKZ BANKING SYSTEM ");
    login();
    if (verify() == 1)
    {
        if (m == 1)
            menu();
        else
            transaction();
    }
    else if (verify() == 0)
    {
        system("CLS");
        gotoxy(43, 16);
        printf("Incorrect Username / Password !!!!");
        admin();
    }
}

void login()
{
    int i = 0;
    gotoxy(44, 10);
    printf("Enter The Username : ");
    scanf(" %[^\n]", id);
    gotoxy(44, 12);
    printf("Enter The Password : ");
    scanf(" %[^\n]", password);
}

int verify()
{
    char a;
    if (m == 1)
    {
        if ((strcmp(id, "admin") == 0 && strcmp(password, "admin") == 0))
        {
            gotoxy(38, 16);
            printf("You Have Successfully Logged In : \" %s \" ", id);
            gotoxy(44, 20);
            printf("Press any key to continue .... ");
            getch();
            return 1;
        }
        else
            return 0;
    }
    else if (m == 2)
    {
        if (strcmp(id, "user") == 0 && strcmp(password, "user") == 0)
        {
            gotoxy(38, 16);
            printf("You Have Successfully Logged In : \" %s \" ", id);
            gotoxy(44, 20);
            printf("Press any key to continue .... ");
            getch();
            return 1;
        }
        else
            return 0;
    }
    return 0;
}

void menu()
{
    system("CLS");
    gotoxy(48, 4);
    printf("WELCOME TO MAIN MENU");
    gotoxy(44, 8);
    printf("[1] . View Customer Accounts");
    gotoxy(44, 9);
    printf("[2] . Customer Account Registration");
    gotoxy(44, 10);
    printf("[3] . Edit Customer Account");
    gotoxy(44, 11);
    printf("[4] . Delete Customer Account");
    gotoxy(44, 12);
    printf("[5] . Search Customer Account");
    gotoxy(44, 13);
    printf("[6] . Transaction");
    gotoxy(44, 14);
    printf("[7] . Log Out !!! ");
    gotoxy(44, 15);
    printf("[8] . About US ");
    gotoxy(43, 20);
    printf("Please Enter Your Choice [1-8] : ");
    option();
}

void option()
{
    int i;
    scanf("%d", &i);
    system("CLS");
    switch (i)
    {
    case 1:
        view();
        break;
    case 2:
        add();
        break;
    case 3:
        edit();
        break;
    case 4:
        del();
        break;
    case 5:
        search();
    case 6:
        transaction();
        break;
    case 7:
        menuexit();
        break;
    case 8:
        about();
        break;
    default:
        menu();
    }
}

void view()
{
    int i = 7;
    struct record rec;
    FILE *f;

    f = fopen("record.bin", "rb");
    gotoxy(50, 3);
    printf("CUSTOMERS LIST");
    gotoxy(5, 5);
    printf("A/C No.");
    gotoxy(20, 5);
    printf("Account Name");
    gotoxy(40, 5);
    printf("Email Address");
    gotoxy(64, 5);
    printf("Phone No.");
    gotoxy(84, 5);
    printf("Balance");
    gotoxy(5, 6);

    while (fread(&rec, sizeof(rec), 1, f))
    {
        gotoxy(5, i);
        printf("%d", rec.account);
        gotoxy(20, i);
        printf("%s", rec.name);

        gotoxy(40, i);
        printf("%s", rec.email);
        gotoxy(64, i);
        printf("%s", rec.phone);
        gotoxy(84, i);
        printf("$%.2lf", rec.blnc);
        i++;
    }

    fclose(f);
    int x;
    gotoxy(42, i + 5);
    printf("Press [Enter] to return back to main menu. ");
    x = getch();

    if (x == 13)
    {
        menu();
    }
    else
        view();
}

int generateUniqueAccountNumber()
{
    srand((unsigned int)time(NULL));
    return rand() % 1000000 + 100000;
}

void add()
{
    char c;
    struct record rec;
    FILE *f;

    f = fopen("record.bin", "ab");
    if (f == NULL)
    {
        printf("Error opening file.\n");
        return;
    }

    do
    {
        system("CLS");
        printf("\t\t\tCUSTOMER ACCOUNT REGISTRATION\n");

        printf("[1] . Enter Your Name           : ");
        scanf(" %[^\n]", rec.name);

        rec.account = generateUniqueAccountNumber();

        printf("[2] . Enter Your Phone Number   : ");
        scanf(" %[^\n]", rec.phone);

        printf("[3] . Enter Your Address        : ");
        scanf(" %[^\n]", rec.address);

        printf("[4] . Enter Your E-mail         : ");
        scanf(" %[^\n]", rec.email);

        printf("[5] . Enter Your Citizenship No.: ");
        scanf(" %[^\n]", rec.citiz);

        printf("[6] . Enter Amount To Deposit   : $");
        scanf(" %lf", &rec.blnc);

        for (int r = 0; r < 10; r++)
        {
            rec.UserID[r] = rand() % 10;
        }

        fwrite(&rec, sizeof(rec), 1, f);

        printf("CUSTOMER ACCOUNT REGISTRATION SUCCESSFUL\n");
        printf("Your account number is: %d\n", rec.account);
        printf("Please note down your account number.\n");

        printf("Do You Want To Add Another Record ? (Y/N) : ");
        scanf(" %c", &c);

    } while (c == 'Y' || c == 'y');

    fclose(f);

    printf("Press any key to return back to the main menu. ");
    char z = getch();
    if (z == 13)
    {

        menu();
    }
}

int chkacc(int a)
{
    FILE *f;
    f = fopen("record.bin", "rb");
    // check whether we have reached end of file or not
    while (!feof(f))
    {
        fread(&rec, sizeof(rec), 1, f);

        if (a == rec.account)
        {
            fclose(f);
            return 1;
        }
    }
    fclose(f);
    return 0;
}

void edit()
{
    FILE *x, *y;
    int a, c;
// colon i.e ":" acts as id for goto function
re:
    gotoxy(48, 4);
    printf(" EDIT CUSTOMER ACCOUNT ");
    gotoxy(43, 7);
    printf("Enter Your Account Number To Edit : ");
    scanf("%d", &a);
    if (chkacc(a) == 1)
    {
        x = fopen("record.bin", "rb");
        y = fopen("new.bin", "wb");
        while (fread(&rec, sizeof(rec), 1, x))
        {
            if (rec.account != a)
                fwrite(&rec, sizeof(rec), 1, y);
            else if (rec.account == a)
            {
                gotoxy(52, 21);
                printf("Account Number Matched. ");
                gotoxy(51, 10);
                printf("Enter Your Details");
                gotoxy(31, 12);
                printf("[1] . Enter Your Name           : ");
                scanf(" %[^\n]", rec.name);
                gotoxy(31, 13);
                printf("[2] . Enter Your Account Number : ");
                scanf(" %d", &rec.account);
                gotoxy(31, 14);
                printf("[3] . Enter Your Phone Number   : ");
                scanf(" %[^\n]", rec.phone);
                gotoxy(31, 15);
                printf("[4] . Enter Your Address        : ");
                scanf(" %[^\n]", rec.address);
                gotoxy(31, 16);
                printf("[5] . Enter Your E-mail         : ");
                scanf(" %[^\n]", rec.email);
                gotoxy(31, 17);
                printf("[6] . Enter Your Citizenship No : ");
                scanf(" %[^\n]", rec.citiz);
                fwrite(&rec, sizeof(rec), 1, y);
            }
        }
        fclose(x);
        fclose(y);
    }
    if (chkacc(a) == 0)
    {
        system("CLS");
        gotoxy(52, 21);
        printf("Account Doesn't Exist. ");
        goto re;
    }
    remove("record.bin");
    rename("new.bin", "record.bin");
    gotoxy(45, 21);
    printf("CUSTOMER ACCOUNT UPDATE SUCCESSFULL");
    gotoxy(42, 24);
    printf("Press any key to return back to main menu . ");
    getch();
    menu();
}

void del()
{
    FILE *x, *y;
    int a, c;
re:
    gotoxy(48, 4);
    printf(" DELETE CUSTOMER ACCOUNT ");
    gotoxy(41, 9);
    printf("Enter Your Account Number To Delete : ");
    scanf("%d", &a);
    if (chkacc(a) == 1)
    {
        x = fopen("record.bin", "rb");
        y = fopen("new.bin", "wb");
        while (fread(&rec, sizeof(rec), 1, x))
        {
            if (rec.account != a)
                fwrite(&rec, sizeof(rec), 1, y);
        }
        fclose(x);
        fclose(y);
        x = fopen("record.bin", "wb");
        y = fopen("new.bin", "rb");
        while (fread(&rec, sizeof(rec), 1, y))
            fwrite(&rec, sizeof(rec), 1, x);
        fclose(x);
        fclose(y);
    }
    else if (chkacc(a) == 0)
    {
        system("CLS");
        gotoxy(51, 15);
        printf("Account Doesn't Exist");
        goto re;
    }
    gotoxy(44, 15);
    printf("CUSTOMER ACCOUNT DELETED SUCCESSFULLY");
    gotoxy(42, 18);
    printf("Press any key to return back to main menu. ");
    getch();
    menu();
}

void search()
{
    system("cls");
    search_acc();
}

void search_acc()
{
    FILE *f;
    int a, x;
re:
    gotoxy(48, 4);
    printf(" SEARCH CUSTOMER ACCOUNT ");
    gotoxy(43, 7);
    printf("Enter Your Account Number To Search : ");
    scanf("%d", &a);
    if (chkacc(a) == 1)
    {
        f = fopen("record.bin", "rb");
        while (fread(&rec, sizeof(rec), 1, f))
        {
            if (rec.account == a)
            {
                gotoxy(52, 21);
                printf("Account Number Matched. User is Active.");
                gotoxy(43, 11);
                printf("Detail Information of %s", strupr(rec.name));
                gotoxy(37, 13);
                printf("[1] . Account Number : %d", rec.account);
                gotoxy(37, 14);
                printf("[2] . Name           : %s", rec.name);
                gotoxy(37, 15);
                printf("[3] . Phone Number   : %s", rec.phone);
                gotoxy(37, 16);
                printf("[4] . Address        : %s", rec.address);
                gotoxy(37, 17);
                printf("[5] . E-mail         : %s", rec.email);
                gotoxy(37, 18);
                printf("[6] . Citizenship No : %s", rec.citiz);
                gotoxy(37, 19);
                printf("[7] . Current Balance: $%.2lf", rec.blnc);
                break;
            }
        }
        fclose(f);
    }
    if (chkacc(a) == 0)
    {
        system("CLS");
        gotoxy(52, 21);
        printf("Account Doesn't Exist. User is Inactive. ");
        goto re;
    }
    printf("\n");
    gotoxy(42, 24);
    printf("Press [ENTER] to return back to main menu. ");
    char z = getch();
    if (z == 13)
        menu();
    else
        search();
}

void transaction()
{
    system("CLS");
    gotoxy(48, 4);
    printf(" TRANSACTION MENU ");
    gotoxy(49, 9);
    printf("[1] . Balance Inquiry");
    gotoxy(49, 10);
    printf("[2] . Cash Deposit");
    gotoxy(49, 11);
    printf("[3] . Cash Withdrawal");
    if (m == 1)
    {
        gotoxy(49, 12);
        printf("[4] . Main Menu");
    }
    else
    {
        gotoxy(49, 12);
        printf("[4] . Exit");
    }
    gotoxy(45, 17);
    printf("Please Enter Your Choice [1-4] : ");
    int a;
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        system("cls");
        chkblnc();
        break;
    case 2:
        system("cls");
        deposit();
        break;
    case 3:
        system("cls");
        withdrawl();
        break;
    case 4:
        if (m == 1)
            menu();
        else
            menuexit();
        break;
    default:
        transaction();
    }
}

void chkblnc()
{
    FILE *f;
    int a;
    gotoxy(48, 4);
    printf(" BALANCE INQUIRY ");
    gotoxy(47, 12);
    printf("Enter Your Account Number : ");
    scanf("%d", &a);
    if (chkacc(a) == 1)
    {
        f = fopen("record.bin", "rb");
        while (fread(&rec, sizeof(rec), 1, f))
        {
            if (rec.account == a)
            {
                gotoxy(50, 15);
                printf("Your Balance is : $%.2lf", rec.blnc);
            }
        }
        fclose(f);
    }
    if (chkacc(a) == 0)
    {
        system("cls");
        gotoxy(52, 15);
        printf("Account Doesn't Exist.");
        chkblnc();
    }
    gotoxy(46, 21);
    printf("Press any key to return back to main menu. ");
    getch();
    transaction();
}

void deposit()
{
    int a;
    double b;
    FILE *x, *y;
    gotoxy(54, 4);
    printf(" CASH DEPOSIT ");
    gotoxy(47, 10);
    printf("Enter Your Account Number : ");
    scanf("%d", &a);
    if (chkacc(a) == 1)
    {
        x = fopen("record.bin", "rb");
        y = fopen("new.bin", "wb");
        while (fread(&rec, sizeof(rec), 1, x))
        {
            if (rec.account != a)
                fwrite(&rec, sizeof(rec), 1, y);
            else if (rec.account == a)
            {
                rec.name;
                rec.account;
                rec.phone;
                rec.address;
                rec.email;
                rec.citiz;
                gotoxy(45, 13);
                printf("Enter The Amount To Deposit : $ ");
                scanf("%lf", &b);
                rec.blnc += b;
                fwrite(&rec, sizeof(rec), 1, y);
            }
        }
        fclose(x);
        fclose(y);
        x = fopen("record.bin", "wb");
        y = fopen("new.bin", "rb");
        while (fread(&rec, sizeof(rec), 1, y))
            fwrite(&rec, sizeof(rec), 1, x);
        fclose(x);
        fclose(y);
    }
    if (chkacc(a) == 0)
    {
        system("CLS");
        gotoxy(52, 21);
        printf("Account Doesn't Exist. ");
        gotoxy(41, 22);
        deposit();
    }
    gotoxy(52, 21);
    printf("CASH DEPOSIT SUCCESSFULL");
    gotoxy(50, 24);
    printf("Press any key to return back...");
    getch();
    transaction();
}

void withdrawl()
{
    FILE *x, *y;
    int a;
    double b, z;
    gotoxy(54, 4);
    printf(" CASH WITHDRAWAL ");
    gotoxy(45, 10);
    printf("Enter Your Account Number : ");
    scanf("%d", &a);
    if (chkacc(a) == 1)
    {
        x = fopen("record.bin", "rb");
        y = fopen("new.bin", "wb");
        gotoxy(42, 13);
        printf("Enter The Amount To Withdraw : $ ");
        scanf("%lf", &b);
        while (fread(&rec, sizeof(rec), 1, x))
        {
            if (rec.account != a)
                fwrite(&rec, sizeof(rec), 1, y);
            else if (rec.account == a)
            {
                rec.name;
                rec.account;
                rec.phone;
                rec.address;
                rec.email;
                rec.citiz;
                z = rec.blnc;
                if (b <= rec.blnc)
                {
                    rec.blnc -= b;
                    gotoxy(44, 21);
                    printf("    CASH WITHDRAWAL SUCCESSFULL     ");
                }
                fwrite(&rec, sizeof(rec), 1, y);
            }
        }
        fclose(x);
        fclose(y);
        remove("record.bin");
        rename("new.bin", "record.bin");
        if (z < b)
        {
            system("CLS");
            gotoxy(48, 21);
            printf("Current Balance is $%.2lf", z);
            gotoxy(42, 24);
            printf("Entered amount exceeds current balance");
            withdrawl();
        }
    }
    if (chkacc(a) == 0)
    {
        system("CLS");
        gotoxy(50, 21);
        printf("Account Doesn't Exist.");
        gotoxy(39, 22);
        withdrawl();
    }
    gotoxy(42, 24);
    printf("     Press Any Key To Continue ....   ");
    getch();
    transaction();
}

void menuexit()
{
    system("cls");
    gotoxy(48, 10);
    printf("!!! THANK YOU !!!");
    gotoxy(50, 12);
    printf("USER :: %s", id);
    getch();
    gotoxy(0, 26);
    exit(0);
}

void about()
{
    gotoxy(48, 10);
    printf("!!!ABOUT US!!!");
    gotoxy(32, 12);
    printf("This project has been created by Rafay,Abdul rehamn,Khuzaima,Zain.");
    gotoxy(10, 13);
    printf("It is a Simple Bank Management System Project for my 1st Semester based on C programming language.");
    gotoxy(40, 22);
    printf("Press any key to return back to main menu. ");
    char z = getch();
    if (z == 13)
    {
        menu();
    }
}