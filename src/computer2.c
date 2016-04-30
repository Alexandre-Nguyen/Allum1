/*
** computer2.c for computer in /home/alexandre/rendu/CPE_2015_Allum1/src
** 
** Made by alexandre
** Login   <nguye_0@epitech.net>
** 
** Started on  Sat Feb 20 16:01:57 2016 alexandre
** Last update Sun Feb 21 19:42:40 2016 alexandre
*/

#include "../include/fonction.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <time.h>

char	**fct_first_line(int a, int first_line, char **map)
{
  if ((first_line % 2) == 0)
    {
      computer_sentence(a, first_line);
      map = first_player(a, first_line, map);
    }
  else
    {
      if (first_line == 1)
	{
	  computer_sentence(a, 1);
	  map = first_player(a, 1, map);
	}
      else
	{
	  computer_sentence(a, (first_line - 1));
	  map = first_player(a, (first_line - 1), map);
	}
    }
  return (map);
}

char	**fct_second_line(int a, int first_line, char **map)
{
  if (first_line > 1)
    {
      computer_sentence(a, (first_line - 1));
      map = first_player(a, (first_line - 1), map);
    }
  else
    {
      computer_sentence(a, first_line);
      map = first_player(a, first_line, map);
    }
  return (map);
}
