#include<iostream>
# include<string>
# include<vector>
# include<list>
using namespace std;


void name();
void menu();
void febonaci();
void showFeb(vector<int>feb, list<int>xlist); //int * xarray, int length);




class PointerKing
{
private:
    char charvar;
    double doublevar;
    int intvar;
    char* charpointer;
    double* doublepointer;
    int*intpointer;
public:
    PointerKing()
    {
        charvar = NULL;
        doublepointer = NULL;
        intpointer = NULL;
    }
    void setcharptr(char* newvalue);
    void setdoubleptr(double * newvalue);
    void setintegerptr( int * newvalue);
    void showvalue();
};





int main()
{
    name();
    menu();
    
    return 0;
    
}

void name()
{
    cout << "Priyanka\n" << "# Projet : 4\n" << "Date : October 27, 2017 \n" << "=======================\n";
}

void menu()
{
    
    
    bool Quit;
    Quit = false;
    PointerKing object;
    
    while (!Quit)
    {
        cout << "1.Test Container" << "\n";
        cout << "2.Test Pointer" << "\n";
        cout << "3.Quit" << "\n";
        string Answer;
        cin >> Answer;
        int choice;
        choice = atoi(Answer.c_str());
        //int xarray[20];
        switch (choice)
        {
            case 1:
                febonaci();
                showFeb(feb, xlist);//,xarray, 20);
                break;
            case 2:
                
                break;
            case 3:
                Quit = true;
                break;
                
            default:
                cout << "Please enter a valid menu\n";
                break;
        }
    }
    
}
void febonaci()
{
    vector<int>feb = {};
    list<int>xlist = {};
    int xarray[20];
    
    for (int i =0; i<2; i++)
    {
        feb.push_back(i);
        xlist.push_back(i);
        xarray[i]=i;
        
    }
    int x = 0;
    int y = 1;
    for (int i = 2;i<20;i++)
    {
        int z = x + y;
        x = y;
        y = z;
        feb.push_back(z);
        xlist.push_back(z);
        //xarray[i] = z;
        
        
    }
    
}
void showFeb(vector<int>feb, list<int>xlist) //int * xarray, length)
{
    cout<<"Vector : ";
    for(int temp: feb)
    {
        cout<<","<<temp<<"\n";
    }
    cout<<"\n";
    
    cout<<"List : ";
    for(int temp2: xlist)
    {
        cout<<","<<temp2<<"\n";
    }
    cout<<"\n";
    
    //cout<<"xarray : ";
    //for(int i = 0; i<length;i++)
    //{
    //  cout<< xarray[i];
    //}
    cout<<"\n";
    
    
}












