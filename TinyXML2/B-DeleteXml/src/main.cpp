#include <iostream>
#include "tinyxml2.h"

int main() {
    const char* filename = "example.xml";
    // 创建一个 XML 文档对象
    tinyxml2::XMLDocument doc;
    // 加载 XML 文件
    tinyxml2::XMLError result = doc.LoadFile(filename);
    if (result == tinyxml2::XML_SUCCESS) {
        // 删除 XML 文件
        std::remove(filename);
        std::cout << "XML 文件删除成功。" << std::endl;
    } else {
        std::cout << "无法加载 XML 文件：" << result << std::endl;
    }

    return 0;
}
