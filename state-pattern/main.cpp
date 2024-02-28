/**
 * @author: Au Doan Ngoc
 * @date: Feb 27, 2024
 * @brief: State pattern example
*/

#include "base_class.h"

int main()
{
    TrafficLight tf;

    tf.change();
    tf.setState(new YellowState);
    tf.change();
    tf.setState(new GreenState);
    tf.change();

    return 0;
}
