#ifndef __R128_REG_CCU_H__
#define __R128_REG_CCU_H__

#define R128_CCU_BASE					(0x4003c000)

#define BUS_CLK_GATING_CTRL0			(0x0004)
#define BUS_CLK_GATING_CTRL1			(0x0008)
#define DEV_RST_CTRL0					(0x000c)
#define DEV_RST_CTRL1					(0x0010)
#define CPU_DSP_RV_CLK_GATING_CTRL		(0x0014)
#define CPU_DSP_RV_RST_CTRL				(0x0018)
#define MBUS_CLK_GATING_CTRL			(0x001c)
#define SPI0_CLK_CTRL					(0x0020)
#define SPI1_CLK_CTRL					(0x0024)
#define SDC_CLK_CTRL					(0x0028)
#define SS_CLK_CTRL						(0x002c)
#define CSI_DCLK_CTRL					(0x0030)
#define LEDC_CLK_CTRL					(0x0034)
#define IRRX_CLK_CTRL					(0x0038)
#define IRTX_CLK_CTRL					(0x003c)
#define SYSTICK_REFCLK_CTRL				(0x0040)
#define SYSTICK_CALIB_CTRL				(0x0044)
#define CSI_OUT_MCLK_CTRL				(0x0050)
#define FLASHC_MCLK_CTRL				(0x0054)
#define SQPI_PSRAMC_CLK_CTRL			(0x0058)
#define APB_SPC_CLK_CTRL				(0x005c)
#define USB_CLK_CTRL					(0x0060)
#define RISCV_CLK_CTRL					(0x0064)
#define DSP_CLK_CTRL					(0x0068)
#define HSPSRAM_CLK_CTRL				(0x006c)
#define LSPSRAM_CLK_CTRL				(0x0070)
#define G2D_CLK_CTRL					(0x0074)
#define DE_CLK_CTRL						(0x0078)
#define LCD_CLK_CTRL					(0x007c)
#define RESET_SOURCE_RECORD				(0x0100)

#endif /* __R128_REG_CCU_H__ */
