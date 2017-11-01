/*
** parse_args.c for fileTransfer in /home/guilhem/C/fileTransfer/server/src/init
**
** Made by Guilhem
** Login   <guilhem@epitech.net>
**
** Started on  Wed Nov 01 18:11:12 2017 Guilhem
** Last update Wed Nov 01 18:51:17 2017 Guilhem
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#include "config.h"
#include "reseau.h"

static void     help(FILE *fp, int ret)
{
        fprintf(fp, "USAGE:\n");
        fprintf(fp, "\t-p\tport used (default: 1234)\n");
        exit(ret);
}

void            parse_args(server_config_t *config, int ac, char **av)
{
        int     opt;

        config->reseau.port = DEFAULT_PORT;
        while ((opt = getopt(ac, av, "p:")) != STD_F) {
                switch(opt) {
                        case 'p':
                                config->reseau.port = atoi(optarg);
                                break;
                        case '?':
                                help(stderr, EXIT_F);
                }
        }
}
