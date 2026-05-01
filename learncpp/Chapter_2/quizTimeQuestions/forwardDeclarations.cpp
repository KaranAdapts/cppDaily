/* learnt that there's no need for iostream over here, 
since it's not itself using any input output operations */

int readNumber();
void writeAnswer(int addResult);

int main(){

    int valueX{readNumber()};
    int valueY{readNumber()};

    writeAnswer(valueX + valueY);

    return 0;

}