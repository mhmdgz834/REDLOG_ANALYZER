#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
    cout<<"==========================="<<endl;
    cout<<"===== REDLOG ANALYZER ====="<<endl;
    cout<<"==========================="<<endl;

    //int line_int =0;
    int sudo_count =0;
    int su_count =0;
    int root_count =0;
    int download_count =0;
    int install_count =0;
    string file_user ;
    string line_string ;
    ifstream File;

    cout<<"write the name file : ";
    cin>>file_user;
    File.open(file_user);
    
    if (File.is_open())
    {
        
        cout<<"this file is here and read this file :)"<<endl;
    }
    else
    {
        cout<<"this file is not here try agine :("<<endl;
        return 1;
    }

    while (getline(File , line_string))
    {

    if (line_string.find("sudo") != string::npos)
        sudo_count++;

    if (line_string.find(" su ") != string::npos || line_string.find(" su\n ") != string::npos || line_string.find(" ;su ") != string::npos)
        su_count++;

    if (line_string.find("root") != string::npos)
        root_count++;

    if (line_string.find("wget") != string::npos || line_string.find("curl") != string::npos)
        download_count++;

    if (line_string.find("apt install") != string::npos)
        install_count++;

    }
    cout<<endl;

cout << "===== REDLOG ANALYZER REPORT =====" << endl;
cout << "SUDO       : " << sudo_count << endl;
cout << "SU         : " << su_count << endl;
cout << "ROOT       : " << root_count << endl;
cout << "DOWNLOAD   : " << download_count << endl;
cout << "INSTALL    : " << install_count << endl;
    

}
