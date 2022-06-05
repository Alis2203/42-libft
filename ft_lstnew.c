#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*aux;
	aux = (t_list*)malloc(sizeof(*aux));
	if (!aux)
		return (NULL);
	aux->content = content;
	aix->next = NULL;
	return (aux);
}
