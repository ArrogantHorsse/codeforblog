#include <iostream>
#include "tinyxml2.h"

int main() {
    // 创建XML文档对象
    tinyxml2::XMLDocument doc;

    // 加载XML文件
    if (doc.LoadFile("example.xml") == tinyxml2::XML_SUCCESS) {
        // 获取根节点
        tinyxml2::XMLElement* root = doc.RootElement();

        // 根据节点名字查找要删除的节点
        tinyxml2::XMLElement* nodeToDelete = root->FirstChildElement("Child");

        if (nodeToDelete) {
            // 删除节点
            root->DeleteChild(nodeToDelete);

            // 保存修改后的XML文档
            if (doc.SaveFile("example_modified.xml") == tinyxml2::XML_SUCCESS) {
                std::cout << "节点删除成功，并保存修改后的XML文件。" << std::endl;
            } else {
                std::cout << "保存XML文件失败。" << std::endl;
            }
        } else {
            std::cout << "未找到要删除的节点。" << std::endl;
        }
    } else {
        std::cout << "加载XML文件失败。" << std::endl;
    }

    return 0;
}
