#pragma once
#include <string>
#include<vector>
using namespace std;

/*!
* \�������� ������������� ������������ � ������ ��������� �� ����� ��
* \param[in\out] text - ����� ��������� �� ����� ��
* \throw - (����������� ���������� � ������ ������ � �������� ������)
*/
void delComments(vector<string> &text);

/*!
* \���������� ������ �������������� �����������
* \param[in] text - ����� ��������� �� ����� ��
* \param[in] numberString - ���������� ����� � ������
* \param[in\out] indexRowBegin - ������ ������ ������ �����������
* \param[in\out] beginComment - ��������� �� ������ �����������
*/
void findBeginComment(char** beginComment, vector<string> &text, int numberString, int* indexRowBegin);

/*!
* \���������� ������ �������������� �����������
* \param[in] text - ����� ��������� �� ����� ��
* \param[in] numberString - ���������� ����� � ������
* \param[in\out] indexRowEnd - ������ ������ ������ �����������
* \param[in\out] endComment - ��������� �� ������ �����������
*/
void findEndComment(char** endComment, vector<string> &text, int numberString, int* indexRowEnd);

/*!
* \���������� ������ �������������� �����������
* \param[in] text - ����� ��������� �� ����� ��
* \param[in] numberString - ���������� ����� � ������
*/
void saveResult(vector<string> &text, int numberString);


