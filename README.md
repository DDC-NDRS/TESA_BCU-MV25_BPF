# TESA BCU-MV25 Base Platform Firmware

Base embedded firmware platform for the **TESA BCU-MV25 (Battery Control Unit)**, providing core drivers, system services, and hardware abstraction for embedded battery management applications.

This repository is built on Infineon's **PSOC™ Edge E84 MCU (PSE84)** and includes the board support package and bootloader derived from Infineon's **PSOC™ Edge Protect Bootloader**.

## Overview

This repository provides the foundational firmware platform consisting of:

1. **TARGET_BCU_MV25** - Board support package for BCU-MV25 hardware
2. **Edge Protect Bootloader (btl_mcu)** - Secure bootloader for firmware updates and multi-core boot

## Repository Structure

```
tesa_bcu-mv25_bpf/
├── code/
│   └── btl_mcu/              # Edge Protect Bootloader project
│       ├── proj_bootloader/  # Bootloader application
│       ├── bsps/             # BSP files for bootloader
│       ├── templates/        # Target-specific templates
│       └── README.md         # Bootloader documentation
│
├── tools/
│   └── mtb_bsp/
│       └── TARGET_BCU_MV25/  # Board support package for BCU-MV25
│           └── README.md     # BSP documentation
│
└── README.md                 # This file
```

## Requirements

- **ModusToolbox™** v3.6 or later
- **Edge Protect Security Suite** v1.6 or later
- **Supported Toolchains:**
  - GNU Arm® Embedded Compiler v14.2.1 (`GCC_ARM`)
- **Target Device:** PSOC™ Edge E84 MCU (PSE84)
- **Target Board:** BCU-MV25 (based on KIT_PSE84_EVAL_EPC4)

## Platform Components

### 1. Board Support Package - TARGET_BCU_MV25 (`tools/mtb_bsp/TARGET_BCU_MV25/`)

Hardware abstraction layer and board-specific configurations:
- PSE84 MCU device configuration and initialization
- Multi-core support (CM33 secure/non-secure, CM55)
- System startup and clock configurations
- Peripheral and memory layout definitions
- GPIO mappings for BCU-MV25 hardware

**Documentation:** [tools/mtb_bsp/TARGET_BCU_MV25/README.md](tools/mtb_bsp/TARGET_BCU_MV25/README.md)

### 2. Secure Bootloader - Edge Protect (`code/btl_mcu/`)

MCUboot-based secure bootloader providing:
- Secure boot with cryptographic image verification
- Field firmware update capability (OTA)
- Multi-image boot support (CM33_S, CM33_NS, CM55)
- Execute-in-place (XIP) from external QSPI flash
- Dual-slot architecture for safe updates

**Documentation:** [code/btl_mcu/README.md](code/btl_mcu/README.md)

## Use Case

This base platform firmware is intended as the foundation for developing battery management applications on BCU-MV25 hardware. It provides:

- **Secure boot infrastructure** for trusted application execution
- **Hardware abstraction** through the BSP layer
- **Multi-core support** enabling separation of security-critical and application code
- **Field update capability** for deployed battery management systems

Application developers can build battery control, monitoring, and management firmware on top of this platform.

## Getting Started

Refer to the component-specific documentation:
- **Bootloader Usage:** [code/btl_mcu/README.md](code/btl_mcu/README.md)
- **BSP Details:** [tools/mtb_bsp/TARGET_BCU_MV25/README.md](tools/mtb_bsp/TARGET_BCU_MV25/README.md)
- **Code Example Guide:** [code/btl_mcu/docs/using_the_code_example.md](code/btl_mcu/docs/using_the_code_example.md)

## Documentation

- [Bootloader README](code/btl_mcu/README.md) - Complete bootloader documentation
- [BSP README](tools/mtb_bsp/TARGET_BCU_MV25/README.md) - Board support package details
- [Using the Code Example](code/btl_mcu/docs/using_the_code_example.md) - Development guide

## Related Resources

- [PSOC™ Edge E84 MCU](https://www.infineon.com/products/microcontroller/32-bit-psoc-arm-cortex/32-bit-psoc-edge-arm/psoc-edge-e84)
- [ModusToolbox™ Software](https://www.infineon.com/design-resources/development-tools/sdk/modustoolbox-software)
- [PSOC™ Edge E2 Training](https://github.com/Infineon/mtb-training-psoc-edge-e84-features)
- [AN235935 - Getting Started with PSOC™ Edge E8 MCU](https://www.infineon.com/assets/row/public/documents/30/42/infineon-an235935-getting-started-with-psoc-edge-e8-modustoolbox-applicationnotes-en.pdf)
- [AN237857 - Edge Protect Bootloader](https://www.infineon.com/assets/row/public/documents/30/42/infineon-an237857-edge-protect-bootloader-psoc-edge-mcu-applicationnotes-en.pdf)
                                       
---

**Repository:** https://github.com/DDC-NDRS/TESA_BCU-MV25_BPF  
**Maintained by:** DDC-NDRS

© 2026 NDR Solution (Thailand) Co., Ltd. All rights reserved.
