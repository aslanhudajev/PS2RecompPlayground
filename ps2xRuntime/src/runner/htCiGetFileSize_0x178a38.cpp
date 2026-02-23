#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: htCiGetFileSize
// Address: 0x178a38 - 0x178bc4
void htCiGetFileSize_0x178a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("htCiGetFileSize");


    ctx->pc = 0x178a38u;

    // 0x178a38: 0x27bdffc0
    ctx->pc = 0x178a38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x178a3c: 0xffb00010
    ctx->pc = 0x178a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x178a40: 0xffbf0030
    ctx->pc = 0x178a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x178a44: 0x80802d
    ctx->pc = 0x178a44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178a48: 0x16000005
    ctx->pc = 0x178A48u;
    {
        const bool branch_taken_0x178a48 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x178A4Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
        if (branch_taken_0x178a48) {
            ctx->pc = 0x178A60u;
            goto label_178a60;
        }
    }
    ctx->pc = 0x178A50u;
    // 0x178a50: 0x3c05002c
    ctx->pc = 0x178a50u;
    SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
    // 0x178a54: 0x202d
    ctx->pc = 0x178a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178a58: 0x1000002d
    ctx->pc = 0x178A58u;
    {
        const bool branch_taken_0x178a58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x178A5Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294948312));
        if (branch_taken_0x178a58) {
            ctx->pc = 0x178B10u;
            goto label_178b10;
        }
    }
    ctx->pc = 0x178A60u;
label_178a60:
    // 0x178a60: 0x200202d
    ctx->pc = 0x178a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178a64: 0xc05e6a2
    ctx->pc = 0x178A64u;
    SET_GPR_U32(ctx, 31, 0x178A6Cu);
    ctx->pc = 0x178A68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x179A88u;
    {
        const uint32_t __entryPc = ctx->pc;
        htci_get_finf_0x179a88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178A6Cu; }
        else if (ctx->pc != 0x178A6Cu) { ctx->pc = 0x178A6Cu; }
    }
    if (ctx->pc != 0x178A6Cu) { return; }
    ctx->pc = 0x178A6Cu;
    // 0x178a6c: 0x3c020024
    ctx->pc = 0x178a6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x178a70: 0x200202d
    ctx->pc = 0x178a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178a74: 0x2451a2f8
    ctx->pc = 0x178a74u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294943480));
    // 0x178a78: 0xc05e4aa
    ctx->pc = 0x178A78u;
    SET_GPR_U32(ctx, 31, 0x178A80u);
    ctx->pc = 0x178A7Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1792A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        htci_conv_fname_0x1792a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178A80u; }
        else if (ctx->pc != 0x178A80u) { ctx->pc = 0x178A80u; }
    }
    if (ctx->pc != 0x178A80u) { return; }
    ctx->pc = 0x178A80u;
    // 0x178a80: 0x8fa20004
    ctx->pc = 0x178a80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x178a84: 0x54400049
    ctx->pc = 0x178A84u;
    {
        const bool branch_taken_0x178a84 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x178a84) {
            ctx->pc = 0x178A88u;
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x178BACu;
            goto label_178bac;
        }
    }
    ctx->pc = 0x178A8Cu;
    // 0x178a8c: 0xc05e21a
    ctx->pc = 0x178A8Cu;
    SET_GPR_U32(ctx, 31, 0x178A94u);
    ctx->pc = 0x178868u;
    {
        const uint32_t __entryPc = ctx->pc;
        htci_wait_io_0x178868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178A94u; }
        else if (ctx->pc != 0x178A94u) { ctx->pc = 0x178A94u; }
    }
    if (ctx->pc != 0x178A94u) { return; }
    ctx->pc = 0x178A94u;
    // 0x178a94: 0xc05d95e
    ctx->pc = 0x178A94u;
    SET_GPR_U32(ctx, 31, 0x178A9Cu);
    ctx->pc = 0x176578u;
    {
        const uint32_t __entryPc = ctx->pc;
        SRD_Lock_0x176578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178A9Cu; }
        else if (ctx->pc != 0x178A9Cu) { ctx->pc = 0x178A9Cu; }
    }
    if (ctx->pc != 0x178A9Cu) { return; }
    ctx->pc = 0x178A9Cu;
    // 0x178a9c: 0x220202d
    ctx->pc = 0x178a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178aa0: 0xc05623e
    ctx->pc = 0x178AA0u;
    SET_GPR_U32(ctx, 31, 0x178AA8u);
    ctx->pc = 0x178AA4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1588F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceOpen_0x1588f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178AA8u; }
        else if (ctx->pc != 0x178AA8u) { ctx->pc = 0x178AA8u; }
    }
    if (ctx->pc != 0x178AA8u) { return; }
    ctx->pc = 0x178AA8u;
    // 0x178aa8: 0xc05d966
    ctx->pc = 0x178AA8u;
    SET_GPR_U32(ctx, 31, 0x178AB0u);
    ctx->pc = 0x178AACu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x176598u;
    {
        const uint32_t __entryPc = ctx->pc;
        SRD_Unlock_0x176598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178AB0u; }
        else if (ctx->pc != 0x178AB0u) { ctx->pc = 0x178AB0u; }
    }
    if (ctx->pc != 0x178AB0u) { return; }
    ctx->pc = 0x178AB0u;
    // 0x178ab0: 0x6010009
    ctx->pc = 0x178AB0u;
    {
        const bool branch_taken_0x178ab0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x178AB4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
        if (branch_taken_0x178ab0) {
            ctx->pc = 0x178AD8u;
            goto label_178ad8;
        }
    }
    ctx->pc = 0x178AB8u;
    // 0x178ab8: 0x3c04002c
    ctx->pc = 0x178ab8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x178abc: 0x220282d
    ctx->pc = 0x178abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178ac0: 0xc05114a
    ctx->pc = 0x178AC0u;
    SET_GPR_U32(ctx, 31, 0x178AC8u);
    ctx->pc = 0x178AC4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294948360));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178AC8u; }
        else if (ctx->pc != 0x178AC8u) { ctx->pc = 0x178AC8u; }
    }
    if (ctx->pc != 0x178AC8u) { return; }
    ctx->pc = 0x178AC8u;
    // 0x178ac8: 0x3c05002c
    ctx->pc = 0x178ac8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
    // 0x178acc: 0x202d
    ctx->pc = 0x178accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178ad0: 0x1000000f
    ctx->pc = 0x178AD0u;
    {
        const bool branch_taken_0x178ad0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x178AD4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294948392));
        if (branch_taken_0x178ad0) {
            ctx->pc = 0x178B10u;
            goto label_178b10;
        }
    }
    ctx->pc = 0x178AD8u;
