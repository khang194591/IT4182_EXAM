/* 
 * @copyright (c) 2008, Hedspi, Hanoi University of Technology
 * @author Huu-Duc Nguyen
 * @version 1.0
 */

#ifndef __CHARCODE_H__
#define __CHARCODE_H__

// Các loại ký tự
typedef enum
{
	// Ký tự ' '
	CHAR_SPACE,
	// Ký tự 'a-zA-Z'
	CHAR_LETTER,
	// Ký tự '0-9'
	CHAR_DIGIT,
	// Ký tự '+'
	CHAR_PLUS,
	// Ký tự '-'
	CHAR_MINUS,
	// Ký tự '*'
	CHAR_TIMES,
	// Ký tự '/'
	CHAR_SLASH,
	// Ký tự '<'
	CHAR_LT,
	// Ký tự '>'
	CHAR_GT,
	// Ký tự '!'
	CHAR_EXCLAIMATION,
	// Ký tự '='
	CHAR_EQ,
	// Ký tự ','
	CHAR_COMMA,
	// Ký tự '.'
	CHAR_PERIOD,
	// Ký tự ':'
	CHAR_COLON,
	// Ký tự ';'
	CHAR_SEMICOLON,
	// Ký tự "\'"
	CHAR_SINGLEQUOTE,
	// Ký tự '('
	CHAR_LPAR,
	// Ký tự ')'
	CHAR_RPAR,
	// Ký tự ngoại lệ
	CHAR_UNKNOWN
} CharCode;

#endif
