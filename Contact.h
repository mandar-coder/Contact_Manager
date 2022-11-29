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
//to display single contact
void disp(){
    cout<<"ID: "<<id<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Mobile: "<<mobile<<endl;
    cout<<"Email: "<<email<<endl;
    cout<<"Address: "<<addr<<endl;
    cout<<"FbID: "<<fbid<<endl;
    cout<<"================================================\n"<<endl;
}
friend void search(int id);
friend void deleted(int id);
};
//to add contcat
void addContact(Contact c){
    ofstream fout ("contact.dat",ios::app);
    fout.write((char*)&c,sizeof(c));
    fout.close();
    cout<<"Contact added sucessfully"<<endl;
};

//to display all contacts
void dispAll(){
    Contact temp;
    ifstream inf("contact.dat");
    while(1){
        inf.read((char*)&temp,sizeof(temp));
        if(inf.eof()){
            break;
        }else{
            temp.disp();
        }
    }
};

//to search contacts
void search(int id){
    Contact temp;
    ifstream inf("contact.dat");
    while(1){
        inf.read((char*)&temp,sizeof(temp));
        if(inf.eof()){
            break;
        }
        else if(temp.id == id){
            cout<<"Record found:"<<endl;
                temp.disp();
            }
    }
    cout<<"No contact found!!\n";
};


//to delete contact
void deleted(int id){
    Contact temp;
    ifstream inf("contact.dat");
    inf.read((char*)&temp,sizeof(temp));
    while(1){
        if(inf.eof()){
            break;
        }
        if(temp.id == id){

        }
    }
};