/*
** reduc.c for reduc.c in /home/costa_b/rendu/prog_elem/Allum1
** 
** Made by Kevin Costa
** Login   <costa_b@epitech.net>
** 
** Started on  Thu Feb 13 16:26:45 2014 Kevin Costa
** Last update Fri Feb 14 19:45:27 2014 Kevin Costa
*/

#include	<stdlib.h>
#include	<unistd.h>
#include	<stdio.h>
#include	<sys/types.h>
#include	<sys/wait.h>
#include	"my.h"

void		reduc4(t_game *game)
{
  my_printf1("Player", game->count, ": How many ?\n");
  game->buffer = get_next_line(0);
  game->nb = my_getnbr(game->buffer);
  game->over = game->buffer;
}

void		reduc5(t_game *game)
{
  my_putstr("1 or 2 player ?\n");
  game->buffer = get_next_line(0);
  game->player = my_getnbr(game->buffer);
  free(game->buffer);
}

void		reduc6(t_game *game)
{
  my_putstr("Which match ? (1 = |, 2 = $, 3 = !)\n");
  game->buffer = get_next_line(0);
  game->match = my_getnbr(game->buffer);
  free(game->buffer);
}

void		reduc7(t_game *game)
{
  my_putstr("Which match ? (1 = |, 2 = $, 3 = !)\n");
  game->buffer = get_next_line(0);
  game->match2 = my_getnbr(game->buffer);
  free(game->buffer);
}

void		reduc8(t_game *game)
{
  my_putstr("1 or 2 player ?\n");
  game->buffer = get_next_line(0);
  game->player2 = my_getnbr(game->buffer);
  free(game->buffer);
}
