// Sample10.cpp : Defines the entry point for the console application.
//


#include <stdio.h>

//��һ�Σ����ǰѽڵ㶨�������
struct node {
  int data;
  struct node *next, **prev;
} *head = NULL;

//Ȼ��insert�ͱ��������
void insert(struct node *n) {
  n->prev = &head;
  n->next = head;
  if(head)
    head->prev = &n->next;
  head = n;
}

//ɾ���ͳ�������
void remove(struct node *d) {
  *d->prev = d->next;
  if (d->next)
    d->next->prev = d->prev;
  delete d;
}

void print() {
	printf("head: %d, %d\n", &head, head);
	struct node *p = head;
	while (p) {
		printf("%d --------> %d, %d, %d\n", p, p->data, p->prev, p->next);
		printf("%d --------- %d, %d, %d\n", &p, &p->data, &p->prev, &p->next);
		printf("\n") ;
		p = p->next;
	}
}

int main()
{
	struct node *n = new node();
	n->data = 10;
	insert(n);

	n = new node();
	n->data = 20;
	insert(n);

	n = new node();
	n->data = 30;
	insert(n);

	print();
	return 0;
}

