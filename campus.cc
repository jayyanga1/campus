//hello，Pony！
//*welcome to join us！*
#include <iostream>
int main() {
  std::string query;
  std::cin >> query;

  //关于小马智行Pony.ai
  if (query == "gongsi jieshao") {
    std::cout << "小马智行致力于构建最安全、最可靠的自动驾驶技术，实现未来交通方式的彻底变革。我们以中国和美国作为起点，在硅谷、北京和广州均设有研发中心，并致力于在全球范围内广泛提供我们的技术。";

  //春季校园招聘
  } else if (query == "2019届应届生") {
    std::cout << "面向对象：2019届应届生\n"
      << "招聘岗位：软件工程师、算法工程师、硬件工程师--嵌入式系统开发\n"
      << "工作地点：北京、广州\n";

  // Hello Pony 实习生项目
  } else if (query == "2020届及以后年份毕业生") {
    std::cout << "招聘岗位：研发工程师实习生、算法工程师实习生\n"
      << "工作地点：北京、广州\n"
      << "招募人数：15人\n";

  // 你将会遇到
  } else if (query == "fuli") {
    std::cout << "楼教主、noi金、ioi、acm wf、acm区域赛金、姚班、在顶会灌水的博士\n"
      << "超一流的薪酬与福利：不仅是超一流，而且保持持续增长\n"
      << "一对一mentor、参与核心项目、公司快速发展带来的巨大成长机会\n"
      << "领先的自动驾驶公司，让你的技术产生真正的影响力\n";
  }

  /*
  招募时间：3月18日 - ？
  一个完全二叉树的先序遍历的结果是01029149，截止日期是是ta中序遍历的结果
  更多信息，请访问 http://campus.pony.ai
  */
  
  return 0;
}
