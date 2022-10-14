#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list* newlist;
	
	newlist = malloc(sizeof(struct t_list));
	if (newlist == NULL)
		return (0);
	newlist->content = content;
	newlist->next = NULL;
	return (newlist);
}
