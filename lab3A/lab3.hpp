typedef struct node
{
	int data;
	struct node *next;
} node_t;

void print_list(node_t *);
void append_node(node_t **, int);
void remove_node(node_t **, int);