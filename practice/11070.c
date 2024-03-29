#include <stdio.h>
#include <stdlib.h>
 
 
typedef struct listnode {
  int data;
  struct listnode *next;
} listnode;
// create a node of linked-list
listnode *add_node(listnode *prev, int data) {
  listnode *newnode = (listnode *)malloc(sizeof(listnode));
  newnode->data = data;
  if (prev != NULL) {
    prev->next = newnode;
  }
  newnode->next = NULL;
}
// print from head of linked-list
void print_node(listnode *head) {
  while (head != NULL) {
    printf("%d ", head->data);
    head = head->next;
  }
}
listnode *reorder_list(listnode *head) {
  listnode *last = head;
  int s = 0;
  while(last->next != NULL){
    last = last->next;
    s++;
  }
  s++;
  listnode *a = head;
  listnode *b = last;
  for(int i = 0; i < s - (s / 2) + 1; i++){
    listnode *t = a->next;
    a->next = b;
    if(i == s - (s / 2)){
      if(s % 2 == 1){
        b->next = t;
        t->next = NULL;
      }
      else
        b->next = NULL;
    }
    else{
      b->next = t;
      a = b->next;
//printf("a = %d\n", a->data);//try
      listnode *bt = a;
      for(int j = 0; j < s - (i * 2) - 3; j++){
        bt = bt->next;
//printf("bt = %d\n", bt->data);//try
      }
      b = bt;
    }
  }
  return head;
}
 
 
int main () {
  int num;
  scanf("%d", &num);
  int arr[num];
  for (int i = 0; i < num; i++) {
    scanf("%d", &arr[i]);
  }
  listnode *head, *prev = NULL, *ptr;
  for (int i = 0; i < num; i++) {
    head = add_node(prev, arr[i]);
    if (i == 0) {
      ptr = head;
    } 
    prev = head;
  }
  listnode *result = reorder_list(ptr);
  print_node(result);
}
