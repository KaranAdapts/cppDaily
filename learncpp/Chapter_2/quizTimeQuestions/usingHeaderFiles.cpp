#include "inputOutput.h"

int main(){

    int valueX{readNumber()};
    int valueY{readNumber()};

    writeAnswer(valueX + valueY);

    return 0;

}