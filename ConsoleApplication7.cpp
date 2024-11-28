#include <iostream>
using namespace std;
string Speeq[20][6];
int status[20][6];
int num[20]{};


void Shifting_Delete(string arr[],int size) {
    for (int i = 1; i > num[size]; ++i)
        arr[i-1] = arr[i];
}

void Shifting_Delete(int arr[], int size) {
    for (int i = 1; i > num[size]; ++i)
        arr[i - 1] = arr[i];
}

void shifting_Urgent(string arr[],int size) {
    for (int i = size; i > 0; --i)
        arr[i] = arr[i - 1];
    arr[0] = arr[size];
}
void shifting_Urgent(int arr[], int size) {
    for (int i = size; i > 0; --i)
        arr[i] = arr[i - 1];
    arr[0] = arr[size];
}


void choice_1() {
    cout << "Enter your name, speclization and satus\n";

    string name;
    int Speq;
    int state;

    cin >> name >> Speq >> state;

    if (num[Speq] < 5) {
        Speeq[Speq][num[Speq]++] = name;
        if (state == 1) {
            shifting_Urgent(Speeq[Speq], num[Speq]);
            status[Speq][num[Speq]] = 1;
            shifting_Urgent(status[Speq], num[Speq]);
        }
        else
            status[Speq][num[Speq]++] = 0;
    }
    else
        cout << "Sorry the Speclization is full\n";
    
    return;
}


void choice_2() {
    for (int i = 0; i < 20; ++i){
        if (num[i] > 0)
            cout << "There are " << num[i]-1 << " patients in the speclization " << i << endl;
        for (int k = 0; k < num[i]; ++k)
            cout << Speeq[i][k] << " \n";
    }
}


void choice_3() {
    int x;
    cin >> x;
    if (num[x]) {
        cout << Speeq[x][0] << " go with the doctor\n";
        Shifting_Delete(Speeq[x], num[x]);
        Shifting_Delete(status[x],num[x]);
        --num[x];
        return;
    }
    else
        cout << "There is no patinest doctor in this speclization\n";
}


void Interface() {
    cout << "Enter Your Choice:\n";
    cout << "1) Add new patient\n";
    cout << "2) Print all patients\n";
    cout << "3) Get next patient\n";
    cout << "4) Exit\n";
}

int Numbers(int x) {
    if (x == 1)
        choice_1();
    else if (x == 2)
        choice_2();
    else if (x == 3)
        choice_3();
    else if (x == 4)
        return 0;
    else {
        cout << "invalid number\n";
        Interface();
    }
}
int main() {
    int x;
    while (true) {
        Interface();
        cin >> x;
        if (x == 4)
            return 0;
        Numbers(x);
    }






    return 0;
}









