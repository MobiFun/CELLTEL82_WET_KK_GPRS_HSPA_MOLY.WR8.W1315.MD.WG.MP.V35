                             /*name,                virtual address,           physical address,          length                    RW/RO*/                                                                                              
X_REGISTER_REGION_NCNB_CONST(AXI2APF_BRIDGE0,       0x80000000,                0x80000000,                0x00200000,                0x0)
X_REGISTER_REGION_NCNB_CONST(AXI2APF_BRIDGE1,       0x81000000,                0x81000000,                0x00200000,                0x0)  
X_REGISTER_REGION_NCNB_CONST(MDIF,                  0x85000000,                0x85000000,                0x00100000,                0x0)  
X_REGISTER_REGION_NCNB_CONST(LMU_ARM11,             0x86000000,                0x86000000,                0x00100000,                0x0)  
X_REGISTER_REGION_NCNB_CONST(LMU_Fcore,             0x87000000,                0x87000000,                0x00100000,                0x0)  
X_REGISTER_REGION_NCNB_CONST(Debugsys,              0x88000000,                0x88000000,                0x00100000,                0x0)  

X_REGISTER_REGION_NCNB_CONST(MD2GSYS0_REG,          0xA0000000,                0xA0000000,                0x00200000,                0x0)
X_REGISTER_REGION_NCNB_CONST(MD2GSYS1_REG,          0xA0800000,                0xA0800000,                0x00100000,                0x0)
X_REGISTER_REGION_NCNB_CONST(MD2GSYS2_REG,          0xA0A00000,                0xA0A00000,                0x00100000,                0x0)
X_REGISTER_REGION_NCNB_CONST(MD2GSYS3_REG,          0xA0C00000,                0xA0C00000,                0x00100000,                0x0)
X_REGISTER_REGION_NCNB_CONST(HSPASYS_REG,           0xB0000000,                0xB0000000,                0x00200000,                0x0)
X_REGISTER_REGION_NCNB_CONST(HSPASYS_REG,           0xB1000000,                0xB1000000,                0x00100000,                0x0)

X_REGISTER_REGION_NCNB_CONST(INFRASYS_REG,          0xC0000000,                0xC0000000,                0x03000000,                0x0)

X_REGISTER_REGION_NCNB_CONST(AUDIOSYS_REG,          0xD0000000,                0xD0000000,                0x00100000,                0x0)
X_REGISTER_REGION_NCNB_CONST(AUDIODATA_REG,         0xD4000000,                0xD4000000,                0x00100000,                0x0)
X_REGISTER_REGION_NCNB_CONST(SIGMA_DSP_SRAM,        0xD8000000,                0xD8000000,                0x00100000,                0x0)

