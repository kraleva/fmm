//
// Created by Can Yang on 2020/4/1.
//

#ifndef FMM_SRC_MM_FMM_FMM_APP_CONFIG_HPP_
#define FMM_SRC_MM_FMM_FMM_APP_CONFIG_HPP_

#include "config/gps_config.hpp"
#include "config/network_config.hpp"
#include "config/result_config.hpp"
#include "mm/fmm/fmm_algorithm.hpp"

namespace FMM{
namespace MM{
/**
 * Configuration class fmm command line program
 */
class FMMAppConfig
{
 public:
  FMMAppConfig(int argc, char **argv);
  void load_xml(const std::string &file);
  void load_arg(int argc, char **argv);
  bool validate() const;
  void print() const;
  static void print_help();
  CONFIG::NetworkConfig network_config;
  CONFIG::GPSConfig gps_config;
  CONFIG::ResultConfig result_config;
  FastMapMatchConfig fmm_config;
  // UBODT configurations
  std::string ubodt_file;
  bool use_omp = false;
  bool help_specified = false;
  // 0-trace,1-debug,2-info,3-warn,4-err,5-critical,6-off
  int log_level = 2;
  int step = 100;
}; // FMMAppConfig
}
}


#endif //FMM_SRC_MM_FMM_FMM_APP_CONFIG_HPP_