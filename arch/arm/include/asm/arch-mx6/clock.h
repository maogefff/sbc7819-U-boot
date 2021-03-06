/*
 * (C) Copyright 2009
 * Stefano Babic, DENX Software Engineering, sbabic@denx.de.
 *
 * Copyright (C) 2014-2016 Freescale Semiconductor, Inc.
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef __ASM_ARCH_CLOCK_H
#define __ASM_ARCH_CLOCK_H

#include <common.h>

#ifdef CONFIG_SYS_MX6_HCLK
#define MXC_HCLK	CONFIG_SYS_MX6_HCLK
#else
#define MXC_HCLK	24000000
#endif

#ifdef CONFIG_SYS_MX6_CLK32
#define MXC_CLK32	CONFIG_SYS_MX6_CLK32
#else
#define MXC_CLK32	32768
#endif

enum mxc_clock {
	MXC_ARM_CLK = 0,
	MXC_PER_CLK,
	MXC_AHB_CLK,
	MXC_IPG_CLK,
	MXC_IPG_PERCLK,
	MXC_UART_CLK,
	MXC_CSPI_CLK,
	MXC_AXI_CLK,
	MXC_EMI_SLOW_CLK,
	MXC_DDR_CLK,
	MXC_ESDHC_CLK,
	MXC_ESDHC2_CLK,
	MXC_ESDHC3_CLK,
	MXC_ESDHC4_CLK,
	MXC_SATA_CLK,
	MXC_NFC_CLK,
	MXC_I2C_CLK,
	MXC_IPU1_LVDS_DI0_CLK,
	MXC_IPU1_LVDS_DI1_CLK,
	MXC_IPU2_LVDS_DI0_CLK,
	MXC_IPU2_LVDS_DI1_CLK,
	MXC_IPU1_DI0_CLK,
	MXC_IPU1_DI1_CLK,
	MXC_IPU2_DI0_CLK,
	MXC_IPU2_DI1_CLK,
};

enum enet_freq {
	ENET_25MHZ,
	ENET_50MHZ,
	ENET_100MHZ,
	ENET_125MHZ,
};

u32 imx_get_uartclk(void);
u32 imx_get_fecclk(void);
unsigned int mxc_get_clock(enum mxc_clock clk);
void setup_gpmi_io_clk(u32 cfg);
void hab_caam_clock_enable(unsigned char enable);
void enable_ocotp_clk(unsigned char enable);
void enable_usboh3_clk(unsigned char enable);
void enable_uart_clk(unsigned char enable);
int enable_usdhc_clk(unsigned char enable, unsigned bus_num);
int enable_sata_clock(void);
void disable_sata_clock(void);
int enable_pcie_clock(void);
int enable_i2c_clk(unsigned char enable, unsigned i2c_num);
int enable_spi_clk(unsigned char enable, unsigned spi_num);
void enable_ipu_clock(void);
int enable_fec_anatop_clock(int fec_id, enum enet_freq freq);
void enable_enet_clk(unsigned char enable);
int enable_lcdif_clock(u32 base_addr);
int enable_lvds_bridge(u32 lcd_base_addr);
void enable_qspi_clk(int qspi_num);
void enable_thermal_clk(void);
void enable_epdc_clock(void);
void mxs_set_lcdclk(u32 base_addr, u32 freq);
void mxs_set_vadcclk(void);
int display_clk_config(u32 clk_type, u32 freq);
int display_split_clk_config(u32 clk_type, u32 freq);
#endif /* __ASM_ARCH_CLOCK_H */
