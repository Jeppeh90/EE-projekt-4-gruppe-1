# THIS FILE IS AUTOMATICALLY GENERATED
# Project: \\Mac\iCloud\SKOLE\4. Semester\PRJ4 - Semesterprojekt 4\Maaleenhed\Spaendingsmaaler uden FFT\Maaler.cydsn\Maaler.cyprj
# Date: Thu, 06 Apr 2017 08:16:38 GMT
#set_units -time ns
create_clock -name {ADC_DelSig_1_Ext_CP_Clk(routed)} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/dclk_0}]]
create_clock -name {CyILO} -period 1000000 -waveform {0 500000} [list [get_pins {ClockBlock/ilo}] [get_pins {ClockBlock/clk_100k}] [get_pins {ClockBlock/clk_1k}] [get_pins {ClockBlock/clk_32k}]]
create_clock -name {CyIMO} -period 333.33333333333331 -waveform {0 166.666666666667} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyPLL_OUT} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/pllout}]]
create_clock -name {CyMASTER_CLK} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/clk_sync}]]
create_generated_clock -name {CyBUS_CLK} -source [get_pins {ClockBlock/clk_sync}] -edges {1 2 3} [list [get_pins {ClockBlock/clk_bus_glb}]]
create_clock -name {ADC_DelSig_1_Ext_CP_Clk} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/dclk_glb_0}]]
create_generated_clock -name {ADC_DelSig_1_theACLK} -source [get_pins {ClockBlock/clk_sync}] -edges {1 9 19} [list [get_pins {ClockBlock/aclk_glb_0}]]
create_clock -name {ADC_DelSig_1_theACLK(fixed-function)} -period 375 -waveform {0 187.5} [get_pins {ClockBlock/aclk_glb_ff_0}]

set_false_path -from [get_pins {__ONE__/q}]

# Component constraints for \\Mac\iCloud\SKOLE\4. Semester\PRJ4 - Semesterprojekt 4\Maaleenhed\Spaendingsmaaler uden FFT\Maaler.cydsn\TopDesign\TopDesign.cysch
# Project: \\Mac\iCloud\SKOLE\4. Semester\PRJ4 - Semesterprojekt 4\Maaleenhed\Spaendingsmaaler uden FFT\Maaler.cydsn\Maaler.cyprj
# Date: Thu, 06 Apr 2017 08:16:33 GMT
