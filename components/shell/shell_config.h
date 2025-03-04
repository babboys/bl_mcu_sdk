#ifndef __SHELL_CONFIG_H__
#define __SHELL_CONFIG_H__

#ifndef SHELL_DEFAULT_NAME
#define SHELL_DEFAULT_NAME "bouffalolab "
#endif

#ifndef SHELL_CONSOLEBUF_SIZE
#define SHELL_CONSOLEBUF_SIZE 128
#endif

#ifndef SHELL_PROMPT_SIZE
#define SHELL_PROMPT_SIZE 20
#endif

#ifndef SHELL_HISTORY_LINES
#define SHELL_HISTORY_LINES 5
#endif

#ifndef SHELL_CMD_SIZE
#define SHELL_CMD_SIZE 120
#endif

#ifndef SHELL_ARG_NUM
#define SHELL_ARG_NUM 16
#endif

//#define SHELL_USING_FS
#define SHELL_USING_COLOR

#ifndef SHELL_THREAD_STACK_SIZE
#define SHELL_THREAD_STACK_SIZE 1024
#endif

#ifndef SHELL_THREAD_PRIO
#define SHELL_THREAD_PRIO 5
#endif

#endif
