#include <rclcpp/rclcpp.hpp>
#include <sstream>

namespace ros2_examples
{

class Example : public rclcpp::Node {
public:
  Example(rclcpp::NodeOptions options);
};

Example::Example(rclcpp::NodeOptions options) : Node("example", options) {
  bool unused;
  bool used_but_uninitialized;
  if (used_but_uninitialized){
    RCLCPP_INFO(this->get_logger(), "[Example]: something");
  }
  RCLCPP_INFO(this->get_logger(), "[Example]: initialized");
}


}  // namespace ros2_examples

#include <rclcpp_components/register_node_macro.hpp>
RCLCPP_COMPONENTS_REGISTER_NODE(ros2_examples::Example)
