//
// Created by adam on 18-9-21.
//

#include "pcl_test_core.h"

int main(int argc, char **argv)
{
    ros::init(argc, argv, "pcl_test");

    ros::NodeHandle nh;

    PclTestCore core(nh);
    // core.Spin();
    return 0;
}