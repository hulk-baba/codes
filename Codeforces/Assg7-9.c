#include<stdio.h>
#include<stdlib.h>
int search(struct node *node,int value);

// Declaring Structure 
struct node{
	
	int data;
	struct node *left;
	struct node *right;
	
};

//Function 1 for making a new node all the time

struct node* newNode(int data){
	
	struct node* node = (struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	
	return node;
}

//Function 2 for searching
	
int search(struct node *root , int value)	
{
	
	if(root==NULL)
	return 0;
	if(root->data==value)
	return 1;
	if(root->data<value)
	return search(root->right,value);
	if(root->data>value)
	return search(root->left,value);
}
//Function 3 for Insertion
struct node* Recursive_insertion(struct node* root, int data){
	
	if (root == NULL){
		
		return newNode(data);
	}
	else{
		
		if(data <= root->data){
			
			root->left= Recursive_insertion(root->left,data);
		}
		else
		{
			root->right= Recursive_insertion(root->right,data);
		
	    }
		
	return root;
}
}


//Function 4 for dispalying tree
void display_inorder(struct node* root){
	
	if(root){
		
		display_inorder(root->left);
		printf("%d\n",root->data);
		display_inorder(root->right);
		
	}
	
}
void display_preorder(struct node* root){
	
	if(root){
		
		
		printf("%d\n",root->data);
		display_preorder(root->left);
		display_preorder(root->right);
		
	}
	
}
void display_postorder(struct node* root){
	
	if(root){
		
		display_postorder(root->left);
		display_postorder(root->right);
		printf("%d\n",root->data);
		
		
	}
	
}
// Function 5 for height of tree	


int maxDepth(struct node* node) 
{
   if (node==NULL) 
       return 0;
   else 
   {
       /* compute the depth of each subtree */
       int lDepth = maxDepth(node->left);
       int rDepth = maxDepth(node->right);

       /* use the larger one */
       if (lDepth > rDepth) 
           return(lDepth+1);
       else return(rDepth+1);
   }
} 

// Count no of nodes in a tree

int count(struct node *root){

	if(root == NULL)
		return 0;
	int lcount = count(root->left);
	int rcount = count(root->right);
	return lcount+rcount+1;


}
// delete a tree

void deleteTree(struct node* node) 
{
    if (node == NULL) return;
 
    /* first delete both subtrees */
    deleteTree(node->left);
    deleteTree(node->right);
   
    /* then delete the node */
    printf("\n Deleting node: %d", node->data);
    free(node);
} 
	
	

int main(){
	
	//Declaring a new root node;
	struct node *root = (struct node*)malloc(sizeof(struct node));
	root->left = NULL;
	root->right= NULL;
	printf("To create a tree initially enter a data\n");
	scanf("%d",&root->data);
	int ch;
	printf("Menu\n1.Insertion 2.Search 3.Display In order 4. Display PreOrder 5. Display PostOrder 6.Depth of tree 7.Count Nodes 8 Delete a tree 9.Finding Minimum 10.Finding Maximum 11.Exit\n");
	while(1){
		
		int value;
		printf("Enter your choice\n");
		scanf("%d",&ch);
		if(ch==1){
			
			printf("Enter the data\n");
			int data;
			scanf("%d",&data);
			root = Recursive_insertion(root,data);
			continue;
			
			
		}
		if(ch==2){
			
			printf("Enter the value to be searched for\n");
			scanf("%d",&value);
			int r = search(root,value);
			if(r==1)
			printf(" FOUND \n");
			else
			printf("NOT FOUND\n");
		}
		if(ch==3){
			
			display_inorder(root);
			continue;
		}
		if(ch==4){
			
			display_preorder(root);
			continue;
		}
		
		if(ch==5){
			
			display_postorder(root);
			continue;
		}
		
		if(ch==6){
			
			int r=maxDepth(root);
			printf("Height is %d\n",r);
		}
		if(ch==7){

			int r = count(root);
			printf("No. of nodes in tree are%d\n",r);

		}
		if(ch==8){

			deleteTree(root);
		}
		if(ch==9){

			
		}

		if(ch==10){
			break;
			
		}

		
		
		
	}
	
	return 0;
}
