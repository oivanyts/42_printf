


int				ft_num_size(long long int num)
{
	int i;

	i = 1;
	while (num /= 10)
		i++;
	return (i);
}
