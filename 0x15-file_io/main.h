#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <elf.h>
#include <stdio.h>
#define BUFFER_SIZE 1024


int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
char *createBuffer(char *name);
void closeFile(int file);
int main(int argc, char *argv[]);
void displayError(const char *info);
void displayElfHeader(const Elf64_Ehdr *elfHeader);
int main(int argc, char **argv);

#endif 
