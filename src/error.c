/*
** error.c for error in /home/nguye_0/rendu/CPE_2015_Allum1/src
** 
** Made by alexandre2 nguyen
** Login   <nguye_0@epitech.net>
** 
** Started on  Mon Feb 15 12:52:16 2016 alexandre2 nguyen
** Last update Sun Feb 21 20:57:48 2016 alexandre
*/

#include "../include/fonction.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	error_line(int line, char **map)
{
  int	allum;

  if (line > 4 || line == 0)
    {
      my_putstr("Error this line is out of range\n");
      return (3);
    }
  else if (line < 0)
    {
      my_putstr("Error: invalid input (positive number expected)\n");
      return (3);
    }
  allum = allum_nb(map, line);
  if (allum == 0)
    {
      my_putstr("Error this line is empty\n");
      return (3);
    }
  return (4);
}

int	error_matches(int matches, int line, char **map)
{
  int   allum;

  allum = allum_nb(map, line);
  if (matches > allum)
    {
      my_putstr("Error not enought match(es) on this line\n");
      return (3);
    }
  else if (matches == 0)
    {
      my_putstr("Error: you have to remove at least one match\n");
      return (3);
    }
  else if (matches < 0)
    {
      my_putstr("Error: invalid input (positive number expected)\n");
      return (3);
    }
  return (4);
}

int	second_verif_allum(char **map, int choise)
{
  printab(map);
  if (choise == 0)
    my_putstr("I lost.. snif.. but I'll get you next time!!\n");
  else if (choise == 1)
    my_putstr("You lost, too bad..\n");
  return (2);
}

int	verif_allum(char **map, int choise)
{
  int   col;
  int   i;
  int   allum;

  col = 0;
  i = 0;
  allum = 0;
  while (map[col] != NULL)
    {
      while (map[col][i] != '\0')
        {
          if (map[col][i] == '|')
            allum = allum + 1;
          i = i + 1;
        }
      i = 0;
      col = col + 1;
    }
  if (allum > 0)
    return (1);
  else
    second_verif_allum(map, choise);
  return (0);
}
