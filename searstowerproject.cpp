#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int choice;

    // The menu output. Don't modify this, so that it outputs exactly as expected
    cout << "Program 1: Sears Tower" << endl;
    cout << "Which option would you like?" << endl;
    cout << "  1. Display original graphic" << endl;
    cout << "  2. Display Sears Tower" << endl;
    cin>>choice;
    cout << "Your choice: ";
    cout<<choice<<endl;

    // The prompt for entering thesize, if the user chooses the tower
    //sword art
    if(choice==1){
        cout<<"      ---"<<endl;
       for(int i=0;i<5;i++){
        cout<<"     |   |"<<endl;
       }
       cout<<" -------------"<<endl;
       cout<<"/              \\"<<endl;
       cout<<"\\              /"<<endl;
       cout<<" -------------"<<endl;
        for(int i=0;i<8;i++){
            cout<<"     |   |"<<endl;
        }
        cout<<"     \\   /"<<endl;
        cout<<"      \\ /"<<endl;
        cout<<"       -"<<endl;;
    }
    //Choice 2
    else{
    int size;
    cout << "What is the size of the Sears Tower? ";
    cin>>size;

    string top = "";
    string window="";
    string space="";
    //Sets the length of each according to the size
    for(int i=0;i<size;i++){
        top+="_";
    }
    for(int i=0;i<size;i++){
        window+="#";
    }

    for(int i=0;i<size;i++){
        space+=" ";
    }
    
    string towerLength=space+"|"+space+"|";
    string towerLength2="|"+space+"|";
    //First Layer
    cout<<space<<"  "<<top<<endl;
    cout<<space<<" |"<<window<<"|"<<endl;
    for(int i=2;i<size;i++){
        cout<<" "<<towerLength<<endl;
    }

    //Second Layer
    cout<<" "<<top<<"|"<<space<<"|";
    cout<<"\n|"<<window<<"|"<<window<<"|"<<endl;
    for(int i=2;i<size;i++){
        cout<<towerLength2<<space<<"|"<<endl;
    }

    //Third Layer
    cout<<"|"<<space<<"|"<<space<<"|"<<top;
    cout<<"\n|"<<window<<"|"<<window<<"|"<<window<<"|"<<endl;
    //Subtracted by 1 to account for the side that already exists
    for(int i=0;i<(size*2)-1;i++){
        cout<<towerLength2<<space<<"|"<<space<<"|"<<endl;
    }

    //Creates the base
    string baseLength=space+space+space;
    
    //Added 4 to account for the 4 | in the bottom layer
    int len=baseLength.length()+4;
    for(int i=0;i<len;i++){
        cout<<"=";
    }
    }
    return 0;
}
