/*
** my_check.c for my_check in /home/costa_b/rendu/prog_elem/allum1
** 
** Made by Kevin Costa
** Login   <costa_b@epitech.net>
** 
** Started on  Wed Feb  5 16:00:59 2014 Kevin Costa
** Last update Fri Feb 14 20:07:54 2014 Kevin Costa
*/

#include	<unistd.h>
#include	<stdlib.h>
#include	"my.h"

int		check_line(t_game *game, t_allum *allum)
{
  if (game->line == 69)
    {
      my_exit(game, allum);
      return (-1);
    }
  if (game->line > 4 || game->line < 1)
    return (my_puterror("You can only put a number between 1 and 4"));
  else  if (game->line == 1 && allum->l1 <= 0)
    return (my_puterror("Line 1 is empty, Choose another line!"));
  else if (game->line == 2 && allum->l2 <= 0)
    return (my_puterror("Line 2 is empty, Choose another line!"));
  else if (game->line == 3 && allum->l3 <= 0)
    return (my_puterror("Line 3 is empty, Choose another line!"));
  else if (game->line == 4 && allum->l4 <= 0)
    return (my_puterror("Line 4 is empty, Choose another line!"));
  return (0);
}

int		check_player(t_game *game, t_allum *allum)
{
  if (game->player == 69)
    {
      my_exit(game, allum);
      return (-1);
    }
  else if (game->player == 42)
    {
      system("clear");
      my_putstr("Congratulation, you have found an EASTER EGGS\n");
      my_putstr("Loading");
      sleep(1);
      my_putchar('.');
      sleep(1);
      my_putchar('.');
      sleep(1);
      my_putstr(".\n");
      sleep(1);
      system("clear");
    }
  else if (game->player > 2 || game->player < 1)
    return (my_puterror("You can only choose 1 or 2 player."));
  return (0);
}

int		check_overflow(t_game *game, t_allum *allum)
{
  if (game->over == NULL)
    return (my_puterror("Your number isn't correct, try again!"));
  else if (game->nb == 69)
    {
      my_exit(game, allum);
      return (-1);
    }
  else if (overflow(game->over, "2147483647") == -1)
    return (my_puterror("Your number isn't correct, try again!"));
  else if (game->line == 1 && game->nb != 1)
     return (my_puterror("You can only put 1!"));
  else if (game->line == 2 && (game->nb > 3 || game->nb < 1))
    return (my_puterror("You can only put a number between 1 and 3"));
  else if (game->line == 3 && (game->nb > 5 || game->nb < 1))
    return (my_puterror("You can only put a number between 1 and 5"));
  else if (game->line == 4 && (game->nb > 7 || game->nb < 1))
    return (my_puterror("You can only put a number between 1 and 7"));
  else if ((game->player2 == 1 && (game->nb > 3 || game->nb < 1)) ||
	   (game->player2 == 2 && (game->nb > 3 || game->nb < 1)))
    return (my_puterror("You can only put a number between 1 and 3"));
  return (0);
}

int		check_player2(t_game *game, t_allum *allum)
{
  if (game->player2 == 69)
    {
      my_exit(game, allum);
      return (-1);
    }
  if (game->player2 > 2 || game->player2 < 1)
    return (my_puterror("You can only choose 1 or 2 player."));
  return (0);
}

int		show_base()
{
  system("clear");
  draw_allum();
  my_putstr("line1: \033[31m1\033[00m    |\n");
  my_putstr("line2: \033[31m3\033[00m   |||\n");
  my_putstr("line3: \033[31m5\033[00m  |||||\n");
  my_putstr("line4: \033[31m7\033[00m |||||||\n\n");
  return (0);
}
