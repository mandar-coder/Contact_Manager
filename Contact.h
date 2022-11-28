#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

class Contact{
    int id;
    char name[20];
    char mobile[20];
    char email[20];
    char addr[40];
    char fbid[20];

public:
Contact(){

}
Contact(int cid,const char* cname ,const char* cmobile,const char* cemail ,const char* caddr,const char* cfbid){
    id = cid;
    strcpy(name,cname);
    strcpy(mobile,cmobile);
    strcpy(email,cemail);
    strcpy(addr,caddr);
    strcpy(fbid,cfbid);
}

void disp(){
    cout<<"ID: "<<id<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Mobile: "<<mobile<<endl;
    cout<<"Email: "<<email<<endl;
    cout<<"Address: "<<addr<<endl;
    cout<<"FbID: "<<fbid<<endl;
    cout<<"================================================\n"<<endl;
}
};

void addContact(Contact c){
    ofstream fout ("contact.dat",ios::app);
    fout.write((char*)&c,sizeof(c));
    fout.close();
    cout<<"Contact added sucessfully"<<endl;
}