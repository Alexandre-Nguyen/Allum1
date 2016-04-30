/*
** parse.c for parse in /home/nguye_0/rendu/CPE_2015_Allum1/src
** 
** Made by alexandre2 nguyen
** Login   <nguye_0@epitech.net>
** 
** Started on  Mon Feb 15 19:31:25 2016 alexandre2 nguyen
** Last update Thu Feb 25 13:44:05 2016 alexandre
*/

#include "../include/fonction.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	parse_matches(int line, int matches, int error, char **map)
{
  if (error == 4)
    return (matches);
  else if (error == 3)
    {
      my_putstr("Matches: ");
      matches = first_matches(map, line);
      return (matches);
    }
  return (matches);
}

int	parse_line(int line, int error, char **map)
{
  if (error == 4)
    {
      my_putstr("Matches: ");
      return (line);
    }
  else if (error == 3)
    {
      line = first_line(map);
      return (line);
    }
  return (line);
}