label_178ad8:
    // 0x178ad8: 0x34420004
    ctx->pc = 0x178ad8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 4));
    // 0x178adc: 0x16020004
    ctx->pc = 0x178ADCu;
    {
        const bool branch_taken_0x178adc = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x178AE0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 19));
        if (branch_taken_0x178adc) {
            ctx->pc = 0x178AF0u;
            goto label_178af0;
        }
    }
    ctx->pc = 0x178AE4u;
    // 0x178ae4: 0x3c04002c
    ctx->pc = 0x178ae4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x178ae8: 0x10000004
    ctx->pc = 0x178AE8u;
    {
        const bool branch_taken_0x178ae8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x178AECu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294948432));
        if (branch_taken_0x178ae8) {
            ctx->pc = 0x178AFCu;
            goto label_178afc;
        }
    }
    ctx->pc = 0x178AF0u;
label_178af0:
    // 0x178af0: 0x1602000b
    ctx->pc = 0x178AF0u;
    {
        const bool branch_taken_0x178af0 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x178AF4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x178af0) {
            ctx->pc = 0x178B20u;
            goto label_178b20;
        }
    }
    ctx->pc = 0x178AF8u;
    // 0x178af8: 0x2484b6b0
    ctx->pc = 0x178af8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294948528));
label_178afc:
    // 0x178afc: 0xc05114a
    ctx->pc = 0x178AFCu;
    SET_GPR_U32(ctx, 31, 0x178B04u);
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178B04u; }
        else if (ctx->pc != 0x178B04u) { ctx->pc = 0x178B04u; }
    }
    if (ctx->pc != 0x178B04u) { return; }
    ctx->pc = 0x178B04u;
    // 0x178b04: 0x3c05002c
    ctx->pc = 0x178b04u;
    SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
    // 0x178b08: 0x202d
    ctx->pc = 0x178b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178b0c: 0x24a5b688
    ctx->pc = 0x178b0cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294948488));
