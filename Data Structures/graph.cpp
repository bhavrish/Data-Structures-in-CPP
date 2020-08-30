#include <iostream>
using namespace std; 

// Notes:
// 1) LIFO Structure
// 2) Implemented with arrays

class graph {
   int arr[8][8];

   public:
      graph() {
         for(int i=0;i<8;i++) {
            for(int j=0;j<8;j++) {
               arr[i][j]=0;
            }
         }
      }

      void add(int point1,int point2,int length=1) {
         if (point1>=0 && point2<8 && point2>=0 && point2<8)
            arr[point1][point2]=length;
      }

      void del(int point1,int point2) {
         arr[point1][point2]=0;
      }
      void depthdisplay(int i=0) { // depth first search
         for(;i<8;i++) {
            for(int j=0;j<8;j++) {
               if (arr[i][j]>0) {
                  cout<<i<<"->";
                  display(j);
               }
            }
         }
      }

      void breadthdisplay(int i=0) { // depth first search
         for(;i<8;i++) {
            for(int j=0;j<8;j++) {
               if (arr[i][j]>0) {
                  cout<<i<<"->";
                  display(j);
               }
            }
         }
      }
};

int main() {
   int num, point1, point2, len;
   graph g0;
   cout<<"Press 1 to Add"<<endl;
   cout<<"Press 2 to Delete"<<endl;
   cout<<"Press 3 to Display"<<endl;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>num;
      switch(num) {
         case 1: {
            cout<<"Enter point1:"<<endl;
            cin>>point1;
            cout<<"Enter point2:"<<endl;
            cin>>point2;   
            cout<<"Enter length between points:"<<endl;
            cin>>len;
            g0.add(point1,point2,len);
            cout<<"------------------------------------------------------------------"<<endl;
            break;
         }
         case 2: {
            cout<<"Enter point1:"<<endl;
            cin>>point1;
            cout<<"Enter point2:"<<endl;
            cin>>point2;
            g0.del(point1,point2);
            cout<<"------------------------------------------------------------------"<<endl;
            break;
         }
         case 3: {
            g0.display();
            cout<<"------------------------------------------------------------------"<<endl;
            break;
         }
         default: {
            cout<<"Exit"<<endl;
            break;
         }
      }
   }while(num!=4); 
   
   return 0;
}