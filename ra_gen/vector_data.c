/* generated vector source file - do not edit */
#include "bsp_api.h"
/* Do not build these data structures if no interrupts are currently allocated because IAR will have build errors. */
#if VECTOR_DATA_IRQ_COUNT > 0
        BSP_DONT_REMOVE const fsp_vector_t g_vector_table[BSP_ICU_VECTOR_NUM_ENTRIES] BSP_PLACE_IN_SECTION(BSP_SECTION_APPLICATION_VECTORS) =
        {
                        [0] = spi_b_tei_isr, /* SPI1 TEI (Transmission complete event) */
            [1] = spi_b_eri_isr, /* SPI1 ERI (Error) */
            [2] = dmac_int_isr, /* DMAC0 INT (DMAC0 transfer end) */
            [3] = dmac_int_isr, /* DMAC1 INT (DMAC1 transfer end) */
        };
        #if BSP_FEATURE_ICU_HAS_IELSR
        const bsp_interrupt_event_t g_interrupt_event_link_select[BSP_ICU_VECTOR_NUM_ENTRIES] =
        {
            [0] = BSP_PRV_VECT_ENUM(EVENT_SPI1_TEI,GROUP0), /* SPI1 TEI (Transmission complete event) */
            [1] = BSP_PRV_VECT_ENUM(EVENT_SPI1_ERI,GROUP1), /* SPI1 ERI (Error) */
            [2] = BSP_PRV_VECT_ENUM(EVENT_DMAC0_INT,GROUP2), /* DMAC0 INT (DMAC0 transfer end) */
            [3] = BSP_PRV_VECT_ENUM(EVENT_DMAC1_INT,GROUP3), /* DMAC1 INT (DMAC1 transfer end) */
        };
        #endif
        #endif
