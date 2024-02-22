#include<stdio.h>
#include<malloc.h>
struct node{
	int data;
	struct node *left;
	struct node *right;
};
typedef struct node tree;
struct stack
{
	int flag;
	struct stack *next;
	tree *r;
};
typedef struct stack stack;
stack *top=NULL;
tree *root=NULL;
void insert(int e)
{
	tree *p, *x;
	if(root==NULL)
	{
		root=(tree *)malloc(sizeof(tree));
        root->data=e;
		root->left=NULL;
		root->right=NULL;
	}
	else
	{
		p=root;
		while(p!=NULL)
		{
			x=p;
			if(p->data>e)
			
				p=p->left;
			else
				p=p->right;
			
			if(x->data>e)
			{
				x->left=(tree *)malloc(sizeof(tree));
				x->left->data=e;
				x->left->right=NULL;
				x->left->left=NULL;
			}
			else
			{
			
				x->right=(tree *)malloc(sizeof(tree));
				x->right->data=e;
				x->right->left=NULL;
				x->right->right=NULL;
			}
			
		}
	}
}
	void inorder( tree *r)
	{
		if(r==NULL)
	     return;
	     inorder(r->left);
	     printf("%d",r->data);
	     inorder(r->right);
	}
 void push(tree *t,int f)
{
   	stack *temp=(stack*)malloc(sizeof(stack));
   	temp->r=t;
   	temp->next=top;
   	temp->flag=f;
   	top=temp;
}

tree* pop()
{
	tree *t=NULL;
	int f=0;
	if(top!=NULL)
	{
		t=top->r;
		if(top->flag==0)
		{
			f++;
			top=top->next;
		}
		else if(top->flag==1)
		{
			printf("\t%d",t->data);
			top=top->next;
			t=pop();
		}
	}
	if(f==1)
	  push(t,f);
	return t;
}
void postorder()
{
	tree *t;
	for(t=root;t!=NULL;t=t->left)
	{
		push(t,0);
	}
	t=pop();
	while(t!=NULL)
	{
		for(t=t->right;t!=NULL;t=t->left)
		{
			push(t,0);
		}
		t=pop();
	}
}
int menu()
{
	int ch;
	printf("\n\t\t   Binary Search Tree without recursion");
	printf("\n\t\t-----------------------------------------");
	printf("\n\t1.Insert\n\t2.Postorder\n\t3.Exit");
	printf("\nEnter your choice : ");
	scanf("%d",&ch);
	return ch;
}
int main()
{
	int ch;
	for(ch=menu();ch!=3;ch=menu())
	{
		switch(ch)
		{
			case 1 :  printf("\nEnter the element : ");
			          scanf("%d",&ch);
			          insert(ch);break;
			case 2 :  printf("\n\tInorder traversal : ");
			          postorder(root);break;
			default : printf("\nINVLID CHOICE ");
		}
	}

	return 0;
}


