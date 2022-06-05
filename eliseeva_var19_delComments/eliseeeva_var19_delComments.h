#pragma once
#include <string>
#include<vector>
using namespace std;

/*!
* \Удаление многострочных комментариев в тексте программы на языке Си
* \param[in\out] text - текст программы на языке Си
* \throw - (Выбрасывает исключения в случае ошибок в исходном тексте)
*/
void delComments(vector<string> &text);

/*!
* \Нахождение начала многострочного комментария
* \param[in] text - текст программы на языке Си
* \param[in] numberString - количество строк в тексте
* \param[in\out] indexRowBegin - индекс строки начала комментария
* \param[in\out] beginComment - указатель на начало комментария
*/
void findBeginComment(char** beginComment, vector<string> &text, int numberString, int* indexRowBegin);

/*!
* \Нахождение начала многострочного комментария
* \param[in] text - текст программы на языке Си
* \param[in] numberString - количество строк в тексте
* \param[in\out] indexRowEnd - индекс строки начала комментария
* \param[in\out] endComment - указатель на начало комментария
*/
void findEndComment(char** endComment, vector<string> &text, int numberString, int* indexRowEnd);

/*!
* \Нахождение начала многострочного комментария
* \param[in] text - текст программы на языке Си
* \param[in] numberString - количество строк в тексте
*/
void saveResult(vector<string> &text, int numberString);


