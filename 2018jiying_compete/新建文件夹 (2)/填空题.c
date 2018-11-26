#include <stdio.h>
#include <stdlib.h>

#include  <stdio.h>
#include  <stdlib.h>
#define N 6

typedef struct node {
	int  data;
	struct node  *next;
} NODE;

void outlist(NODE  *h)
{
	NODE  *p;
	p = h;
	if (p == NULL)  printf("The list is NULL!\n");
	else
	{
		printf("\nHead  ");
		do
		{
			printf("->%d", p->data); p = p->next;
		} while (p != NULL);
		printf("->End\n");
	}
}

void fun(NODE  *h)
{
	NODE  *p, *q;    int  t;
	p = h;
	while (p) {
		/**********found**********/
		q = p->next;//1
		while (q)
			/**********found**********/
		{
			if (p->data > q->data)//2
			{
				t = p->data;  p->data = q->data;  q->data = t;
			}

			q = q->next;
		}
		/**********found**********/
		outlist(h);//3
		/**********found**********/
		p = p->next;//4

	}
}

NODE *creatlist(int  a[])
{
	NODE  *h, *p = NULL, *q;        int  i;
	h = NULL;
	for (i = 0; i<N; i++)
	{
		q = (NODE *)malloc(sizeof(NODE));
		q->data = a[i];
		q->next = NULL;
		if (h == NULL)  h = p = q;
		else    { p->next = q;  p = q; }
	}
	return  h;
}

int main()
{
	NODE  *head;
	int  a[N] = { 3, 24, 55, 16, 78, 36 };
	head = creatlist(a);
	printf("\nThe original list:\n");
	outlist(head);
	fun(head);
	printf("\nThe list after inverting :\n");
	outlist(head);

	system("pause");
	return 0;
}