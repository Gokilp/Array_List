#include<iostream>
using namespace std;
int Size=0;
int arr[100];
void display(){
    int i;
    for(i=0;i<Size;i++)
        printf("%d\t",arr[i]);

}

void insert_pos(int pos,int value)
{
    int i;

    for(i=Size;i>=pos-1;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos-1]=value;
    Size++;

}
int delete_pos(int pos)
{
    int i,del=arr[pos-1];
    for(i=pos-1;i<Size;i++)
    {
        arr[i]=arr[i+1];
    }
    Size--;
    return del;
}

int main()
 {

while(1)
{


 int choice,value,pos;



cout<<"\n -------- List Menu -----------\n";
        cout<<"1.Insert at end "<<endl;
        cout<<"2.Insert at specified pos "<<endl;
       cout<<"3.Delete at specified pos "<<endl;
        cout<<"4.Display"<<endl;
        cout<<"5.Exit"<<endl;
       cout<<"\n--------------------------------------\n";
       cout<<"Enter your choice:\t";
       cin>>choice;

       switch(choice)
       {
       case 1:

           cout<<"Enter the number: "<<endl;
           cin>>value;
           arr[Size++]=value;

           for(int i=0;i<Size;i++)
           {
               cout<<arr[i];
           }

           if(Size==100)
                cout<<"Array is Full Memory";
                    break;
           case 2:
               cout<<"Enter the Insert at specified position on Array";
               cin>>pos;
               if(pos<0 || pos>=Size)
               {
                 cout<<"Invalid option";
               }
               cout<<"Enter the data: ";
               cin>>value;
                insert_pos( pos, value);

               break;
           case 3:
              if(Size==0)
              {
                 cout<<"Array is Empty";

              }
              cout<<"Enter the pos";
              cin>>pos;
              if(pos<0 || pos>=Size)
              {
                 cout<<"print Invalid Option";
              }
              else
              {
                   int del = delete_pos(pos);
                   cout << "Deleted element: " << del;
              }

              break;
           case 4:

             display();
             break;
           case 5:
              exit(0);
              break;

           default:
            cout<<" Wrong choice";
            break;

       }


}

 }














