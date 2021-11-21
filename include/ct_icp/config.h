#ifndef CT_ICP_CONFIG_H
#define CT_ICP_CONFIG_H

#include <ct_icp/ct_icp.h>
#include <ct_icp/odometry.h>

#include <yaml-cpp/yaml.h>

namespace ct_icp {

    // Returns CTICPOptions from a YAML::Node
    ct_icp::CTICPOptions yaml_to_ct_icp_options(YAML::Node& node);

    // Reads CTICPOptions from a yaml file on disk
    ct_icp::CTICPOptions read_ct_icp_options(const std::string& yaml_path);

    // Returns an OdometryOptions from a YAML::Node
    ct_icp::OdometryOptions yaml_to_odometry_options(YAML::Node& node);

    // Reads a ct_icp::OdometryOptions from disk
    ct_icp::OdometryOptions read_odometry_options(const std::string& yaml_path);

}

#endif //CT_ICP_CONFIG_H