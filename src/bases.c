/*
** bases.c for base in /home/nguye_0/rendu/CPE_2015_Allum1/src
** 
** Made by alexandre2 nguyen
** Login   <nguye_0@epitech.net>
** 
** Started on  Fri Feb 12 18:24:13 2016 alexandre2 nguyen
** Last update Sun Feb 21 19:42:25 2016 alexandre
*/

#include "../include/fonction.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int   i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}

void	printab(char **map)
{
  int   col;

  col = 0;
  while (map[col] != NULL)
    {
      my_putstr(map[col]);
      my_putchar('\n');
      col = col + 1;
    }
}

int	my_getnbr(char *str)
{
  int   signe;
  int   nb;
  int   i;

  i = 0;
  nb = 0;
  signe = 1;
  while (str[i] == '-' || str[i] == '+')
    {
      if (str[i] == '-')
        {
          signe = signe * (-1);
        }
      i = i + 1;
    }
  while (str[i] != '\0')
    {
      nb = nb * 10;
      nb = nb + (str[i] - 48);
      i = i + 1;
    }
  nb = nb * signe;
  return (nb);
}

void	my_put_nbr(int nb)
{
  if (nb / 10 > 0)
    {
      my_put_nbr(nb / 10);
    }
  my_putchar(nb % 10 + 48);
}
