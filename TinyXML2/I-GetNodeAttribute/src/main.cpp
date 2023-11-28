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
            // 获取名为name的参数值
            const char* attrNameValue = firstNode->Attribute("name");
            if (!attrNameValue) {
                std::cout << "Failed to retrieve parameter attribute." << std::endl;
                return 0;
            }
            std::cout << "Parameter name value: " << attrNameValue << std::endl;
            // 遍历获取节点的所有参数
            const tinyxml2::XMLAttribute *attr = firstNode->FirstAttribute();
            while (attr) {
                std::string attrName = attr->Name();
                std::string attrValue = attr->Value();
                printf("param name is: %s, param value is: %s\n", attrName.c_str(), attrValue.c_str());
                attr = attr->Next();
            }
        } else {
            std::cout << "未找到节点。" << std::endl;
        }
    } else {
        std::cout << "加载XML文件失败。" << std::endl;
    }
    return 0;
}
