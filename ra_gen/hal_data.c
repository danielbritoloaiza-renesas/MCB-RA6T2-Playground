/* generated HAL source file - do not edit */
#include "hal_data.h"

dmac_instance_ctrl_t g_transfer1_ctrl;
transfer_info_t g_transfer1_info = { .transfer_settings_word_b.dest_addr_mode =
		TRANSFER_ADDR_MODE_INCREMENTED, .transfer_settings_word_b.repeat_area =
		TRANSFER_REPEAT_AREA_DESTINATION, .transfer_settings_word_b.irq =
		TRANSFER_IRQ_END, .transfer_settings_word_b.chain_mode =
		TRANSFER_CHAIN_MODE_DISABLED, .transfer_settings_word_b.src_addr_mode =
		TRANSFER_ADDR_MODE_FIXED, .transfer_settings_word_b.size =
		TRANSFER_SIZE_2_BYTE, .transfer_settings_word_b.mode =
		TRANSFER_MODE_NORMAL, .p_dest = (void*) NULL, .p_src =
		(void const*) NULL, .num_blocks = 0, .length = 0, };
const dmac_extended_cfg_t g_transfer1_extend = { .offset = 1, .src_buffer_size =
		1,
#if defined(VECTOR_NUMBER_DMAC1_INT)
    .irq                 = VECTOR_NUMBER_DMAC1_INT,
#else
		.irq = FSP_INVALID_VECTOR,
#endif
		.ipl = (9), .channel = 1, .p_callback = g_spi1_rx_transfer_callback,
		.p_context = NULL, .activation_source = ELC_EVENT_SPI1_RXI, };
const transfer_cfg_t g_transfer1_cfg = { .p_info = &g_transfer1_info,
		.p_extend = &g_transfer1_extend, };
/* Instance structure to use this module. */
const transfer_instance_t g_transfer1 = { .p_ctrl = &g_transfer1_ctrl, .p_cfg =
		&g_transfer1_cfg, .p_api = &g_transfer_on_dmac };

dmac_instance_ctrl_t g_transfer0_ctrl;
transfer_info_t g_transfer0_info = { .transfer_settings_word_b.dest_addr_mode =
		TRANSFER_ADDR_MODE_FIXED, .transfer_settings_word_b.repeat_area =
		TRANSFER_REPEAT_AREA_SOURCE, .transfer_settings_word_b.irq =
		TRANSFER_IRQ_END, .transfer_settings_word_b.chain_mode =
		TRANSFER_CHAIN_MODE_DISABLED, .transfer_settings_word_b.src_addr_mode =
		TRANSFER_ADDR_MODE_INCREMENTED, .transfer_settings_word_b.size =
		TRANSFER_SIZE_2_BYTE, .transfer_settings_word_b.mode =
		TRANSFER_MODE_NORMAL, .p_dest = (void*) NULL, .p_src =
		(void const*) NULL, .num_blocks = 0, .length = 0, };
const dmac_extended_cfg_t g_transfer0_extend = { .offset = 1, .src_buffer_size =
		1,
#if defined(VECTOR_NUMBER_DMAC0_INT)
    .irq                 = VECTOR_NUMBER_DMAC0_INT,
#else
		.irq = FSP_INVALID_VECTOR,
#endif
		.ipl = (9), .channel = 0, .p_callback = g_spi1_tx_transfer_callback,
		.p_context = NULL, .activation_source = ELC_EVENT_SPI1_TXI, };
const transfer_cfg_t g_transfer0_cfg = { .p_info = &g_transfer0_info,
		.p_extend = &g_transfer0_extend, };
/* Instance structure to use this module. */
const transfer_instance_t g_transfer0 = { .p_ctrl = &g_transfer0_ctrl, .p_cfg =
		&g_transfer0_cfg, .p_api = &g_transfer_on_dmac };
#define RA_NOT_DEFINED (UINT32_MAX)
#if (RA_NOT_DEFINED) != (1)

