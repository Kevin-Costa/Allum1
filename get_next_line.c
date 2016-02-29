/*
** get_next_line.c for get_next_line in /home/costa_b/rendu/prog_elem/allum1
** 
** Made by Kevin Costa
** Login   <costa_b@epitech.net>
** 
** Started on  Wed Feb  5 14:33:29 2014 Kevin Costa
** Last update Mon Feb 10 16:28:24 2014 Kevin Costa
*/

#include	<stdlib.h>
#include	<unistd.h>
#include	<stdio.h>
#include	<fcntl.h>
#include	"my.h"

char		*get_next_line(const int fd)
{
  char		*str;
  static char	buffer[MEM_SIZE];
  int		a;
  int		b;
  int		c;

  a = 0;
  b = 0;
  str = malloc(MEM_SIZE * sizeof(char));
  c = read(fd, buffer, MEM_SIZE);
  if (a == c)
    {
      free(str);
      return (NULL);
    }
  while (a < c && buffer[a] != '\n')
    {
      str[b] = buffer[a];
      a++;
      b++;
    }
  if (buffer[a] == '\n' || buffer[a] == '\0')
    a++;
  str[b] = '\0';
  return (str);
}
