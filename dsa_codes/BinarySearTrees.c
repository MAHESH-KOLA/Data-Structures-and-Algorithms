#include<stdio.h>
#include<stdlib.h>
#define MAX(a,b) ((a>b)?a:b)
struct node{
struct node *lch;
int key;
struct node *rch;
};
struct node *createNode(int key){
	struct node *nn;
	nn = (struct node *) malloc(sizeof(struct node));
	nn->key = key;
	nn->lch = nn->rch = NULL;
	return nn;
}

struct node* insert_nr(struct  node*root, int key) {
struct  node *nn, *temp = root, *temp_parent = NULL;
    nn = createNode(key);
    if(root == NULL)
            root = nn;
    else{
          while (temp != NULL) {
            temp_parent = temp;
            if (key < temp->key )
                    temp = temp->lch;
            else
                   temp = temp->rch;
              }
             if (key < temp_parent->key)
                temp_parent->lch = nn;
            else
                temp_parent->rch = nn;
    }
  return root;
}

void insert(struct node *root, int key) {
  if (root==NULL)
    root = createNode(key);
  else if (key < root->key)
    root->lch = insert(root->lch, key);
  else  // key >=root->key
    root->rch = insert(root->rch, key);
  return root;
  
}

void Inorder(struct node* root)
{
    if (root == NULL)
        return;
    Inorder(root->lch);
    printf("%d\t",root->key);
    Inorder(root->rch);
}

void preorder(struct node* root)
{
    if (root == NULL)
        return;
    printf("%d\t",root->key);
    preorder(root->lch);
    preorder(root->rch);
}

void postorder(struct node* root)
{
    if (root == NULL)
        return;
    postorder(root->lch);
    postorder(root->rch);
    printf(" %d\t",root->key);
}


struct node* search_recursively(struct node *root, int key){
    if(root == NULL || root->key == key)
         return root;
    if(key < root->key)
        return search_recursively(root->lch,key);
    if(key > root->key)
        return search_recursively(root->rch,key);
}


struct node* search_iteratively(struct node *root, int key){
    while(root!=NULL  &&  key != root->key){
        if(key < root->key)
            root = root->lch;
        else // key > root->key:
            root = root->rch;
        }
    return root;
}
/*
struct node* search_iteratively(struct node *root, int key){
    struct node *current_node = root;
    while(current_node!= root){
        if(key == current_node->key)
            return current_node;
        if(key < current_node->key)
            current_node = current_node->lch;
        else // key > current_node->key:
            current_node = current_node->rch;
        }
    return current_node->key;
}
*/

int height(struct node *root){
if(root == NULL)
    return -1;
else
    return (1 + MAX(height(root->lch), height(root->rch)));
}
int  find_max(struct  node*root){
    if(root == NULL){
        printf("\n Tree is empty");
        return;
        }
    while(root->rch != NULL)
        root = root->rch;
  return root->key;
}

int  find_max_rec(struct  node*root){
    if(root == NULL){
        printf("\n Tree is empty");
        return;
        }
    if(root->rch == NULL)
       return root->key;
    else
        find_max_rec(root->rch);
}

int find_min(struct  node*root){
    if(root == NULL){
        printf("\n Tree is empty");
        return;
        }
    while(root->lch != NULL)
        root = root->lch;
    return root->key;
}

int find_min_rec(struct  node*root){
    if(root == NULL){
        printf("\n Tree is empty");
        return;
        }
    if(root->lch == NULL)
        return root->key;
    else
        find_min_rec(root->lch);
}

int  inorder_successor(struct  node*root, int key){
    struct  node* inorder_successor = NULL;
    if(root == NULL)
        return NULL;
    while(root->key != key){
        if(key < root->key ){
            inorder_successor = root;
            root= root->lch;
        }
        else
            root = root->rch;
    }
    if (root && root->rch != NULL)
     inorder_successor = find_min(root->rch);
    return inorder_successor;
}

int  inorder_predecessor(struct  node*root, int key){
    struct  node* inorder_predecessor = NULL;
    if(root == NULL)
        return NULL;
    while(root->key != key){
        if(key > root->key ){
            inorder_predecessor = root;
            root= root->rch;
        }
        else
            root = root->lch;
    }
    if (root && root->lch != NULL)
     inorder_predecessor = find_max(root->lch);
    return inorder_predecessor;
}


struct node* deletion(struct node* root, int key){
if (root == NULL) return root;
else if (key > root->key) root->rch = deletion(root->rch, key);
else if(key < root->key) root->lch = deletion(root->lch, key);
else{
	if (root->lch && root->rch){
		struct node* sucessor = root->rch;
		while (sucessor->lch != NULL)
			sucessor = sucessor->lch;
		root->key = sucessor->key;
		root->rch = deletion(root->rch, sucessor->key);
	}else {
		struct node *subtree;
		if (root->rch){
			subtree = root->rch;
			free(root);
		}
		else {
			subtree = root->lch;
			free(root);
		}
		return subtree;
	}
}
return root;
}

void main(){
struct node *root = NULL,  *result1, *result;
int tree_height;

root = insert(root,10);
root = insert(root,12);
root = insert(root,10);
root = insert(root,16);
root = insert(root,20);
Inorder(root);


root = insert(root,8 );
root = insert(root,3 );
root = insert(root,1);
root = insert(root,10);
root = insert(root,14 );
root = insert(root,13);
root = insert(root,6 );
root = insert(root,4);
root = insert(root,7);
root = insert(root,15);
root = insert(root,8);

printf("\n max is %d\n",find_max(root));
printf("\n max is %d\n",find_max_rec(root));
printf("\n min is %d\n",find_min(root));
printf("\n min is %d\n",find_min_rec(root));
 printf("\n Preorder : ");
preorder(root);
 printf("\n Postorder : ");
postorder(root);
 printf("\n Inorder : ");
Inorder(root);
tree_height = height(root);
printf("\n Tree height: %d\t",tree_height);

printf("\n Element found: %d\t", search_iteratively(root, 8));
printf("\n Element found: %d\t", search_recursively(root, 8));
printf("\n successor: %d\t",inorder_successor(root, 8));
printf("\n successor: %d\t",inorder_predecessor(root, 8));

root = deletion(root,8);
root = deletion(root,8);
root = deletion(root,8);
Inorder(root);
/* result = search_recursively(2,root);
printf("%c\t",result->value);
result1 = search_recursively(4,root);
printf("%c\t",result1->value);
*/

}

