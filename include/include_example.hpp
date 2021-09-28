#ifndef _EXAMPLE_HPP_
#define _EXAMPLE_HPP_

#include <chrono>

#include <rclcpp/rclcpp.hpp>

namespace ros2_examples
{
class IncludeExample : public rclcpp::Node {

public:
  IncludeExample(const rclcpp::NodeOptions&);
};
}  // namespace ros2_examples

#endif
