#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
    int  a[100],b[100],c[100],d[100],q,i=0,j=0,k=0,l=0; char nam[100][100],ch,chr;

    ofstream roll1("roll.txt");
    roll1 <<"32,43,54,65,76,87,54,43,32,66,76,43,43,65,43,32,65,53,43,42,42,14,41,14,42,41,42,42,48,57,52";
    roll1.close();
    ofstream roll23("marks1.txt");
    roll23 <<"32,43,54,65,76,87,54,43,32,66,76,43,43,65,43,32,65,53,43,42,42,14,41,14,42,41,42,42,48,57,52";
    roll23.close();
    ofstream roll24("marks2.txt");
    roll24 <<"32,43,54,65,76,87,54,43,32,66,76,43,43,65,43,32,65,53,43,42,42,14,41,14,42,41,42,42,48,57,52";
    roll24.close();
    ofstream name1("name.txt");
    name1 <<"nischal timisna chudamani aashu reason paras nagendra dhamala sumit da daf fsf few fwe fwfwef dfw lado puti mc bc rkc da";
    name1.close();


    ifstream roll("roll.txt");
    ifstream name("name.txt");
    ifstream marks1("marks1.txt");
    ifstream marks2("marks2.txt");
    ofstream doc("doc.txt");


    while(!roll.eof())
    {
        while((ch=roll.get())!=',')
        {
            int x=ch-48;
            q=q*10+x;
        }
        a[i++]=q;cout<<q<<" ";
        roll.get();
    }


    while(!name.eof())
    {

        while((ch=name.get())!=' ')
        {

            chr=chr+ch;
        }
        nam[j++][100]=chr;chr=' ';
        name.get();
    }

    q=0;
     while(!marks1.eof())
    {
        while((ch=marks1.get())!=',')
        {
            int x=ch-48;
            q=q*10+x;
        }
        b[k++]=q;cout<<q<<" ";
        marks1.get();
    }
     q=0;
     while(!marks2.eof())
    {
        while((ch=marks2.get())!=',')
        {
            int x=ch-48;
            q=q*10+x;
        }
        c[l++]=q;cout<<q<<" "<<endl;
        marks1.get();
    }
    doc << "roll\t\tname\t\tmarks1\t\tmarks2"<<endl;
    cout << "roll\t\tname\t\tmarks1\t\tmarks2"<<endl;
    for(int qw=0;qw<100;qw++)
    {
        doc << a[qw]   << "\t\t"  << b[qw] << "\t\t" <<c[qw] << "\t\t"<<d[qw]<<endl;
    }
     for(int qw=0;qw<100;qw++)
    {
        cout<< a[qw]   << "\t\t"  << b[qw] << "\t\t" <<c[qw] << "\t\t"<<d[qw]<<endl;
    }
    roll.close();
    name.close();
    marks1.close();
    marks2.close();

}


