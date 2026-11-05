#include <iostream>
#include <fstream>
#include <cstdio>
using namespace std;

int main()
{
    ofstream out("grades.txt");

    int x;

    for(int i = 0; i < 5; i++)  // Âﬂ » 5 œ—Ã«  ›Ì «·„·›
    {
        cout << "Enter grade: ";
        cin >> x;
        out << x << endl;
    }

    out.close();

    ifstream in("grades.txt"); // „·› ··ﬁ—«¡Â

    cout << "\nGrades before deletion:\n";

    while(in >> x) // Âﬁ—« «·«—ﬁ«„ «·Ì «‰« œŒ· Â«
    {
        cout << x << endl; // «ÿ»⁄ «·«—ﬁ«„
    }

    in.close();

    int del;

    cout << "\nEnter grade to delete: ";
    cin >> del; // «œŒ· «·—ﬁ„ «·Ì ⁄«Ê“  Õ–›Â

    in.open("grades.txt");
    ofstream temp("temp.txt");
//Â⁄„· „·› „Êﬁ  «Œ“‰ ›ÌÂ «·œ—ÃÂ «·€Ì— „ÿ·Ê»Â
    while(in >> x)
    {
        if(x != del)
        {
            temp << x << endl;
        }
    }

    in.close();
    temp.close();

    if(remove("grades.txt") == 0 && rename("temp.txt", "grades.txt") == 0)
        //»Õ–› «·ﬁœÌ„ Ê«€Ì— «”„ «·„·› ⁄‘«‰ «Œ·Ì «·„·› «·ÃœÌœ „ﬂ«‰ «·ﬁœÌ„
    {
        cout << "\nGrade deleted successfully!\n";
    }
    else
    {
        cout << "\nError replacing file!\n";
    }

    in.open("grades.txt");

    cout << "\nGrades after deletion:\n";

    while(in >> x)
    {
        cout << x << endl;
    }

    in.close();

    return 0;
}
