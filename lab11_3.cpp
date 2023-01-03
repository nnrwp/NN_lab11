#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

int main(){
    int num = 0;
    double sum = 0, sum2 = 0;
    ifstream source("score.txt");
    string text;
    while(getline(source,text)){
        sum += stod(text);
        sum2 += pow(stod(text),2);
        num++;
    }
    source.close();
    double mean, SD;
    mean = sum/num;
    SD = sqrt((sum2/num)-pow(mean,2));
    cout << "Number of data = " << num << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << SD;
}