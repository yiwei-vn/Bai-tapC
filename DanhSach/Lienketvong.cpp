#include <stdio.h>
#include <stdlib.h>

struct node {
   int data;
   struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;

//chen link tai vi tri dau tien
void insert(int data) {
   // cap phat bo nho cho node moi;
   struct node *link = (struct node*) malloc(sizeof(struct node));

   link->data = data;
   link->next = NULL;

   // neu head la trong, tao list moi
   if(head==NULL) {
      head = link;
      head->next = link;
      return;
   }

   current = head;
   
   // di chuyen toi phan cuoi list
   while(current->next != head)
      current = current->next;
   
   // chen link vao phan cuoi cua list
   current->next = link;
   
   // lien ket last node voi head
   link->next = head;
   
}

//hien thi list
void printList() {
   struct node *ptr = head;

   printf("\n[head] =>");
   
   //bat dau tu phan dau cua list
   while(ptr->next != head) {        
      printf(" %d =>",ptr->data);
      ptr = ptr->next;
   }
   
   printf(" %d =>",ptr->data);
   printf(" [head]\n");
}

int main() {
   insert(10);
   insert(20);
   insert(30);
   insert(1);
   insert(40);
   insert(56); 

   printList();
   return 0;
}