#include<stdio.h>
#include<malloc.h>
#include<string.h>
struct node{
	char data[100];
	struct node *left;
	struct node *right;
};
typedef struct node tree;
tree *root=NULL;
void insert(char e[])
{
	tree *p,*x;
	if(root==NULL)
	{
		root=(tree*)malloc(sizeof(tree));
		strcpy(root->data,e);
		root->left=NULL;
		root->right=NULL;
	}
	else
	{
		p=root;
		while(p!=NULL)
		{
			x=p;
			if(strcmpi(p->data,e)>0)
				p=p->left;
			else
				p=p->right;
		}
			if(strcmpi(x->data,e)>0)
			{
				x->left=(tree *)malloc(sizeof(tree));
				strcmp(x->left->data,e);
				x->left->left=NULL;
				x->left->right=NULL;
			}
			else
			{
				x->right=(tree *)malloc(sizeof(tree));
				strcmp(x->right->data,e);
				x->right->left=NULL;
				x->right->right=NULL;		
			}
		}
	}
void inorder(tree *r)
{
	if(r==NULL)
	return;
	inorder(r->left);
	printf("\t%s",r->data);
	inorder(r->right);
}
void preorder(tree *r)
{
	if(r==NULL)
	return;
	printf("\t%s", r->data);
	preorder(r->left);
	preorder(r->right);
}
void postorder(tree *r)
{
	if(r==NULL)
	return;
	postorder(r->left);
	postorder(r->right);
	printf("\t%s",r->data);
}
int menu()
{
	int ch;
	printf("\n\t\t   Binary Search Tree (strings)");
	printf("\n\t\t-----------------------------------------");
	printf("\n\t1.Insert\n\t2.Inorder\n\t3.Preorder\n\t4.Postorder\n\t5.Exit");
	printf("\nEnter your choice : ");
	scanf("%d",&ch);
	return ch;
}
int main()
{
	int ch;
	char e[100];
	for(ch=menu();ch!=5;ch=menu())
	{
		switch(ch)
		{
			case 1 :  printf("\nEnter the element : ");
			          scanf("%s",&e);
			          insert(e);
					  break;
			case 2 :  printf("\n\tInorder traversal : ");
			          inorder(root);
					  break;
			case 3 :  printf("\n\tPreorder traversal : ");
			          preorder(root);
					  break;
			case 4 :  printf("\n\tPostorder traversal : ");
			          postorder(root);
					  break;
			default : printf("\nINVLID CHOICE ");
		}
	}
	return 0;
}