label_178b10:
    // 0x178b10: 0xc05e1ca
    ctx->pc = 0x178B10u;
    SET_GPR_U32(ctx, 31, 0x178B18u);
    ctx->pc = 0x178728u;
    {
        const uint32_t __entryPc = ctx->pc;
        htci_call_errfn_0x178728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178B18u; }
        else if (ctx->pc != 0x178B18u) { ctx->pc = 0x178B18u; }
    }
    if (ctx->pc != 0x178B18u) { return; }
    ctx->pc = 0x178B18u;
    // 0x178b18: 0x10000025
    ctx->pc = 0x178B18u;
    {
        const bool branch_taken_0x178b18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x178B1Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x178b18) {
            ctx->pc = 0x178BB0u;
            goto label_178bb0;
        }
    }
    ctx->pc = 0x178B20u;
label_178b20:
    // 0x178b20: 0xc05e21c
    ctx->pc = 0x178B20u;
    SET_GPR_U32(ctx, 31, 0x178B28u);
    ctx->pc = 0x178B24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x178870u;
    {
        const uint32_t __entryPc = ctx->pc;
        htci_wait_by_fd_0x178870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178B28u; }
        else if (ctx->pc != 0x178B28u) { ctx->pc = 0x178B28u; }
    }
    if (ctx->pc != 0x178B28u) { return; }
    ctx->pc = 0x178B28u;
    // 0x178b28: 0xc05d95e
    ctx->pc = 0x178B28u;
    SET_GPR_U32(ctx, 31, 0x178B30u);
    ctx->pc = 0x176578u;
    {
        const uint32_t __entryPc = ctx->pc;
        SRD_Lock_0x176578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178B30u; }
        else if (ctx->pc != 0x178B30u) { ctx->pc = 0x178B30u; }
    }
    if (ctx->pc != 0x178B30u) { return; }
    ctx->pc = 0x178B30u;
    // 0x178b30: 0x200202d
    ctx->pc = 0x178b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178b34: 0x282d
    ctx->pc = 0x178b34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178b38: 0xc056340
    ctx->pc = 0x178B38u;
    SET_GPR_U32(ctx, 31, 0x178B40u);
    ctx->pc = 0x178B3Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x158D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceLseek_0x158d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178B40u; }
        else if (ctx->pc != 0x178B40u) { ctx->pc = 0x178B40u; }
    }
    if (ctx->pc != 0x178B40u) { return; }
    ctx->pc = 0x178B40u;
    // 0x178b40: 0x40882d
    ctx->pc = 0x178b40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178b44: 0x6210008
    ctx->pc = 0x178B44u;
    {
        const bool branch_taken_0x178b44 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x178B48u;
        SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
        if (branch_taken_0x178b44) {
            ctx->pc = 0x178B68u;
            goto label_178b68;
        }
    }
    ctx->pc = 0x178B4Cu;
    // 0x178b4c: 0x202d
    ctx->pc = 0x178b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178b50: 0xc05e1ca
    ctx->pc = 0x178B50u;
    SET_GPR_U32(ctx, 31, 0x178B58u);
    ctx->pc = 0x178B54u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294948584));
    ctx->pc = 0x178728u;
    {
        const uint32_t __entryPc = ctx->pc;
        htci_call_errfn_0x178728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178B58u; }
        else if (ctx->pc != 0x178B58u) { ctx->pc = 0x178B58u; }
    }
    if (ctx->pc != 0x178B58u) { return; }
    ctx->pc = 0x178B58u;
    // 0x178b58: 0xc0562e0
    ctx->pc = 0x178B58u;
    SET_GPR_U32(ctx, 31, 0x178B60u);
    ctx->pc = 0x178B5Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x158B80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceClose_0x158b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178B60u; }
        else if (ctx->pc != 0x178B60u) { ctx->pc = 0x178B60u; }
    }
    if (ctx->pc != 0x178B60u) { return; }
    ctx->pc = 0x178B60u;
    // 0x178b60: 0x1000000a
    ctx->pc = 0x178B60u;
    {
        const bool branch_taken_0x178b60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x178b60) {
            ctx->pc = 0x178B8Cu;
            goto label_178b8c;
        }
    }
    ctx->pc = 0x178B68u;
