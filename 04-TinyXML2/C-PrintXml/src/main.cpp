#include <iostream>
#include "tinyxml2.h"

int main() {
    tinyxml2::XMLDocument doc;
    doc.LoadFile("example.xml");  // 加载XML文档

    tinyxml2::XMLPrinter printer;
    doc.Print(&printer);  // 使用Printer打印XML文档

    std::cout << printer.CStr() << std::endl;  // 输出打印结果

    return 0;
}
