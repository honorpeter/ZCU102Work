webtalk_init -webtalk_dir /home/guan/Xilinx/Project/DMAtest/DMAtest.sdk/webtalk
webtalk_register_client -client project
webtalk_add_data -client project -key date_generated -value "2018-09-21 21:54:39" -context "software_version_and_target_device"
webtalk_add_data -client project -key product_version -value "SDK v2018.2" -context "software_version_and_target_device"
webtalk_add_data -client project -key build_version -value "2018.2" -context "software_version_and_target_device"
webtalk_add_data -client project -key os_platform -value "amd64" -context "software_version_and_target_device"
webtalk_add_data -client project -key registration_id -value "211561961_0_0_402" -context "software_version_and_target_device"
webtalk_add_data -client project -key tool_flow -value "SDK" -context "software_version_and_target_device"
webtalk_add_data -client project -key beta -value "false" -context "software_version_and_target_device"
webtalk_add_data -client project -key route_design -value "NA" -context "software_version_and_target_device"
webtalk_add_data -client project -key target_family -value "NA" -context "software_version_and_target_device"
webtalk_add_data -client project -key target_device -value "NA" -context "software_version_and_target_device"
webtalk_add_data -client project -key target_package -value "NA" -context "software_version_and_target_device"
webtalk_add_data -client project -key target_speed -value "NA" -context "software_version_and_target_device"
webtalk_add_data -client project -key random_id -value "d0mhvbfp39dteru2b0s4birfup" -context "software_version_and_target_device"
webtalk_add_data -client project -key project_id -value "2018.2_8" -context "software_version_and_target_device"
webtalk_add_data -client project -key project_iteration -value "8" -context "software_version_and_target_device"
webtalk_add_data -client project -key os_name -value "Ubuntu" -context "user_environment"
webtalk_add_data -client project -key os_release -value "Ubuntu 16.04.5 LTS" -context "user_environment"
webtalk_add_data -client project -key cpu_name -value "Intel(R) Core(TM) i5-4200U CPU @ 1.60GHz" -context "user_environment"
webtalk_add_data -client project -key cpu_speed -value "2300.000 MHz" -context "user_environment"
webtalk_add_data -client project -key total_processors -value "1" -context "user_environment"
webtalk_add_data -client project -key system_ram -value "8.249 GB" -context "user_environment"
webtalk_register_client -client sdk
webtalk_add_data -client sdk -key uid -value "1537525390000" -context "sdk\\\\hardware/1537525390000"
webtalk_add_data -client sdk -key isZynq -value "false" -context "sdk\\\\hardware/1537525390000"
webtalk_add_data -client sdk -key isZynqMP -value "true" -context "sdk\\\\hardware/1537525390000"
webtalk_add_data -client sdk -key Processors -value "7" -context "sdk\\\\hardware/1537525390000"
webtalk_add_data -client sdk -key VivadoVersion -value "2018.2" -context "sdk\\\\hardware/1537525390000"
webtalk_add_data -client sdk -key Arch -value "zynquplus" -context "sdk\\\\hardware/1537525390000"
webtalk_add_data -client sdk -key Device -value "xczu9eg" -context "sdk\\\\hardware/1537525390000"
webtalk_add_data -client sdk -key IsHandoff -value "true" -context "sdk\\\\hardware/1537525390000"
webtalk_add_data -client sdk -key os -value "NA" -context "sdk\\\\hardware/1537525390000"
webtalk_add_data -client sdk -key apptemplate -value "NA" -context "sdk\\\\hardware/1537525390000"
webtalk_add_data -client sdk -key RecordType -value "HWCreation" -context "sdk\\\\hardware/1537525390000"
webtalk_add_data -client sdk -key uid -value "1537526162000" -context "sdk\\\\bsp/1537526162000"
webtalk_add_data -client sdk -key hwid -value "1537525390000" -context "sdk\\\\bsp/1537526162000"
webtalk_add_data -client sdk -key os -value "device_tree" -context "sdk\\\\bsp/1537526162000"
webtalk_add_data -client sdk -key apptemplate -value "null" -context "sdk\\\\bsp/1537526162000"
webtalk_add_data -client sdk -key RecordType -value "BSPCreation" -context "sdk\\\\bsp/1537526162000"
webtalk_add_data -client sdk -key uid -value "NA" -context "sdk\\\\bsp/1537538079365"
webtalk_add_data -client sdk -key RecordType -value "ToolUsage" -context "sdk\\\\bsp/1537538079365"
webtalk_add_data -client sdk -key BootgenCount -value "0" -context "sdk\\\\bsp/1537538079365"
webtalk_add_data -client sdk -key DebugCount -value "0" -context "sdk\\\\bsp/1537538079365"
webtalk_add_data -client sdk -key PerfCount -value "0" -context "sdk\\\\bsp/1537538079365"
webtalk_add_data -client sdk -key FlashCount -value "0" -context "sdk\\\\bsp/1537538079365"
webtalk_add_data -client sdk -key CrossTriggCount -value "0" -context "sdk\\\\bsp/1537538079365"
webtalk_add_data -client sdk -key QemuDebugCount -value "0" -context "sdk\\\\bsp/1537538079365"
webtalk_transmit -clientid 3400696882 -regid "211561961_0_0_402" -xml /home/guan/Xilinx/Project/DMAtest/DMAtest.sdk/webtalk/usage_statistics_ext_sdk.xml -html /home/guan/Xilinx/Project/DMAtest/DMAtest.sdk/webtalk/usage_statistics_ext_sdk.html -wdm /home/guan/Xilinx/Project/DMAtest/DMAtest.sdk/webtalk/sdk_webtalk.wdm -intro "<H3>SDK Usage Report</H3><BR>"
webtalk_terminate
