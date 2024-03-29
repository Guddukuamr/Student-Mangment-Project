#include <iostream>
#include <conio.h>
using namespace std;

int i = 0;
struct student
{
    int Id;
    float marks, per;
    string name, grade;
} s[20];

void insert()
{
    system("cls");
    cout << "\n\n\t *** INSERT RECORD ***";
    cout << "\n\n Enter Student Id: ";
    cin >> s[i].Id;
    cout << "\n\n Enter Student Name: ";
    cin >> s[i].name;
    cout << "\n\n Enter Student Marks: ";
    cin >> s[i].marks;
    s[i].per = s[i].marks / 100 * 100;
    if (s[i].per >= 90)
    {
        s[i].grade = "A+";
    }
    else if (s[i].per >= 75)
    {
        s[i].grade = "A";
    }
    else if (s[i].per >= 50)
    {
        s[i].grade = "B";
    }
    else if (s[i].per >= 40)
    {
        s[i].grade = "C";
    }
    else
    {
        s[i].grade = "F";
    }
    i++;
    cout << "\n\n *** Insert Record Successfully***";
}

void search()
{
    system("cls");
    cout << "\n\n\t ***SEARCH RECORD***";
    if (i == 0)
    {
        cout << "\n\n No Record Found";
    }
    else
    {
        int Id, Found = 0;
        cout << "\n\n Enter Student Id: ";
        cin >> Id;
        for (int a = 0; a < i; a++)
        {
            if (Id == s[a].Id)
            {
                cout << "\n\n Student Name: " << s[a].name;
                cout << "\n\n Student Marks: " << s[a].marks;
                cout << "\n\n Student Percentage: " << s[a].per << "%";
                cout << "\n\n Student Grade: " << s[a].grade;
                Found++;
            }
        }
        if (Found == 0)
        {
            cout << "\n\n No Record Found";
        }
    }
}

void update()
{

    system("cls");
    cout << "\n\n\t ***UPDATE RECORD***";
    if (i == 0)
    {
        cout << "\n\n No Record Found";
    }
    else
    {
        int Id, Found = 0;
        cout << "\n\n Enter Student Id: ";
        cin >> Id;
        for (int a = 0; a < i; a++)
        {
            if (Id == s[a].Id)
            {
                cout << "\n\n Enter Student Name: ";
                cin >> s[a].name;
                cout << "\n\n Enter Student Marks: ";
                cin >> s[a].marks;
                s[a].per = s[a].marks / 100 * 100;
                if (s[a].per >= 90)
                {
                    s[a].grade = "A+";
                }
                else if (s[a].per >= 75)
                {
                    s[a].grade = "A";
                }
                else if (s[a].per >= 50)
                {
                    s[a].grade = "B";
                }
                else if (s[a].per >= 40)
                {
                    s[a].grade = "C";
                }
                else
                {
                    s[a].grade = "F";
                }

                cout << "---Update Record Successfully---";
                Found++;
            }
        }
        if (Found == 0)
        {
            cout << "\n\n No Record Found";
        }
    }
}

void del()
{
    system("cls");
    cout << "\n\n\t ***DELETE RECORD***";
    if (i == 0)
    {
        cout << "\n\n No Record Found";
    }
    else
    {
        int Id, Found = 0;
        cout << "\n\n Enter Student Id: ";
        cin >> Id;
        for (int a = 0; a < i; a++)
        {
            if (Id == s[a].Id)
            {
                for (int m = a; m < i - 1; m++)
                {
                    s[m].Id = s[m + 1].Id;
                    s[m].name = s[m + 1].name;
                    s[m].marks = s[m + 1].marks;
                    s[m].per = s[m + 1].per;
                    s[m].grade = s[m + 1].grade;
                }
                cout << "\n\n ---Delete Record Successfully---";
                Found++;
                i--;
                break;
            }
        }
        if (Found == 0)
        {
            cout << "\n\n No Record Found";
        }
    }
}

void show()
{
    system("cls");
    cout << "\n\n\t ***SHOW ALL RECORD***";
    if (i == 0)
    {
        cout << "\n\n No Record Found";
    }
    else
    {
        for (int a = 0; a < i; a++)
        {
            cout << "\n\n Student Id: " << s[a].Id;
            cout << "\n\n Student Name: " << s[a].name;
            cout << "\n\n Student Marks: " << s[a].marks;
            cout << "\n\n Student Percentage: " << s[a].per << "%";
            cout << "\n\n Student Grade: " << s[a].grade;
            cout << "\n\n *****************************************";
        }
    }
}

int main()
{
p:
    system("cls");
    int choice;
    cout << "\t\t***  STUDENT MANAGEMENT SYSTEM ***";
    cout << "\n\n 1. INSERT RECORD";
    cout << "\n\n 2. SEARCH RECORD";
    cout << "\n\n 3. UPDATE RECORD";
    cout << "\n\n 4. DELETE RECORD";
    cout << "\n\n 5. SHOW RECORD";
    cout << "\n\n 6. EXIT";
    cout << "\n\n Enter your choice: ";

    cin >> choice;
    switch (choice)
    {
    case 1:
        insert();
        break;

    case 2:
        search();
        break;

    case 3:
        update();
        break;

    case 4:
        del();
        break;

    case 5:
        show();
        break;

    case 6:
        exit(0);
        break;
    default:
        cout << "\n\n *** Invaild Choice ***";
    }
    getch();
    goto p;

    return 0;
}