label_178b68:
    // 0x178b68: 0xc05e21c
    ctx->pc = 0x178B68u;
    SET_GPR_U32(ctx, 31, 0x178B70u);
    ctx->pc = 0x178B6Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x178870u;
    {
        const uint32_t __entryPc = ctx->pc;
        htci_wait_by_fd_0x178870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178B70u; }
        else if (ctx->pc != 0x178B70u) { ctx->pc = 0x178B70u; }
    }
    if (ctx->pc != 0x178B70u) { return; }
    ctx->pc = 0x178B70u;
    // 0x178b70: 0xc0562e0
    ctx->pc = 0x178B70u;
    SET_GPR_U32(ctx, 31, 0x178B78u);
    ctx->pc = 0x178B74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x158B80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceClose_0x158b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178B78u; }
        else if (ctx->pc != 0x178B78u) { ctx->pc = 0x178B78u; }
    }
    if (ctx->pc != 0x178B78u) { return; }
    ctx->pc = 0x178B78u;
    // 0x178b78: 0x4410008
    ctx->pc = 0x178B78u;
    {
        const bool branch_taken_0x178b78 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x178B7Cu;
        SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
        if (branch_taken_0x178b78) {
            ctx->pc = 0x178B9Cu;
            goto label_178b9c;
        }
    }
    ctx->pc = 0x178B80u;
    // 0x178b80: 0x202d
    ctx->pc = 0x178b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178b84: 0xc05e1ca
    ctx->pc = 0x178B84u;
    SET_GPR_U32(ctx, 31, 0x178B8Cu);
    ctx->pc = 0x178B88u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294948632));
    ctx->pc = 0x178728u;
    {
        const uint32_t __entryPc = ctx->pc;
        htci_call_errfn_0x178728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178B8Cu; }
        else if (ctx->pc != 0x178B8Cu) { ctx->pc = 0x178B8Cu; }
    }
    if (ctx->pc != 0x178B8Cu) { return; }
    ctx->pc = 0x178B8Cu;
label_178b8c:
    // 0x178b8c: 0xc05d966
    ctx->pc = 0x178B8Cu;
    SET_GPR_U32(ctx, 31, 0x178B94u);
    ctx->pc = 0x176598u;
    {
        const uint32_t __entryPc = ctx->pc;
        SRD_Unlock_0x176598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178B94u; }
        else if (ctx->pc != 0x178B94u) { ctx->pc = 0x178B94u; }
    }
    if (ctx->pc != 0x178B94u) { return; }
    ctx->pc = 0x178B94u;
    // 0x178b94: 0x10000006
    ctx->pc = 0x178B94u;
    {
        const bool branch_taken_0x178b94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x178B98u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x178b94) {
            ctx->pc = 0x178BB0u;
            goto label_178bb0;
        }
    }
    ctx->pc = 0x178B9Cu;
label_178b9c:
    // 0x178b9c: 0xc05d966
    ctx->pc = 0x178B9Cu;
    SET_GPR_U32(ctx, 31, 0x178BA4u);
    ctx->pc = 0x176598u;
    {
        const uint32_t __entryPc = ctx->pc;
        SRD_Unlock_0x176598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178BA4u; }
        else if (ctx->pc != 0x178BA4u) { ctx->pc = 0x178BA4u; }
    }
    if (ctx->pc != 0x178BA4u) { return; }
    ctx->pc = 0x178BA4u;
    // 0x178ba4: 0x10000002
    ctx->pc = 0x178BA4u;
    {
        const bool branch_taken_0x178ba4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x178BA8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x178ba4) {
            ctx->pc = 0x178BB0u;
            goto label_178bb0;
        }
    }
    ctx->pc = 0x178BACu;
label_178bac:
    // 0x178bac: 0x220102d
    ctx->pc = 0x178bacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_178bb0:
    // 0x178bb0: 0xdfbf0030
    ctx->pc = 0x178bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x178bb4: 0xdfb10020
    ctx->pc = 0x178bb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178bb8: 0xdfb00010
    ctx->pc = 0x178bb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178bbc: 0x3e00008
    ctx->pc = 0x178BBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178BC0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178A60u: goto label_178a60;
            case 0x178AD8u: goto label_178ad8;
            case 0x178AF0u: goto label_178af0;
            case 0x178AFCu: goto label_178afc;
            case 0x178B10u: goto label_178b10;
            case 0x178B20u: goto label_178b20;
            case 0x178B68u: goto label_178b68;
            case 0x178B8Cu: goto label_178b8c;
            case 0x178B9Cu: goto label_178b9c;
            case 0x178BACu: goto label_178bac;
            case 0x178BB0u: goto label_178bb0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x178BC4u;
}
