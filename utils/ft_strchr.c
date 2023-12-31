char *ft_strchr(const char *s, int c)
{
	int		i;

	i = -1;
	while (s[++i])
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}

/*
You get the warning because you are trying to convert this into a pointer pointing to a (non-constant) char. 
There is a rule in C saying that it is always ok to convert from pointer-to-type into pointer-to-const-type, but not the other way around.
It doesn't matter if your code tries to change the values or not. 
Just by using char* you tell the compiler that you want a pointer which is allowed to change values.
Most of the C standard library functions do not always make sense when it comes to "const correctness". 
There is for example no way to cleanly implement strchr. 
You will have to return (char*)s and cast away the const, which is very bad programming practice.
This is the fault of the person who specified the strchr function: it is flawed by design
*/