#include "libft.h"

void	ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{

	if (!f)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
