typedef struct node
{
	int data;
	struct node *next;
} node_t;

void print_list(node_t *);
node_t *prepend_node(node_t *, int);
node_t *create_node(node_t *, int);
void remove_node(node_t **, int);
void remove_list(node_t **);
void swap_nodes(node_t *);
void swap(int *, int *);