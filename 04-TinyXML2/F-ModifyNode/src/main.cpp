#include <iostream>
#include "tinyxml2.h"

int main() {
    // 创建XML文档对象
    tinyxml2::XMLDocument doc;

    // 加载XML文件
    if (doc.LoadFile("example.xml") == tinyxml2::XML_SUCCESS) {
        // 获取根节点
        tinyxml2::XMLElement* root = doc.RootElement();

        // 根据节点名字查找要修改的节点
        tinyxml2::XMLElement* nodeToModify = root->FirstChildElement("Child");

        if (nodeToModify) {
            // 修改节点的名字和文本
            nodeToModify->SetName("NewName");
            nodeToModify->SetText("NewText");

            // 保存修改后的XML文档
            if (doc.SaveFile("example_modified.xml") == tinyxml2::XML_SUCCESS) {
                std::cout << "节点修改成功，并保存修改后的XML文件。" << std::endl;
            } else {
                std::cout << "修改XML文件失败。" << std::endl;
            }
        } else {
            std::cout << "未找到要修改的节点。" << std::endl;
        }
    } else {
        std::cout << "加载XML文件失败。" << std::endl;
    }

    return 0;
}
