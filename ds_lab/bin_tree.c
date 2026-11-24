#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *left;
  struct node *right;
};

struct node *insert(struct node *root, int num) {

  if (root == NULL) {
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = num;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
  } else if (num < root->data) {
    root->left = insert(root->left, num);
  } else if (num > root->data) {
    root->right = insert(root->right, num);
  }
  return root;
}
void preorder(struct node *root) {
  if (root == NULL)
    return;
  printf("%d\t", root->data);
  preorder(root->left);
  preorder(root->right);
}

void inorder(struct node *root) {
  if (root == NULL)
    return;
  inorder(root->left);
  printf("%d\t", root->data);
  inorder(root->right);
}

void postorder(struct node *root) {
  if (root == NULL)
    return;
  postorder(root->left);
  postorder(root->right);
  printf("%d\t", root->data);
}

int main() {
  int num, count, i;
  struct node *root = NULL;
  printf("Enter number of nodes:\n");
  scanf("%d", &count);
  for (i = 0; i < count; i++) {
    printf("Enter the value :");
    scanf("%d", &num);
    root = insert(root, num);
  }
  printf("Inorder \t:\t");
  inorder(root);
  printf("\n");
  printf("Preorder\t:\t");
  preorder(root);
  printf("\n");
  printf("Postorder\t:\t");
  postorder(root);
  printf("\n");
  return 0;
}
