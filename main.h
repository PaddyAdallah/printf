#ifndef _MAIN_H
#define _MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int _printf(const char *format, ...);
int _position(const char *s, int n);
int _strlen(char *s);
char *_strcat(char *dest, char *src, int n);
int _abs(int n);
int _numlen(int n);
void *rev_string(char *s);
