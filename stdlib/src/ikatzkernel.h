#ifndef __IKATZKERNEL_H
#define __IKATZKERNEL_H

#include <stddef.h>
#include <stdbool.h>

struct command_argument
{
    char argument[512];
    struct command_argument* next;
};

struct process_arguments
{
    int argc;
    char** argv;
};

void print(const char* filename);
int ikatzkernel_getkey();
void ikatzkernel_putchar(char c);
int ikatzkernel_getkeyblock();
void ikatzkernel_terminal_readline(char* out, int max, bool output_while_typing);
int ikatzkernel_system(struct command_argument* arguments);
void ikatzkernel_process_get_arguments(struct process_arguments* arguments);
int ikatzkernel_system_run(const char* command);
void ikatzkernel_exit();
void ikatzkernel_process_load_start(const char* filename);
void* ikatzkernel_malloc(size_t size);
void ikatzkernel_free(void* ptr);
struct command_argument* ikatzkernel_parse_command(const char* command, int max);

#endif
