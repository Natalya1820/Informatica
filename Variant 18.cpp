#include <string>
#include <iostream>
#include <fstream> // работа с файлами на компе

using namespace std;

// Напишите функцию, которая по переданному в него имени файла, 
// открывает его и выводит содержимое на экран, 
// в случае отсутствия файла выводит сообщение об ошибке.

int main() {
    cout << "enter file name " << "\n" << endl;
    string path;
    cin >> path;

    ifstream fin; // ifstream чтение, а ofstream запись
    fin.open(path); // файл открывается в директории проекта

    if (!fin.is_open()) // проверка удалось ли открыть
    {
        cout << "file not open" << endl;
    }
    else
    {
        cout << "ok, successful" << "\n" << endl;
        cout << "file name: " << path << "\n" << endl;
        char ch;
        while (fin.get(ch)) //считывает символ из файла и записывает в переменную (по 1 симоволу)
            // метод while потому что get даёт либо true, либо false.

        {
            cout << ch;
        }

    }
    fin.close(); //освободить ресурсы

    return 0;


}
