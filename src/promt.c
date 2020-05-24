#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "headers/prompt.h"
#include "headers/command.h"

void afficher_prompt()
{

    char * usr = getenv("USER");
    char host[1024];
    host[1023] = '\0';
    gethostname(host, 1023);
    char * pwd = getenv("PWD");

    printf("\033[0;34m%s@%s:\033[0;33m%s\033[0;31m$\033[0m ", usr, host, pwd);
    fflush(stdout);
}
