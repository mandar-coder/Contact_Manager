#include "Contact.h"

int main(){
    int ch;

    Contact c(1,"macw","3737373783","hm@gamil.com","kolhpur","fb/apk");
    cout<<"==============================="<<endl;
    cout<<"Enter the choise:"<<endl;
    cout<<"1.Add contact"<<endl;
    cout<<"2.View all contact"<<endl;
    cout<<"3.Search contact"<<endl;
    cout<<"4.Delete contact"<<endl;
    cout<<"5.Exit"<<endl;
    cout<<"==============================="<<endl;
    cin>>ch;

    switch(ch){
        case 1:{
            int id;
            char name[20],mobile[20],email[20],addr[40],fbid[20];
            cout<<"Enter contact:"<<endl;
            cout<<"id:"<<endl;
            cin>>id;
            cout<<"name:"<<endl;
            cin>>name;
            cout<<"mobile no:"<<endl;
            cin>>mobile;
            cout<<"email:"<<endl;
            cin>>email;
            cout<<"fbid:"<<endl;
            cin>>fbid;
            cout<<"address:"<<endl;
            cin>>addr;

            Contact c(id,name,mobile,email,addr,fbid);
            addContact(c);
        }
        case 2:{
            // c.disp();
        }
    }
    return 0;
}