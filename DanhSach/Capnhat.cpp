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

void update_data(int old, int new1) {
   int pos = 0;
   
   if(head==NULL) {
      printf("Danh sach lien ket chua duoc khoi tao");
      return;
   } 

   current = head;
   
   while(current->next!=head) {
      if(current->data == old) {
         current->data = new1;
         printf("\nTim thay %d tai vi tri %d, duoc thay the voi %d\n", old, pos, new1);
         return;
      }
      current = current->next;
      pos++;
   }
      
   if(current->data == old) {
      current->data = new1;
      printf("\nTim thay %d tai vi tri %d, duoc thay the voi %d\n", old, pos, new1);
      return;
   }      
      
   printf("%d khong ton tai trong list\n", old);
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
   update_data(56,11);
   printList();
    
   return 0;
}