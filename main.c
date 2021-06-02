#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


struct person_type
{
  char *first_name;
  char *last_name;
  char *father_name;
  char *birthday;
};

int
main ()
{

  char input_message[50];
  struct person_type pr;
  pr.first_name = "first name";
  pr.last_name = "last name";
  pr.father_name = "father name";
  pr.birthday = "1.01.2001";
  
  while (true)
    {
      scanf ("%s", input_message);
      if (!strcmp (input_message, "PID"))
	{
	  puts (pr.last_name);
	  puts (pr.first_name);
	  puts (pr.birthday);
	}
      else if (!strcmp (input_message, "BD"))
	{
	  puts (pr.father_name);
	  puts (pr.birthday);
	}
      else
	puts ("I dont undrestand");
    }

  return 0;
}