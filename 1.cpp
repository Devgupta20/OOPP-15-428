//wap to store details of a student name ,roll no., branch,section and marks of 5 subjects .show the details including total marks
// and percentage .apply modular programming technique

#include <iostream>
using namespace std;
void input(string &name,string &section,string &branch,int &roll,int marks[]){
    cout<<"Enter Name : ";
    cin>>name;
    cout<<"Enter Section : ";
    cin>>section;
    cout<<"Enter Branch : ";
    cin>>branch;
    cout<<"Enter roll no : ";
    cin>>roll;
    for(int i=0;i<5;i++){
        cout<<" enter marks of "<<i+1<<":";
        cin>>marks[i];
    }
}
void calculate(int marks[],int &total,float &percentage){
    total=0;
    for(int i=0;i<5;i++){
        total+=marks[i];
    }
    percentage=total/5.0;
}

void show(string name,string section,string branch,int roll,int marks[],int total,float percentage){
    cout<<name<<endl;
    cout<<section<<endl;
    cout<<branch<<endl;
    cout<<roll<<endl;
    for(int i=0;i<5;i++){
        cout<<"Marks of subject "<<i+1<<": "<<marks[i]<<endl;
    }
    cout<<"Total Marks: "<<total<<endl;
    cout<<"Percentage: "<<percentage<<endl;
}
int main(){
    string name,section,branch;
    int roll,marks[5];
    float percentage;
    int total;
    input(name,section,branch,roll,marks);
    calculate(marks,total,percentage);
    show(name,section,branch,roll,marks,total,percentage);
    return 0;
}

