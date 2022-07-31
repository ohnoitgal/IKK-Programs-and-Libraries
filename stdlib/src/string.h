#ifndef __IKATZKERNEL_STRING_H
#define __IKATZKERNEL_STRING_H

#include <stdbool.h>

char toLower(char s1);
int strlen(const char* ptr);
int strnlen(const char* ptr, int max);
int strnlen_terminator(const char* str, int max, char terminator);
int istrncmp(const char* s1, const char* s2, int n);
int strncmp(const char* str1, const char* str2, int n);
char* strcpy(char* dest, const char* src);
char* strncpy(char* dest, const char* src, int count);
bool isDigit(char c);
int toNumericDigit(char c);
char* strtok(char* str, const char* delimiters);
void puts(const char* string);

#endif
