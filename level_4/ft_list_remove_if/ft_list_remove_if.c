#include <stdlib.h> 

int cmp(void *data, void *data_ref)
{
    while (data[i] || data_ref[i])
    {
        if (data[i] != data_ref[i])
            return (1);
        i++;
    }
    return (0);
}
//doble puntero no es una structura, es un puntero que guarda la dir de mem en la que esta el puntero de la lista/ puntero simple si es esctrucctura y puede acceder a data y next con ->, poner siempre *begin_list con un puntero y si hay flecha entre parentesis: (*begin_list)
void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{	
	t_list	*current;
	t_list	*get_free;
	t_list	*head;
	
	while (cmp((*begin_list)->data, data_ref) == 0)
	{
		get_free = *begin_list;
		*begin_list = (*begin_list)->next;
		free(get_free);
	}
	head = *begin_list;
	current = head->next;
	while (current != NULL)
	{
		if (cmp(current->data, data_ref) == 0)
		{
			head->next = head->next->next;
			get_free = current;
			current = head->next;
			free(get_free);
		}
		else
		{
			current = current->next;
			head = head->next;
		}
	}	
}


