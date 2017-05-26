#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "libft/libft.h"

#include <stdio.h>



typedef struct s_stack
{
	int		features;
	t_list	*ops;
	int		*a;
	int		*b;
	int		size_a;
	int		size_b;
	int 	b_max;
	int		b_min;
	int		t_rots;
	int		a_rots;
	int		b_rots;


}				t_stack;

/** push_swap.c **/
void print_stacks(int *stacka, int *stackb);

/** freeit.c **/
void 	free_split(char ***split);
/** create_stack.c **/
int		create_stack(int ac, char **av, t_stack **st);
int list_len(t_list *ls);
/** solver.c **/


/** struct.c **/
void 	free_stack(t_stack *stack);
int		*init_array(int size);
t_stack	*initstack(void);
void 	reset_stack(t_stack *stack);

/** sort.c **/
int		sort_check(t_stack *stack);
void 	sort_large(t_stack *stack);

/** sort2.c **/
void 	sort_small(t_stack *stack);

/** rulse.c **/
void 	apply_operations(t_stack *stack, char *input);
int 	ps_swap(t_stack *stack, char option);
int 	ps_push(t_stack *stack, char option);
int 	ps_rotate(t_stack *stack, char option);
int 	ps_reverse_rotate(t_stack *stack, char option);

/** help.c **/
void 	find_min_max(t_stack *stack);
int 	calc_positions(t_stack *stack, int num);
int		ft_abs(int num);
void 	ft_lstpush(t_list **head, void const *content, int len);

/** print.c **/
void 	display_stack(t_stack *stack, int *a_copy);
void 	ft_lstfree(t_list *head);
void 	ft_lstprint(t_list *head);
int 	*ft_intdup(int *array, int size);




#endif
