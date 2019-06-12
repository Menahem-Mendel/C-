#include <iostream>

#include "lab10.hpp"

using namespace std;

void fill_array(char *line[STRINGSIZE])
{
	int i_index;
	int j_index;

	j_index = i_index = 0;

	for (i_index = 0; i_index < STRINGSIZE; i_index++)
	{
		for (j_index = 0; j_index < WORDSIZE; j_index++)
		{
			line[i_index][j_index] = '\0';
		}
	}

	j_index = i_index = 0;

	for (i_index = 0; i_index < STRINGSIZE && !cin.eof(); i_index++)
	{
		for (j_index = 0; j_index < WORDSIZE && !cin.eof(); j_index++)
		{
			cin.get(line[i_index][j_index]);

			if (line[i_index][j_index] == ' ')
			{
				break;
			}
			else if (line[i_index][j_index] == '\n')
			{
				line[i_index][j_index] = '\0';
				return;
			}
		}
		
		if (line[i_index][j_index] == '\n')
		{
			line[i_index][j_index] = '\0';
			return;
		}
	}
}

void swap() {}

// cin.getline(line[i_index], WORDSIZE, ' ');