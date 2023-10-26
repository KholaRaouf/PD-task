#include <iostream>
using namespace std;

void period(int days);

int main()
{
    int days;
    cout << "Enter Number of days you visited Hospital: ";
    cin >> days;
    period(days);
}
void period(int days)
{
    int patients = 0;
    int treatedPatients = 0;
    int unTreatedPatients = 0;
    int doctor = 7;
    for (int i = 1; i <= days; i++)
    {
        cout << "Number of patients who visited hospital on Day " << i << ": ";
        cin >> patients;

        if (i % 3 != 0)
        {

            if (patients < doctor)
            {
                treatedPatients += patients;
            }
            else
            {
                treatedPatients += doctor;
                unTreatedPatients = unTreatedPatients + (patients - doctor);
            }
        }
            if (i % 3 == 0 && treatedPatients >= unTreatedPatients)
            {
                if (patients < doctor)
                {
                    treatedPatients += patients;
                }
                else
                {
                    treatedPatients += doctor;
                    unTreatedPatients = unTreatedPatients + (patients - doctor);
                }
            }
                if (i % 3 == 0 && treatedPatients < unTreatedPatients)
                {
                    //
                    doctor++;

                    if (patients < doctor)
                    {
                        treatedPatients += patients;
                    }
                    else
                    {
                        treatedPatients += doctor;
                        unTreatedPatients = unTreatedPatients + (patients - doctor);
                    }
                    // }else{

                    //     if(patients <= 7){
                    //         treatedPatients+=patients;
                    //     }else{
                    //         treatedPatients+=7;
                    //         unTreatedPatients = unTreatedPatients + (patients-7);
                }
            
        }
    
    cout << "Treated Patients: " << treatedPatients << endl;
    cout << "Untreated Patients: " << unTreatedPatients;
}
