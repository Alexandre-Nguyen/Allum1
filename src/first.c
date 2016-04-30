/*
** first.c for first in /home/nguye_0/rendu/CPE_2015_Allum1/src
** 
** Made by alexandre2 nguyen
** Login   <nguye_0@epitech.net>
** 
** Started on  Mon Feb 15 13:06:51 2016 alexandre2 nguyen
** Last update Fri Feb 26 19:28:30 2016 alexandre
*/

#include "../include/fonction.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

char	*get_next_line(int fd)
{
  int	i;
  int	rd;
  char	*new;
  char	buffer;

  buffer = 't';
  i = 0;
  new = malloc(sizeof(char) * 100);
  while (buffer != '\n' && buffer != '\0')
    {
      rd = read(fd, &buffer, 1);
      if (rd == 0)
	return (NULL);
      new[i] = buffer;
      i = i + 1;
    }
  new[i - 1] = '\0';
  return (new);
}

int	verif_buffer(char *buffer)
{
  int   i;

  i = 0;
  while (buffer[i] != '\0')
    {
      if (buffer[i] > 57 && buffer[i] < 127)
	return (2);
      i = i + 1;
    }
  return (3);
}

int	first_line(char **map)
{
  char	*buff;
  int   line;
  int   error;
  int	test;

  my_putstr("Line: ");
  buff = get_next_line(0);
  if (buff == NULL)
    return (-1);
  test = verif_buffer(buff);
  if (test == 3)
    {
      line = my_getnbr(buff);
      error = error_line(line, map);
    }
  else
    {
      my_putstr("Error: invalid input (positive number expected)\n");
      error = 3;
    }
  line = parse_line(line, error, map);
  return (line);
}

int	first_matches(char **map, int line)
{
  char	*buffer;
  int   matches;
  int   error;
  int   test;

  buffer = get_next_line(0);
  if (buffer == NULL)
    return (-1);
  test = verif_buffer(buffer);
  if (test == 3)
    {
      matches = my_getnbr(buffer);
      error = error_matches(matches, line, map);
    }
  else
    {
      my_putstr("Error: invalid input (positive number expected)\n");
      error = 3;
    }
  matches = parse_matches(line, matches, error, map);
  return (matches);
}
