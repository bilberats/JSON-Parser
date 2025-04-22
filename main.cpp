#include <iostream>
#include <cstring>
#include <vector>
#include "JSON.h"



int main() {
    std::string s1 = R"({"test":10,"liste":{"x":2,"y":3},"autreliste":[{"s":4,"d":4},{"s":4,"d":3},{"s":4,"d":0}],"oue":2})";

    JSON test1 = JSON(s1);
    //JSON test1 = JSON();
    test1.parseFile("C:\\Fernand\\programmation\\c++\\JSON_parser\\scene.json");
    test1.printContent(0);
    std::cout<<"\n"<<test1["shapes"][0]["center"]["x"].getValue();

    /*
    std::vector<jsonCont> contained;

    int containedLength=0;
    std::string text="bonjour";
    bool isOnlyValue=true;
    std::string name="ok";


    jsonCont newCont;
    std::cout<< "new JSON created: "<<text<<std::endl;

    JSON *newJson = new JSON(text,isOnlyValue);
    newCont.j = newJson;
    newCont.name = name;
    contained.push_back(newCont);
    std::cout<<contained[0].name;
    */

    return 0;
}
