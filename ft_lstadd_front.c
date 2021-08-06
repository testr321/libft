#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
#include <stdio.h>
int main()
{
	char *str = "testr";
	char *str2 = "aaaaa";
	t_list *lst = ft_lstnew(str);
	t_list *lst2 = ft_lstnew(str2);
	t_list *lst3;
	// t_list *lst4;
	printf("%s\n", (char *)lst->content);
	printf("%s\n\n", (char *)lst2->content);
	ft_lstadd_front(&lst3, lst);
	printf("%s\n\n", (char *)lst3->content);
	// ft_lstadd_front(&lst3, lst4);
	ft_lstadd_front(&lst3, lst2);
	printf("%s\n", (char *)lst3->content);
	printf("%s\n", (char *)lst3->next->content);
}*/