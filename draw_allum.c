/*
** draw_allum.c for draw_allum.c in /home/costa_b/rendu/prog_elem/allum1
** 
** Made by Kevin Costa
** Login   <costa_b@epitech.net>
** 
** Started on  Mon Feb 10 12:04:31 2014 Kevin Costa
** Last update Fri Feb 14 18:29:56 2014 Kevin Costa
*/

#include	<stdlib.h>
#include	"my.h"

void		draw_allum()
{
  my_putstr("\033[5m\033[34m");
  my_printf5("  ___  _ _                 __ \033[31m");
  my_printf5(" / _ \\| | |               /  |\033[32m");
  my_printf5("/ /_\\ \\ | |_   _ _ __ ___ `| |\033[33m");
  my_printf5("|  _  | | | | | | '_ ` _ \\ | |\033[35m");
  my_printf5("| | | | | | |_| | | | | | || |\033[36m");
  my_printf5("\\_| |_/_|_|\\___/|_| |_| |_\\___/\033[37m");
  my_putstr("\n\033[0m\n");
  my_putstr("write 69 to exit\n\n");
}

void		draw_boyard()
{
  my_putstr("\033[5m\033[34m");
  my_printf4(" ___        _       ___                       _\033[31m");
  my_printf4("| __|__ _ _| |_ ___| _ ) ___ _  _ __ _ _ _ __| |\033[32m");
  my_printf4("| _/ _ \\ '_|  _|___| _ \\/ _ \\ || / _` | '_/ _` |\033[33m");
  my_printf4("|_|\\___/_|  \\__|   |___/\\___/\\_, \\__,_|_| \\__,_|\033[36m");
  my_printf4("                             |__/               ");
  my_putstr("\n\033[0m\n");
  my_putstr("write 69 to exit\n\n");
}

void		reduc(t_game *game, t_allum *allumette)
{
  allum(game, allumette);
  show_allum(allumette, game);
}

void		reduc2(t_game *game)
{
  my_printf1("Player", game->count, ": Which line ?\n");
  game->buffer = get_next_line(0);
  game->line = my_getnbr(game->buffer);
  free(game->buffer);

}

void		reduc3(t_game *game)
{
  my_putstr("1 or 2 player ?\n");
  game->buffer = get_next_line(0);
  game->player2 = my_getnbr(game->buffer);
}
