#ifndef CIRCULARLINKEDLIST_H
#define CIRCULARLINKEDLIST_H

struct node {
	unsigned char item;
	struct node *prev;
	struct node *next;
};

struct node* make_node(unsigned char item);
void free_node(struct node *p);
struct node* search(unsigned char key);
void insert(struct node *p);
void delete(struct node* p);
void traverse(void (*visit)(struct node*));
void destroy(void);
void enqueue(struct node *p);
struct node* dequeue(void);

#endif

