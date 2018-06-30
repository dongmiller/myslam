#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main(int argc, char **argv) {
    std::cout << "Hello, world!" << std::endl;
    ofstream filewrite;
    filewrite.open("./write.txt");
    for(int x=0; x<742; x++)
      filewrite << x <<" "<< "rgb/" << x << ".png"<<" "<<x<<" "<<"depth/"<<x<<".png"<<endl;
      //filewrite << x <<" "<< "rgb/" << setfill('0') << setw(6) << x << ".png"<<" "<<x<<" "<<"depth/"<<setfill('0')<<setw(6)<<x<<".png"<<endl;
    return 0;
}
