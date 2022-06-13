/* 
 * @copyright (c) 2008, Hedspi, Hanoi University of Technology
 * @author Huu-Duc Nguyen
 * @version 1.0
 */

#include <stdio.h>
#include "reader.h"

FILE* inputStream;
int lineNo, colNo;
int currentChar;

/**
 * @brief Đọc vào một ký tự từ inputStream
 * @return Mã ASCII của ký tự
 */
int readChar(void)
{
	currentChar = getc(inputStream);
	colNo++;
	if (currentChar == '\n')
	{
		lineNo++;
		colNo = 0;
	}
	return currentChar;
}

/**
 * @brief Mở file
 * @param fileName tên file
 * @return IO_SUCCESS nếu thành công, ngược lại IO_ERROR
 */
int openInputStream(char* fileName)
{
	inputStream = fopen(fileName, "rt");
	if (inputStream == NULL)
		return IO_ERROR;
	lineNo = 1;
	colNo = 0;
	readChar();
	return IO_SUCCESS;
}

/**
 * @brief Đóng file
 */
void closeInputStream()
{
	fclose(inputStream);
}

