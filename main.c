#include "main.h"

static void	init_global(t_global *global)
{
	global->insumo = NULL;
	global->quimico = NULL;
	global->ferramenta = NULL;
}

static void	print_list_id(t_item *item, char *name, int id)
{
	printf("Lista de %s\n", name);
	while (item)
	{
		if (id == item->id)
			printf("Severidade: %i | id: %i\n", item->flag, item->id);
		item = item->next;
	}
}

static void	print_list(t_item *item, char *name)
{
	printf("Lista de %s\n", name);
	while (item)
	{
		printf("Severidade: %i | id: %i\n", item->flag, item->id);
		item = item->next;
	}
}

int	main(void)
{
	t_global	global;

	init_global(&global);
	request(&global.insumo, new_lst(2, 1));
	print_list(global.insumo, "insumo");
	return (0);
}
