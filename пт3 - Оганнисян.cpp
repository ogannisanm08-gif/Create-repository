#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

void igra()
{
    srand(time(0));

    int secret_num = rand() % 101;
    int entered = -1;

    cout << "\n=== Игра Угадай число ===\n";
    cout << "Я загадал число от 0 до 100\n";

    while (entered != secret_num)
    {
        cout << "Введите число: ";
        cin >> entered;

        if (entered > secret_num)
        {
            cout << "Число больше, бери меньше\n";
        }
        else if (entered < secret_num)
        {
            cout << "Число мало, бери больше\n";
        }
        else
        {
            cout << "Поздравляю, угадал!\n";
        }
    }
}

void tablica()
{
    int tabl[10][10];

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            tabl[i][j] = (i + 1) * (j + 1);
        }
    }

    cout << "\n=== Таблица умножения ===\n";

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << tabl[i][j] << "\t";
        }
        cout << "\n";
    }
}

void deliteli()
{
    int chislo;

    cout << "\n=== Делители числа ===\n";
    cout << "Введите число: ";
    cin >> chislo;

    cout << "Делители: ";
    for (int i = 1; i <= chislo; i++)
    {
        if (chislo % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << "\n";
}
int main()
{

    setlocale(LC_ALL, "Russian");

    int choice = -1;

    while (true)
    {
        cout << "\n===== МЕНЮ =====\n";
        cout << "1 - игра Угадай число\n";
        cout << "2 - Таблица умножения\n";
        cout << "3 - Нахождение делителей\n";
        cout << "0 - Выход\n";
        cout << "Введите действие: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            igra();
            break;
        case 2:
            tablica();
            break;
        case 3:
            deliteli();
            break;
        case 0:
            return 0;
        default:
            cout << "Нет такого пункта\n";
            break;
        }
    }

    return 0;
}