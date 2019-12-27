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
    
   if(list == NULL) {
      list = link;
      list->next = link;
      return;
   }
   current = list;
    
   while(current->next != list)
      current = current->next;
    
   // chen link vao phan cuoi cua list
   current->next = link; 
   link->next = list;
}

void display(struct node *head) {
   struct node *ptr = head;

   printf("[head] =>");
   //bat dau tu phan dau cua list
   while(ptr->next != head) {        
      printf(" %d =>",ptr->data);
      ptr = ptr->next;
   }
   printf(" %d =>",ptr->data);
   printf(" [head]\n");
}

void split_list() {
   int count = 0;
   // cap phat bo nho cho node moi;
   struct node *list1;
   struct node *link;
   struct node *current;
   
   list1 = list;
   

   while(list1->next != list) {
      struct node *link = (struct node*) malloc(sizeof(struct node));
         
      link->data = list1->data;
      link->next = NULL;
         
      if(list1->data%2 == 0) {

         if(even == NULL) {
            even = link;
            even->next = link;
            list1 = list1->next;
            continue;
         }else {
            current = even;
                
            while(current->next != even) {
               current = current->next;
            }
                
            // chen link vao phan cuoi cua list
            current->next = link; 
            link->next = even;
         }
         list1 = list1->next;
      }else {
         if(odd == NULL) {
            odd = link;
            odd->next = link;
            list1 = list1->next;
            continue;
         }else {
            current = odd;
                
            while(current->next!= odd) {
               current = current->next;
            }
            // chen link vao phan cuoi cua list
            current->next = link; 
            link->next = odd;

         }
         list1 = list1->next;
      }
   }
   // xu ly last node
   link = (struct node*) malloc(sizeof(struct node));
     
   link->data = list1->data;
   link->next = NULL;
   if(list1->data%2 == 0) {
      current = even;
        
      while(current->next != even) {
         current = current->next;
      }
        
      // chen link vao phan cuoi cua list
      current->next = link; 
      link->next = even;
   }else {
      current = odd;
        
      while(current->next!= odd) {
         current = current->next;
      }
      // chen link vao phan cuoi cua list
      current->next = link; 
      link->next = odd;
   }
}
    
int main() {
   int i;
    
   for(i=1; i<=10; i++)
      insert(i);
    
   printf("Danh sach ban dau: \n");
   display(list);
    
   split_list();
    
   printf("\nDanh sach le: ");
   display(odd);

   printf("Danh sach chan: ");
   display(even);

   return 0;
}