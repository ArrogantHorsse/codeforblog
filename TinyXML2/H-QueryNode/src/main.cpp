#include <iostream>
#include "tinyxml2.h"

int main() {
    // 创建XML文档对象
    tinyxml2::XMLDocument doc;

    // 加载XML文件
    if (doc.LoadFile("example.xml") == tinyxml2::XML_SUCCESS) {
        // 获取根节点
        tinyxml2::XMLElement* root = doc.RootElement();

        // 获取根节点下的第一个子节点
        tinyxml2::XMLElement* firstNode = root->FirstChildElement();

        if (firstNode) {
            // 获取节点的名字
            std::string nodeName = firstNode->Name();
            printf("node name is %s\n", nodeName.c_str());

            // 获取节点的内容文本值
            std::string nodeConrtext = firstNode->GetText();
            printf("node text is %s\n", nodeConrtext.c_str());
        } else {
            std::cout << "未找到节点。" << std::endl;
        }
    } else {
        std::cout << "加载XML文件失败。" << std::endl;
    }
    return 0;
}