X_REGISTER_REGION_NCB_CONST(DIVIDER_base,         DIVIDER_base,              DIVIDER_base,                0x00010000,                0x0)
X_REGISTER_REGION_NCB_CONST(FCS_base,                 FCS_base,                  FCS_base,                0x00010000,                0x0)
X_REGISTER_REGION_NCB_CONST(TDMA_base,               TDMA_base,                 TDMA_base,                0x00010000,                0x0)
X_REGISTER_REGION_NCB_CONST(RTR_base,                 RTR_base,                  RTR_base,                0x00010000,                0x0)
X_REGISTER_REGION_NCB_CONST(OSTIMERPARM_base, OSTIMERPARM_base,          OSTIMERPARM_base,                0x00010000,                0x0)
X_REGISTER_REGION_NCB_CONST(TOPSM_base,             TOPSM_base,                TOPSM_base,                0x00010000,                0x0)
X_REGISTER_REGION_NCB_CONST(UPA_base,                 UPA_base,                  UPA_base,                0x00010000,                0x0)
X_REGISTER_REGION_NCB_CONST(DPA_MAC_base,         DPA_MAC_base,              DPA_MAC_base,                0x00010000,                0x0)
X_REGISTER_REGION_NCB_CONST(DPA_RLC_base,         DPA_RLC_base,              DPA_RLC_base,                0x00010000,                0x0)
X_REGISTER_REGION_NCB_CONST(UPA_base,                 UPA_base,                  UPA_base,                0x00010000,                0x0)
X_REGISTER_REGION_NCB_CONST(AFC_base,                 AFC_base,                  AFC_base,                0x00010000,                0x0)
X_REGISTER_REGION_NCB_CONST(AUXADC_base,           AUXADC_base,               AUXADC_base,                0x00010000,                0x0)
X_REGISTER_REGION_NCB_CONST(BPI_base,                 BPI_base,                  BPI_base,                0x00010000,                0x0)
X_REGISTER_REGION_NCB_CONST(BSI_base,                 BSI_base,                  BSI_base,                0x00010000,                0x0)
X_REGISTER_REGION_NCB_CONST(TXBRP_base,             TXBRP_base,                TXBRP_base,                0x00010000,                0x0)
X_REGISTER_REGION_NCB_CONST(TXCRP_base,             TXCRP_base,                TXCRP_base,                0x00010000,                0x0)
X_REGISTER_REGION_NCB_CONST(SRCHR_base,             SRCHR_base,                SRCHR_base,                0x00010000,                0x0)
X_REGISTER_REGION_NCB_CONST(RXDFE_base,             RXDFE_base,                RXDFE_base,                0x00010000,                0x0)
X_REGISTER_REGION_NCB_CONST(RXSRP_base,             RXSRP_base,                RXSRP_base,                0x00010000,                0x0)
X_REGISTER_REGION_NCB_CONST(RAKE_base,               RAKE_base,                 RAKE_base,                0x00010000,                0x0)
X_REGISTER_REGION_NCB_CONST(RXBRP_base,             RXBRP_base,                RXBRP_base,                0x00010000,                0x0)
X_REGISTER_REGION_NCB_CONST(LOG3G_base,             LOG3G_base,                LOG3G_base,                0x00010000,                0x0)
X_REGISTER_REGION_NCB_CONST(LPBK_base,               LPBK_base,                 LPBK_base,                0x00010000,                0x0)
X_REGISTER_REGION_NCB_CONST(HRXBRP_base,           HRXBRP_base,               HRXBRP_base,                0x00010000,                0x0)
X_REGISTER_REGION_NCB_CONST(UTXBRP_base,           UTXBRP_base,               UTXBRP_base,                0x00010000,                0x0)
X_REGISTER_REGION_NCB_CONST(HSDPA_base,             HSDPA_base,                HSDPA_base,                0x00010000,                0x0)
X_REGISTER_REGION_NCB_CONST(HSDPA1_base,           HSDPA1_base,               HSDPA1_base,                0x00010000,                0x0)
X_REGISTER_REGION_NCB_CONST(TXUPC_base,             TXUPC_base,                TXUPC_base,                0x00010000,                0x0)
X_REGISTER_REGION_NCB_CONST(HSPA_DMA_base,       HSPA_DMA_base,             HSPA_DMA_base,                0x00010000,                0x0)
X_REGISTER_REGION_NCB_CONST(USB_base,                 USB_base,                  USB_base,                0x00010000,                0x0)
X_REGISTER_REGION_NCB_CONST(PFC_base,                 PFC_base,                  PFC_base,                0x00010000,                0x0)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Shared device memory
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
X_REGISTER_REGION_NCNB_CONST(AXI2APF_BRIDGE0,       0xC0000000,                0x60000000,                0x00200000,                0x0)
X_REGISTER_REGION_NCNB_CONST(LMU_MDMARM11,          0xC0400000,                0x60200000,                0x00100000,                0x0)
X_REGISTER_REGION_NCNB_CONST(LMU_FCORE,             0xC0800000,                0x60600000,                0x00100000,                0x0)
X_REGISTER_REGION_NCNB_CONST(MDIF,                  0xC0C00000,                0x61400000,                0x00100000,                0x0)
                                                                                                                                     
X_REGISTER_REGION_NCNB_CONST(AXI2APF_BRIDGE1,       0xC1000000,                0x70000000,                0x00200000,                0x0)

X_REGISTER_REGION_NCNB_CONST(MD2GSYS0_REG,          0xC1400000,                0xA0000000,                0x00200000,                0x0)
X_REGISTER_REGION_NCNB_CONST(MD2GSYS1_REG,          0xC1800000,                0xA0800000,                0x00100000,                0x0)
X_REGISTER_REGION_NCNB_CONST(MD2GSYS2_REG,          0xC1C00000,                0xA0A00000,                0x00100000,                0x0)
X_REGISTER_REGION_NCNB_CONST(MD2GSYS3_REG,          0xC2000000,                0xA0C00000,                0x00100000,                0x0)
X_REGISTER_REGION_NCNB_CONST(HSPASYS_REG,           0xC2400000,                0xB0000000,                0x00200000,                0x0)
X_REGISTER_REGION_NCNB_CONST(HSPASYS_REG,           0xC2800000,                0xB1000000,                0x00100000,                0x0)

X_REGISTER_REGION_NCNB_CONST(AUDIOSYS_REG,          0xC2C00000,                0xD0000000,                0x00100000,                0x0)
X_REGISTER_REGION_NCNB_CONST(AUDIODATA_REG,         0xC3000000,                0xD4000000,                0x00100000,                0x0)
X_REGISTER_REGION_NCNB_CONST(SIGMA_DSP_SRAM,        0xC3400000,                0xD8000000,                0x00100000,                0x0)
*/