/* If the transfer module is DMAC, define a DMAC transfer callback. */
#include "r_dmac.h"
extern void spi_b_tx_dmac_callback(spi_b_instance_ctrl_t const *const p_ctrl);

void g_spi1_tx_transfer_callback(dmac_callback_args_t *p_args) {
	FSP_PARAMETER_NOT_USED(p_args);
	spi_b_tx_dmac_callback(&g_spi1_ctrl);
}
#endif

#if (RA_NOT_DEFINED) != (1)

/* If the transfer module is DMAC, define a DMAC transfer callback. */
#include "r_dmac.h"
extern void spi_b_rx_dmac_callback(spi_b_instance_ctrl_t const *const p_ctrl);

void g_spi1_rx_transfer_callback(dmac_callback_args_t *p_args) {
	FSP_PARAMETER_NOT_USED(p_args);
	spi_b_rx_dmac_callback(&g_spi1_ctrl);
}
#endif
#undef RA_NOT_DEFINED

spi_b_instance_ctrl_t g_spi1_ctrl;

/** SPI extended configuration for SPI HAL driver */
const spi_b_extended_cfg_t g_spi1_ext_cfg = { .spi_clksyn =
		SPI_B_SSL_MODE_CLK_SYN, .spi_comm = SPI_B_COMMUNICATION_FULL_DUPLEX,
		.ssl_polarity = SPI_B_SSLP_LOW, .ssl_select = SPI_B_SSL_SELECT_SSL0,
		.mosi_idle = SPI_B_MOSI_IDLE_VALUE_FIXING_DISABLE, .parity =
				SPI_B_PARITY_MODE_DISABLE, .byte_swap = SPI_B_BYTE_SWAP_DISABLE,
		.clock_source = SPI_B_CLOCK_SOURCE_PCLK, .spck_div = {
		/* Actual calculated bitrate: 15000000. */.spbr = 3, .brdv = 0 },
		.spck_delay = SPI_B_DELAY_COUNT_1, .ssl_negation_delay =
				SPI_B_DELAY_COUNT_1, .next_access_delay = SPI_B_DELAY_COUNT_1,
		.burst_interframe_delay = SPI_B_BURST_TRANSFER_WITH_DELAY

};

/** SPI configuration for SPI HAL driver */
const spi_cfg_t g_spi1_cfg = { .channel = 1,

#if defined(VECTOR_NUMBER_SPI1_RXI)
    .rxi_irq             = VECTOR_NUMBER_SPI1_RXI,
#else
		.rxi_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_SPI1_TXI)
    .txi_irq             = VECTOR_NUMBER_SPI1_TXI,
#else
		.txi_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_SPI1_TEI)
    .tei_irq             = VECTOR_NUMBER_SPI1_TEI,
#else
		.tei_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_SPI1_ERI)
    .eri_irq             = VECTOR_NUMBER_SPI1_ERI,
#else
		.eri_irq = FSP_INVALID_VECTOR,
#endif

		.rxi_ipl = (BSP_IRQ_DISABLED), .txi_ipl = (BSP_IRQ_DISABLED), .tei_ipl =
				(12), .eri_ipl = (12),

		.operating_mode = SPI_MODE_MASTER,

		.clk_phase = SPI_CLK_PHASE_EDGE_ODD, .clk_polarity =
				SPI_CLK_POLARITY_LOW,

		.mode_fault = SPI_MODE_FAULT_ERROR_DISABLE, .bit_order =
				SPI_BIT_ORDER_MSB_FIRST, .p_transfer_tx = g_spi1_P_TRANSFER_TX,
		.p_transfer_rx = g_spi1_P_TRANSFER_RX, .p_callback = spi_callback,

		.p_context = NULL, .p_extend = (void*) &g_spi1_ext_cfg, };

/* Instance structure to use this module. */
const spi_instance_t g_spi1 = { .p_ctrl = &g_spi1_ctrl, .p_cfg = &g_spi1_cfg,
		.p_api = &g_spi_on_spi_b };
void g_hal_init(void) {
	g_common_init();
}
