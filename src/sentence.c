/*
** sentence.c for sentence in /home/nguye_0/rendu/CPE_2015_Allum1/src
** 
** Made by alexandre2 nguyen
** Login   <nguye_0@epitech.net>
** 
** Started on  Mon Feb 15 19:14:03 2016 alexandre2 nguyen
** Last update Sun Feb 21 19:44:29 2016 alexandre
*/

#include "../include/fonction.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	computer_sentence(int line, int matches)
{
  my_putstr("AI removed ");
  my_put_nbr(matches);
  my_putstr(" match(es) from line ");
  my_put_nbr(line);
  my_putchar('\n');
}

void	sentence(int line, int matches)
{
  my_putstr("Player removed ");
  my_put_nbr(matches);
  my_putstr(" match(es) from line ");
  my_put_nbr(line);
  my_putchar('\n');
}

void	second_sentence_player()
{
  my_putchar ('\n');
  my_putstr("Your turn:\n");
}

void	second_sentence_computer()
{
  my_putchar('\n');
  my_putstr("AI's turn...\n");
}
