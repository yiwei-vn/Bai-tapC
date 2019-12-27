#include <stdio.h>
#include <stdlib.h>

struct node {
   int data;
   struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;

//tao danh sach lien ket
void insert(int data) {
   // cap phat bo nho cho node moi;
   struct node *link = (struct node*) malloc(sizeof(struct node));

   link->data = data;
   link->next = NULL;

   // neu head la trong, tao list moi
   if(head==NULL) {
      head = link;
      return;
   }

   current = head;
   
   // di chuyen toi phan cuoi list
   while(current->next!=NULL)
      current = current->next;
   
   // chen link vao phan cuoi cua list
   current->next = link; 
}

void find_data(int item) {
   int pos = 0;
   
   if(head==NULL) {
      printf("Danh sach lien ket chua duoc khoi tao");
      return;
   } 

   current = head;
   while(current->next!=NULL) {
      if(current->data == item) {
         printf("Tim thay %d tai vi tri %d\n", item, pos);
         return;
      }
      current = current->next;
      pos++;
   }
   printf("%d khong ton tai trong list", item);
}
int main() {
   insert(10);
   insert(20);
   insert(30);
   insert(1);
   insert(40);
   insert(56); 

   find_data(40);
   find_data(44);
   
   return 0;
}