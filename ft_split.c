

// "hello world" -> ["hello","world"] 
int is_space(char c)
{
	return((c == 32) || (c >= 9 && c <= 13));
}

int count_words(char *str)
{
	int i = 0;
	int counter = 0;

	while(is_space(str[i]))
		i++;

	while(str[i])
	{
		if(!is_space(str[i]) && (is_space(str[i + 1]) || str[i + 1] == '\0'))
			counter++;
		i++;
		
	}
	return counter;
}
char *sub_str(char *str, int start, int end)
{
	char *sub;
	sub = malloc(end - start + 1);
	int i = 0;
	int j = 0;
	while(i < start)
		i++;
	while(str[i] && i < end)
	{
		sub[j] = str[i];
		i++;
		j++;
	}
	sub[j] = '\0';
	return sub;
}
char    **ft_split(char *str)
{
	char **result;
	int words = count_words(str);
	result = malloc(sizeof(char * ) * (words + 1));

	int i = 0;
	int j = 0;
	int start = 0;
	int end = 0;
	while(str[i])
	{
		while(is_space(str[i]))
			i++;
		if(!str[i])
			break;
		start = i;
	
		while(!is_space(str[i]) && str[i])
			i++;	
		end = i;
		result[j] = sub_str(str,start,end);
		j++;
	}
	result[j] = NULL;
	return result;
}
