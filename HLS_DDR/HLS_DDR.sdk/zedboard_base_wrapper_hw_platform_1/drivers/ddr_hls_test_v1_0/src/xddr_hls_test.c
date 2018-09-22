// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

/***************************** Include Files *********************************/
#include "xddr_hls_test.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XDdr_hls_test_CfgInitialize(XDdr_hls_test *InstancePtr, XDdr_hls_test_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Bus_a_BaseAddress = ConfigPtr->Bus_a_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XDdr_hls_test_Start(XDdr_hls_test *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XDdr_hls_test_ReadReg(InstancePtr->Bus_a_BaseAddress, XDDR_HLS_TEST_BUS_A_ADDR_AP_CTRL) & 0x80;
    XDdr_hls_test_WriteReg(InstancePtr->Bus_a_BaseAddress, XDDR_HLS_TEST_BUS_A_ADDR_AP_CTRL, Data | 0x01);
}

u32 XDdr_hls_test_IsDone(XDdr_hls_test *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XDdr_hls_test_ReadReg(InstancePtr->Bus_a_BaseAddress, XDDR_HLS_TEST_BUS_A_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XDdr_hls_test_IsIdle(XDdr_hls_test *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XDdr_hls_test_ReadReg(InstancePtr->Bus_a_BaseAddress, XDDR_HLS_TEST_BUS_A_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XDdr_hls_test_IsReady(XDdr_hls_test *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XDdr_hls_test_ReadReg(InstancePtr->Bus_a_BaseAddress, XDDR_HLS_TEST_BUS_A_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XDdr_hls_test_EnableAutoRestart(XDdr_hls_test *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XDdr_hls_test_WriteReg(InstancePtr->Bus_a_BaseAddress, XDDR_HLS_TEST_BUS_A_ADDR_AP_CTRL, 0x80);
}

void XDdr_hls_test_DisableAutoRestart(XDdr_hls_test *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XDdr_hls_test_WriteReg(InstancePtr->Bus_a_BaseAddress, XDDR_HLS_TEST_BUS_A_ADDR_AP_CTRL, 0);
}

void XDdr_hls_test_Set_start_signal_i(XDdr_hls_test *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XDdr_hls_test_WriteReg(InstancePtr->Bus_a_BaseAddress, XDDR_HLS_TEST_BUS_A_ADDR_START_SIGNAL_I_DATA, Data);
}

u32 XDdr_hls_test_Get_start_signal_i(XDdr_hls_test *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XDdr_hls_test_ReadReg(InstancePtr->Bus_a_BaseAddress, XDDR_HLS_TEST_BUS_A_ADDR_START_SIGNAL_I_DATA);
    return Data;
}

u32 XDdr_hls_test_Get_start_signal_o(XDdr_hls_test *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XDdr_hls_test_ReadReg(InstancePtr->Bus_a_BaseAddress, XDDR_HLS_TEST_BUS_A_ADDR_START_SIGNAL_O_DATA);
    return Data;
}

u32 XDdr_hls_test_Get_start_signal_o_vld(XDdr_hls_test *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XDdr_hls_test_ReadReg(InstancePtr->Bus_a_BaseAddress, XDDR_HLS_TEST_BUS_A_ADDR_START_SIGNAL_O_CTRL);
    return Data & 0x1;
}

u32 XDdr_hls_test_Get_hls_check(XDdr_hls_test *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XDdr_hls_test_ReadReg(InstancePtr->Bus_a_BaseAddress, XDDR_HLS_TEST_BUS_A_ADDR_HLS_CHECK_DATA);
    return Data;
}

u32 XDdr_hls_test_Get_hls_check_vld(XDdr_hls_test *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XDdr_hls_test_ReadReg(InstancePtr->Bus_a_BaseAddress, XDDR_HLS_TEST_BUS_A_ADDR_HLS_CHECK_CTRL);
    return Data & 0x1;
}

void XDdr_hls_test_Set_num(XDdr_hls_test *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XDdr_hls_test_WriteReg(InstancePtr->Bus_a_BaseAddress, XDDR_HLS_TEST_BUS_A_ADDR_NUM_DATA, Data);
}

u32 XDdr_hls_test_Get_num(XDdr_hls_test *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XDdr_hls_test_ReadReg(InstancePtr->Bus_a_BaseAddress, XDDR_HLS_TEST_BUS_A_ADDR_NUM_DATA);
    return Data;
}

void XDdr_hls_test_Set_saMaster(XDdr_hls_test *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XDdr_hls_test_WriteReg(InstancePtr->Bus_a_BaseAddress, XDDR_HLS_TEST_BUS_A_ADDR_SAMASTER_DATA, Data);
}

u32 XDdr_hls_test_Get_saMaster(XDdr_hls_test *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XDdr_hls_test_ReadReg(InstancePtr->Bus_a_BaseAddress, XDDR_HLS_TEST_BUS_A_ADDR_SAMASTER_DATA);
    return Data;
}

void XDdr_hls_test_InterruptGlobalEnable(XDdr_hls_test *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XDdr_hls_test_WriteReg(InstancePtr->Bus_a_BaseAddress, XDDR_HLS_TEST_BUS_A_ADDR_GIE, 1);
}

void XDdr_hls_test_InterruptGlobalDisable(XDdr_hls_test *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XDdr_hls_test_WriteReg(InstancePtr->Bus_a_BaseAddress, XDDR_HLS_TEST_BUS_A_ADDR_GIE, 0);
}

void XDdr_hls_test_InterruptEnable(XDdr_hls_test *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XDdr_hls_test_ReadReg(InstancePtr->Bus_a_BaseAddress, XDDR_HLS_TEST_BUS_A_ADDR_IER);
    XDdr_hls_test_WriteReg(InstancePtr->Bus_a_BaseAddress, XDDR_HLS_TEST_BUS_A_ADDR_IER, Register | Mask);
}

void XDdr_hls_test_InterruptDisable(XDdr_hls_test *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XDdr_hls_test_ReadReg(InstancePtr->Bus_a_BaseAddress, XDDR_HLS_TEST_BUS_A_ADDR_IER);
    XDdr_hls_test_WriteReg(InstancePtr->Bus_a_BaseAddress, XDDR_HLS_TEST_BUS_A_ADDR_IER, Register & (~Mask));
}

void XDdr_hls_test_InterruptClear(XDdr_hls_test *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XDdr_hls_test_WriteReg(InstancePtr->Bus_a_BaseAddress, XDDR_HLS_TEST_BUS_A_ADDR_ISR, Mask);
}

u32 XDdr_hls_test_InterruptGetEnabled(XDdr_hls_test *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XDdr_hls_test_ReadReg(InstancePtr->Bus_a_BaseAddress, XDDR_HLS_TEST_BUS_A_ADDR_IER);
}

u32 XDdr_hls_test_InterruptGetStatus(XDdr_hls_test *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XDdr_hls_test_ReadReg(InstancePtr->Bus_a_BaseAddress, XDDR_HLS_TEST_BUS_A_ADDR_ISR);
}

