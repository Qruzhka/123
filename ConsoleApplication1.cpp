
#include <iostream>
#include <ctime>
#include <math.h>
using namespace std;

int main()
{
        double days;

        double i, j, p;

        double FirstYear;

        double LastYear;

        double temp;

        cout << "print days" << endl;

        cin >>  days;
        
        cout << "print first year";

        cin >> FirstYear;

        cout << "print last year";

        cin >> LastYear;

        temp = fmod(days, 1);


        for (   ; FirstYear <= LastYear; FirstYear = FirstYear + temp)
        { 
            /*i = fmod(FirstYear, 4);
            j = fmod(FirstYear, 100);
            k = fmod(FirstYear, 400);*/


            //if (i == 0) {
            //    if (j == 0) {
            //        if (k == 0)

            //            cout << FirstYear << " is a leap year." << endl;

            //        else;

            //            /*cout << FirstYear << " - " << endl;*/
            //    }
            //    else
            //        cout << FirstYear << " is a leap year." << endl;
            //}
            //else;
            //    /*cout << FirstYear << " - " << endl;*/



            i = fmod(FirstYear, 1);

            FirstYear = round(FirstYear * 100) / 100;

            if (i == 0)
            {
                cout << FirstYear << " is a leap year. " << endl;
            }
            else
                cout << FirstYear << " - " << endl;
            
        }
      

        return 0;
}

        

         
    


