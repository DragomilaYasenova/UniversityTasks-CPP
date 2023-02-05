#include <iostream>

using namespace std;


void convertIntToRN(){
    int num;
    string romanNum;

    cout << "Enter a number: " << endl;
    cin >> num;

    while (num != 0) {
        if (num >= 1000){
            romanNum += "M";
            num -= 1000;
        }
        else if (num >= 900){
            romanNum += "CM";
            num -=900;
        }
        else if (num >= 500){
            romanNum += "D";
            num -= 500;
        }
        else if (num >= 400){
            romanNum += "CD";
            num -= 400;
        }
        else if (num >= 100){
            romanNum += "C";
            num -= 100;
        }
        else if (num >= 90){
            romanNum += "XC";
            num -= 90;
        }
        else if (num >= 50){
            romanNum += "L";
            num -= 50;
        }
        else if (num >= 40){
            romanNum += "XL";
            num -= 40;
        }
        else if (num >= 10){
            romanNum += "X";
            num -= 10;
        }
        else if (num >= 9){
            romanNum += "IX";
            num -= 9;
        }
        else if (num >= 5){
            romanNum += "V";
            num -= 5;
        }
        else if (num >= 4){
            romanNum += "IV";
            num -= 4;
        }
        else if (num >= 1){
            romanNum += "I";
            num -=1;
        }
    }
    cout << "The roman numeral is: " << romanNum << endl;
}

void convertRNToInt() {
    string romanNum;
    int num = 0;

    cout << "Enter roman numeral: ";
    cin >> romanNum;

    romanNum = '0' + romanNum;
    int lastIndex = romanNum.length() - 1;


    for(int i=lastIndex; i>0; i--){

        if(romanNum.at(i) == 'I'){
            num += 1;
        }

        else if(romanNum.at(i) == 'V'){
            if(romanNum.at(i-1) == 'I'){
                num += 4;
                i--	;
            }

            else{
                num += 5;
            }
        }

        else if(romanNum.at(i) == 'X'){
            if(romanNum.at(i-1) == 'I'){
                num += 9;
                i--;
            }
            else{
                num += 10;
            }
        }
        else if(romanNum.at(i) == 'L'){
            if(romanNum.at(i-1) == 'X'){
                num += 40;
                i--;
            }
            else{
                num += 50;
            }
        }
        else if(romanNum.at(i) == 'C'){
            if(romanNum.at(i-1) == 'X'){
                num += 90;
                i--;
            }
            else{
                num += 100;
            }
        }
        else if(romanNum.at(i) == 'D'){
            if(romanNum.at(i-1) == 'C'){
                num += 400;
                i--;
            }
            else{
                num += 500;
            }
        }
        else if(romanNum.at(i) == 'M'){
            if(romanNum.at(i-1) == 'C'){
                num += 900;
                i--;
            }
            else{
                num += 1000;
            }
        }
    }
    cout << "The number is: " << num << endl;
}

void checkNumInInterval(){
    int num, min, max;

    cout << "Enter a MIN value" << endl;
    cin >> min;

    cout << "Enter a MAX value" << endl;
    cin >> max;

    cout << "Enter a number for interval check: " << endl;
    cin >> num;

    if (num >= min && num <= max)
        cout << "Number is in the interval" << endl;
    else
        cout << "Number is not in the interval" << endl;
}

void printEachDigit() {
    int num, digit;

    cout << "Enter a number: " << endl;
    cin >> num;

    while (num != 0) {
        digit = num % 10;
        num = num / 10;
        cout << "The digits are: " << digit << endl;
    }
}

void functionRand(){
    int min, max, randomNum, digit;

    cout << "Enter a MIN value" << endl;
    cin >> min;

    cout << "Enter a MAX value" << endl;
    cin >> max;

    randomNum = rand() % (max-min)+min;
    cout << "Your random number is: " << randomNum << endl;

    while (randomNum != 0){
        if (randomNum < 1000) {
            digit = randomNum % 10;
            randomNum /= 10;
            cout << "The digits are: " << digit << endl;

        }
        else {
            break;
        }
    }
}

int main() {
    cout << "Task 1" << endl;
    convertIntToRN();

    cout << "Task 2" << endl;
    convertRNToInt();

    cout << "Task 3" << endl;
    checkNumInInterval();

    cout << "Task 4" << endl;
    printEachDigit();

    cout << "Task 5 and 6" << endl;
    functionRand();
}