/* generated vector header file - do not edit */
#ifndef VECTOR_DATA_H
#define VECTOR_DATA_H
#ifdef __cplusplus
        extern "C" {
        #endif
/* Number of interrupts allocated */
#ifndef VECTOR_DATA_IRQ_COUNT
#define VECTOR_DATA_IRQ_COUNT    (4)
#endif
/* ISR prototypes */
void spi_b_tei_isr(void);
void spi_b_eri_isr(void);
void dmac_int_isr(void);

/* Vector table allocations */
#define VECTOR_NUMBER_SPI1_TEI ((IRQn_Type) 0) /* SPI1 TEI (Transmission complete event) */
#define SPI1_TEI_IRQn          ((IRQn_Type) 0) /* SPI1 TEI (Transmission complete event) */
#define VECTOR_NUMBER_SPI1_ERI ((IRQn_Type) 1) /* SPI1 ERI (Error) */
#define SPI1_ERI_IRQn          ((IRQn_Type) 1) /* SPI1 ERI (Error) */
#define VECTOR_NUMBER_DMAC0_INT ((IRQn_Type) 2) /* DMAC0 INT (DMAC0 transfer end) */
#define DMAC0_INT_IRQn          ((IRQn_Type) 2) /* DMAC0 INT (DMAC0 transfer end) */
#define VECTOR_NUMBER_DMAC1_INT ((IRQn_Type) 3) /* DMAC1 INT (DMAC1 transfer end) */
#define DMAC1_INT_IRQn          ((IRQn_Type) 3) /* DMAC1 INT (DMAC1 transfer end) */
/* The number of entries required for the ICU vector table. */
#define BSP_ICU_VECTOR_NUM_ENTRIES (4)

#ifdef __cplusplus
        }
        #endif
#endif /* VECTOR_DATA_H */
