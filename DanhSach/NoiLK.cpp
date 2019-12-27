#include <stdio.h>
#include <stdlib.h>

struct node {
   int data;
   struct node *next;
};

struct node *even = NULL;
struct node *odd = NULL;
struct node *list = NULL;

//tao danh sach lien ket
void insert(int data) {
   // cap phat bo nho cho node moi;
   struct node *link = (struct node*) malloc(sizeof(struct node));
   struct node *current;

   link->data = data;
   link->next = NULL;



   if(data%2 == 0) {
      if(even == NULL) {
         even = link;
         even->next = link;
         
         return;
      }else {
         current = even;
         while(current->next != even)
            current = current->next;

         // chen link vao phan cuoi cua list
         current->next = link; 
         link->next = even;
      }
   }else {
      if(odd == NULL) {
         odd = link;
         odd->next = link;

         return;
      }else {
         current = odd;
 
         while(current->next != odd) {
            current = current->next;
         }

         // chen link vao phan cuoi cua list
         current->next = link; 
         link->next = odd;
         
      }
   }
}

void display(struct node *head) {
   int temp;
   struct node *ptr = head;

   if(head == NULL) {
      printf("Danh sach lien ket chua duoc khoi tao");
      return;
   }else if(head->next == head) {
      printf("%d", head->data);
      return;
   }

   printf("[head] =>");
   
   while(ptr->next != head) {        
      printf(" %d =>",ptr->data);
      ptr = ptr->next;
   }

   printf(" %d =>",ptr->data);
   printf(" [head]\n");
}

void combine() {
   struct node *elink, *olink;

   list = even;
   elink = list;
    
   while(elink->next!= even) {
      elink = elink->next;
   }
        
   elink->next = odd;
   olink = odd;
    
   while(olink->next!= odd) {
      olink = olink->next;
   }
   olink->next = even;
}

int main() {
   int i;
 

   for(i=1; i<=10; i++)
      insert(i);

   printf("Danh sach chan: ");
   display(even);

   printf("Danh sach le: ");
   display(odd);

   combine();
   
   printf("Danh sach sau khi noi:\n");
   display(list);

  
   
   return 0;
}