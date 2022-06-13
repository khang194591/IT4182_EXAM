/* 
 * @copyright (c) 2008, Hedspi, Hanoi University of Technology
 * @author Huu-Duc Nguyen
 * @version 1.0
 */

#ifndef __TOKEN_H__
#define __TOKEN_H__

#define MAX_IDENT_LEN 15
#define KEYWORDS_COUNT 20

// Các kiểu token
typedef enum
{
	// Token none
	TK_NONE,
	// Token định danh
	TK_IDENT,
	// Token số
	TK_NUMBER,
	// Token ký tự
	TK_CHAR,
	// Token hết file
	TK_EOF,

	// keyword PROGRAM
	KW_PROGRAM,
	// keyword CONST
	KW_CONST,
	// keyword TYPE
	KW_TYPE,
	// keyword VAR
	KW_VAR,
	// keyword INTEGER
	KW_INTEGER,
	// keyword CHAR
	KW_CHAR,
	KW_ARRAY,
	KW_OF,
	KW_FUNCTION,
	KW_PROCEDURE,
	KW_BEGIN,
	KW_END,
	KW_CALL,
	KW_IF,
	KW_THEN,
	KW_ELSE,
	KW_WHILE,
	KW_DO,
	KW_FOR,
	KW_TO,

	// Ký hiệu ';'
	SB_SEMICOLON,
	// Ký hiệu ':'
	SB_COLON,
	// Ký hiệu '.'
	SB_PERIOD,
	// Ký hiệu ','
	SB_COMMA,
	// Ký hiệu ':='
	SB_ASSIGN,
	// Ký hiệu '='
	SB_EQ,
	// Ký hiệu '!='
	SB_NEQ,
	// Ký hiệu '<'
	SB_LT,
	// Ký hiệu'<='
	SB_LE,
	// Ký hiệu '>'
	SB_GT,
	// Ký hiệu '>='
	SB_GE,
	// Ký hiệu '+'
	SB_PLUS,
	// Ký hiệu '-'
	SB_MINUS,
	// Ký hiệu '*'
	SB_TIMES,
	// Ký hiệu '/'
	SB_SLASH,
	// Ký hiệu '('
	SB_LPAR,
	// Ký hiệu ')'
	SB_RPAR,
	// Ký hiệu '(.'
	SB_LSEL,
	// Ký hiệu '.)'
	SB_RSEL
} TokenType;

// Token
typedef struct
{
	char string[MAX_IDENT_LEN + 1];
	int lineNo, colNo;
	TokenType tokenType;
	int value;
} Token;

TokenType checkKeyword(char* string);

Token* makeToken(TokenType tokenType, int lineNo, int colNo);

char* tokenToString(TokenType tokenType);


#endif
