// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef XDDR_HLS_TEST_H
#define XDDR_HLS_TEST_H

#ifdef __cplusplus
extern "C" {
#endif

/***************************** Include Files *********************************/
#ifndef __linux__
#include "xil_types.h"
#include "xil_assert.h"
#include "xstatus.h"
#include "xil_io.h"
#else
#include <stdint.h>
#include <assert.h>
#include <dirent.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>
#include <stddef.h>
#endif
#include "xddr_hls_test_hw.h"

/**************************** Type Definitions ******************************/
#ifdef __linux__
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
#else
typedef struct {
    u16 DeviceId;
    u32 Bus_a_BaseAddress;
} XDdr_hls_test_Config;
#endif

typedef struct {
    u32 Bus_a_BaseAddress;
    u32 IsReady;
} XDdr_hls_test;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XDdr_hls_test_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XDdr_hls_test_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))
#else
#define XDdr_hls_test_WriteReg(BaseAddress, RegOffset, Data) \
    *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XDdr_hls_test_ReadReg(BaseAddress, RegOffset) \
    *(volatile u32*)((BaseAddress) + (RegOffset))

#define Xil_AssertVoid(expr)    assert(expr)
#define Xil_AssertNonvoid(expr) assert(expr)

#define XST_SUCCESS             0
#define XST_DEVICE_NOT_FOUND    2
#define XST_OPEN_DEVICE_FAILED  3
#define XIL_COMPONENT_IS_READY  1
#endif

/************************** Function Prototypes *****************************/
#ifndef __linux__
int XDdr_hls_test_Initialize(XDdr_hls_test *InstancePtr, u16 DeviceId);
XDdr_hls_test_Config* XDdr_hls_test_LookupConfig(u16 DeviceId);
int XDdr_hls_test_CfgInitialize(XDdr_hls_test *InstancePtr, XDdr_hls_test_Config *ConfigPtr);
#else
int XDdr_hls_test_Initialize(XDdr_hls_test *InstancePtr, const char* InstanceName);
int XDdr_hls_test_Release(XDdr_hls_test *InstancePtr);
#endif

void XDdr_hls_test_Start(XDdr_hls_test *InstancePtr);
u32 XDdr_hls_test_IsDone(XDdr_hls_test *InstancePtr);
u32 XDdr_hls_test_IsIdle(XDdr_hls_test *InstancePtr);
u32 XDdr_hls_test_IsReady(XDdr_hls_test *InstancePtr);
void XDdr_hls_test_EnableAutoRestart(XDdr_hls_test *InstancePtr);
void XDdr_hls_test_DisableAutoRestart(XDdr_hls_test *InstancePtr);

void XDdr_hls_test_Set_start_signal_i(XDdr_hls_test *InstancePtr, u32 Data);
u32 XDdr_hls_test_Get_start_signal_i(XDdr_hls_test *InstancePtr);
u32 XDdr_hls_test_Get_start_signal_o(XDdr_hls_test *InstancePtr);
u32 XDdr_hls_test_Get_start_signal_o_vld(XDdr_hls_test *InstancePtr);
u32 XDdr_hls_test_Get_hls_check(XDdr_hls_test *InstancePtr);
u32 XDdr_hls_test_Get_hls_check_vld(XDdr_hls_test *InstancePtr);
void XDdr_hls_test_Set_num(XDdr_hls_test *InstancePtr, u32 Data);
u32 XDdr_hls_test_Get_num(XDdr_hls_test *InstancePtr);
void XDdr_hls_test_Set_saMaster(XDdr_hls_test *InstancePtr, u32 Data);
u32 XDdr_hls_test_Get_saMaster(XDdr_hls_test *InstancePtr);

void XDdr_hls_test_InterruptGlobalEnable(XDdr_hls_test *InstancePtr);
void XDdr_hls_test_InterruptGlobalDisable(XDdr_hls_test *InstancePtr);
void XDdr_hls_test_InterruptEnable(XDdr_hls_test *InstancePtr, u32 Mask);
void XDdr_hls_test_InterruptDisable(XDdr_hls_test *InstancePtr, u32 Mask);
void XDdr_hls_test_InterruptClear(XDdr_hls_test *InstancePtr, u32 Mask);
u32 XDdr_hls_test_InterruptGetEnabled(XDdr_hls_test *InstancePtr);
u32 XDdr_hls_test_InterruptGetStatus(XDdr_hls_test *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif
