/*
** EPITECH PROJECT, 2017
** my_strcmp
** File description:
** compar a string
*/

int my_strcmp(char *tmp1, char *tmp2, int tmp, int return_value)
{
	int i = 0;

	while (tmp1[i] != '\0' || tmp2[i] != '\0') {
		if (tmp1[i] != tmp2[i])
			return (tmp);
		i++;
	}
	return (return_value);
}
