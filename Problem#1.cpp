/*#include <iostream> // هاد حلي قبل ما شوف الحل 

using namespace std;

void PrintHedar(string Messge)
{
    cout << Messge;
}
void x()
{
    for(short i = 0; i <= 10; i++)
    {
        cout<< i << "   ";
    }
}

void MultipliactionTableFrom1to10()
{
    for(short i = 1; i <= 10; i++)
    {
        cout << "\t\n"<< i << " |";
    

        for(short N = 1; N <=10; N++)
        {
            cout <<i * N << "  ";
        }
    }
}
int main()
{
    PrintHedar("\t\tMultipliaction Table From 1 to 10\t\t");
    PrintHedar("\t\t");
    x();
    PrintHedar("\n__________________________________________");
    MultipliactionTableFrom1to10();
}*/


#include <iostream>

using namespace std;

void PrintHedar()
{
    cout << "\t\t\tMultipliaction Table From 1 to 10\t\t";
    cout << "\n\n\t";
    for(short i = 1; i <= 10; i++)
    {
    cout << i << "\t";
    }
    cout << "\n____________________________________________________________________________________\n";
}

string ColumSperator(short i)
{
    if(i < 10)
    return "   |";
    else
    return "  |";
    
}

void PrintMultipliactionTableFrom1to10()
{
    PrintHedar();
    for (short i = 1; i <= 10; i++)
    {
        cout << "  " << i << ColumSperator(i) << "\t";
        for(short j = 1; j <= 10; j++)
        {
            cout << i * j << "\t";
        }
        cout <<endl;
    }
}

int main()
{
    //PrintHedar(); // PrintMultipliactionTableFrom1to10()فيني سوي هيك بس لازم شيلها من بروسيجر ال 
    PrintMultipliactionTableFrom1to10();
}