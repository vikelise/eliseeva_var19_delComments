// eliseeva_var19_delComments.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <fstream>
#include<vector>
using namespace std;

int main(const int argc, char** argv)
{
    setlocale(LC_ALL, "rus");

    //Выдать ошибку, если входной файл не указанив аргументах командной строки
    if (argc == 1)
    {
        cout << "Входной файл не указан." << endl;
        return 0;
    }

    //Выдать ошибку, если входной файл невозможно открыть 
    string path = argv[1];//путь ко входному файлу 

    fstream fin;//объект типа ifstream (содержание входного файла)
    fin.open(path);

    if (!fin.is_open())
    {
        cout << "Входной файл" << path << "Невозможно открыть." << endl;
        return 0;
    }

    string line;
    vector<string> text;

    while (!fin.eof())
    {
        getline(fin, line);
        text.push_back(line);
    }
    fin.close();
    int numberString = text.size();
}

void delComments(vector<string>& text)
{

}

void findBeginComment(char** beginComment, vector<string>& text, int numberString, int* indexRowBegin)
{

}

void findEndComment(char** endComment, vector<string>& text, int numberString, int* indexRowEnd)
{

}

void saveResult(vector<string>& text, int numberString)
{

}






// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
