#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: htCiOpen
// Address: 0x178ca0 - 0x178e34
void htCiOpen_0x178ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("htCiOpen");


    ctx->pc = 0x178ca0u;

    // 0x178ca0: 0x27bdffb0
    ctx->pc = 0x178ca0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x178ca4: 0xffb10020
    ctx->pc = 0x178ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x178ca8: 0xffbf0040
    ctx->pc = 0x178ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x178cac: 0x80882d
    ctx->pc = 0x178cacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178cb0: 0xffb20030
    ctx->pc = 0x178cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x178cb4: 0xffb00010
    ctx->pc = 0x178cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x178cb8: 0x16200005
    ctx->pc = 0x178CB8u;
    {
        const bool branch_taken_0x178cb8 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x178CBCu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
        if (branch_taken_0x178cb8) {
            ctx->pc = 0x178CD0u;
            goto label_178cd0;
        }
    }
    ctx->pc = 0x178CC0u;
    // 0x178cc0: 0x3c05002c
    ctx->pc = 0x178cc0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
    // 0x178cc4: 0x202d
    ctx->pc = 0x178cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178cc8: 0x1000000e
    ctx->pc = 0x178CC8u;
    {
        const bool branch_taken_0x178cc8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x178CCCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294948680));
        if (branch_taken_0x178cc8) {
            ctx->pc = 0x178D04u;
            goto label_178d04;
        }
    }
    ctx->pc = 0x178CD0u;
label_178cd0:
    // 0x178cd0: 0x10c00004
    ctx->pc = 0x178CD0u;
    {
        const bool branch_taken_0x178cd0 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x178CD4u;
        SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
        if (branch_taken_0x178cd0) {
            ctx->pc = 0x178CE4u;
            goto label_178ce4;
        }
    }
    ctx->pc = 0x178CD8u;
    // 0x178cd8: 0x202d
    ctx->pc = 0x178cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178cdc: 0x10000009
    ctx->pc = 0x178CDCu;
    {
        const bool branch_taken_0x178cdc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x178CE0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294948720));
        if (branch_taken_0x178cdc) {
            ctx->pc = 0x178D04u;
            goto label_178d04;
        }
    }
    ctx->pc = 0x178CE4u;
label_178ce4:
    // 0x178ce4: 0xc05e316
    ctx->pc = 0x178CE4u;
    SET_GPR_U32(ctx, 31, 0x178CECu);
    ctx->pc = 0x178C58u;
    {
        const uint32_t __entryPc = ctx->pc;
        htci_alloc_0x178c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178CECu; }
        else if (ctx->pc != 0x178CECu) { ctx->pc = 0x178CECu; }
    }
    if (ctx->pc != 0x178CECu) { return; }
    ctx->pc = 0x178CECu;
    // 0x178cec: 0x40802d
    ctx->pc = 0x178cecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178cf0: 0x16000008
    ctx->pc = 0x178CF0u;
    {
        const bool branch_taken_0x178cf0 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x178CF4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x178cf0) {
            ctx->pc = 0x178D14u;
            goto label_178d14;
        }
    }
    ctx->pc = 0x178CF8u;
    // 0x178cf8: 0x3c05002c
    ctx->pc = 0x178cf8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
    // 0x178cfc: 0x202d
    ctx->pc = 0x178cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178d00: 0x24a5b798
    ctx->pc = 0x178d00u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294948760));
label_178d04:
    // 0x178d04: 0xc05e1ca
    ctx->pc = 0x178D04u;
    SET_GPR_U32(ctx, 31, 0x178D0Cu);
    ctx->pc = 0x178728u;
    {
        const uint32_t __entryPc = ctx->pc;
        htci_call_errfn_0x178728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178D0Cu; }
        else if (ctx->pc != 0x178D0Cu) { ctx->pc = 0x178D0Cu; }
    }
    if (ctx->pc != 0x178D0Cu) { return; }
    ctx->pc = 0x178D0Cu;
    // 0x178d0c: 0x10000043
    ctx->pc = 0x178D0Cu;
    {
        const bool branch_taken_0x178d0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x178D10u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x178d0c) {
            ctx->pc = 0x178E1Cu;
            goto label_178e1c;
        }
    }
    ctx->pc = 0x178D14u;
label_178d14:
    // 0x178d14: 0xc05e6a2
    ctx->pc = 0x178D14u;
    SET_GPR_U32(ctx, 31, 0x178D1Cu);
    ctx->pc = 0x178D18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x179A88u;
    {
        const uint32_t __entryPc = ctx->pc;
        htci_get_finf_0x179a88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178D1Cu; }
        else if (ctx->pc != 0x178D1Cu) { ctx->pc = 0x178D1Cu; }
    }
    if (ctx->pc != 0x178D1Cu) { return; }
    ctx->pc = 0x178D1Cu;
    // 0x178d1c: 0x3c020024
    ctx->pc = 0x178d1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x178d20: 0x220202d
    ctx->pc = 0x178d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178d24: 0x2452a2f8
    ctx->pc = 0x178d24u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 4294943480));
    // 0x178d28: 0xc05e4aa
    ctx->pc = 0x178D28u;
    SET_GPR_U32(ctx, 31, 0x178D30u);
    ctx->pc = 0x178D2Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1792A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        htci_conv_fname_0x1792a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178D30u; }
        else if (ctx->pc != 0x178D30u) { ctx->pc = 0x178D30u; }
    }
    if (ctx->pc != 0x178D30u) { return; }
    ctx->pc = 0x178D30u;
    // 0x178d30: 0x8fa20004
    ctx->pc = 0x178d30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x178d34: 0x14400023
    ctx->pc = 0x178D34u;
    {
        const bool branch_taken_0x178d34 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x178D38u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x178d34) {
            ctx->pc = 0x178DC4u;
            goto label_178dc4;
        }
    }
    ctx->pc = 0x178D3Cu;
    // 0x178d3c: 0x3c04002c
    ctx->pc = 0x178d3cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x178d40: 0x220282d
    ctx->pc = 0x178d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178d44: 0xc05114a
    ctx->pc = 0x178D44u;
    SET_GPR_U32(ctx, 31, 0x178D4Cu);
    ctx->pc = 0x178D48u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294948808));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178D4Cu; }
        else if (ctx->pc != 0x178D4Cu) { ctx->pc = 0x178D4Cu; }
    }
    if (ctx->pc != 0x178D4Cu) { return; }
    ctx->pc = 0x178D4Cu;
    // 0x178d4c: 0xc05e28e
    ctx->pc = 0x178D4Cu;
    SET_GPR_U32(ctx, 31, 0x178D54u);
    ctx->pc = 0x178D50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x178A38u;
    {
        const uint32_t __entryPc = ctx->pc;
        htCiGetFileSize_0x178a38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178D54u; }
        else if (ctx->pc != 0x178D54u) { ctx->pc = 0x178D54u; }
    }
    if (ctx->pc != 0x178D54u) { return; }
    ctx->pc = 0x178D54u;
    // 0x178d54: 0x14400003
    ctx->pc = 0x178D54u;
    {
        const bool branch_taken_0x178d54 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x178D58u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x178d54) {
            ctx->pc = 0x178D64u;
            goto label_178d64;
        }
    }
    ctx->pc = 0x178D5Cu;
    // 0x178d5c: 0x1000002f
    ctx->pc = 0x178D5Cu;
    {
        const bool branch_taken_0x178d5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x178D60u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x178d5c) {
            ctx->pc = 0x178E1Cu;
            goto label_178e1c;
        }
    }
    ctx->pc = 0x178D64u;
label_178d64:
    // 0x178d64: 0xc05e21a
    ctx->pc = 0x178D64u;
    SET_GPR_U32(ctx, 31, 0x178D6Cu);
    ctx->pc = 0x178868u;
    {
        const uint32_t __entryPc = ctx->pc;
        htci_wait_io_0x178868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178D6Cu; }
        else if (ctx->pc != 0x178D6Cu) { ctx->pc = 0x178D6Cu; }
    }
    if (ctx->pc != 0x178D6Cu) { return; }
    ctx->pc = 0x178D6Cu;
    // 0x178d6c: 0xc05d95e
    ctx->pc = 0x178D6Cu;
    SET_GPR_U32(ctx, 31, 0x178D74u);
    ctx->pc = 0x176578u;
    {
        const uint32_t __entryPc = ctx->pc;
        SRD_Lock_0x176578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178D74u; }
        else if (ctx->pc != 0x178D74u) { ctx->pc = 0x178D74u; }
    }
    if (ctx->pc != 0x178D74u) { return; }
    ctx->pc = 0x178D74u;
    // 0x178d74: 0x3c020024
    ctx->pc = 0x178d74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x178d78: 0x240202d
    ctx->pc = 0x178d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178d7c: 0xc05623e
    ctx->pc = 0x178D7Cu;
    SET_GPR_U32(ctx, 31, 0x178D84u);
    ctx->pc = 0x178D80u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294943800)));
    ctx->pc = 0x1588F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceOpen_0x1588f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178D84u; }
        else if (ctx->pc != 0x178D84u) { ctx->pc = 0x178D84u; }
    }
    if (ctx->pc != 0x178D84u) { return; }
    ctx->pc = 0x178D84u;
    // 0x178d84: 0xc05d966
    ctx->pc = 0x178D84u;
    SET_GPR_U32(ctx, 31, 0x178D8Cu);
    ctx->pc = 0x178D88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->pc = 0x176598u;
    {
        const uint32_t __entryPc = ctx->pc;
        SRD_Unlock_0x176598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178D8Cu; }
        else if (ctx->pc != 0x178D8Cu) { ctx->pc = 0x178D8Cu; }
    }
    if (ctx->pc != 0x178D8Cu) { return; }
    ctx->pc = 0x178D8Cu;
    // 0x178d8c: 0x8e04000c
    ctx->pc = 0x178d8cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x178d90: 0x4810008
    ctx->pc = 0x178D90u;
    {
        const bool branch_taken_0x178d90 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x178D94u;
        SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
        if (branch_taken_0x178d90) {
            ctx->pc = 0x178DB4u;
            goto label_178db4;
        }
    }
    ctx->pc = 0x178D98u;
    // 0x178d98: 0x202d
    ctx->pc = 0x178d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178d9c: 0xc05e1ca
    ctx->pc = 0x178D9Cu;
    SET_GPR_U32(ctx, 31, 0x178DA4u);
    ctx->pc = 0x178DA0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294948848));
    ctx->pc = 0x178728u;
    {
        const uint32_t __entryPc = ctx->pc;
        htci_call_errfn_0x178728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178DA4u; }
        else if (ctx->pc != 0x178DA4u) { ctx->pc = 0x178DA4u; }
    }
    if (ctx->pc != 0x178DA4u) { return; }
    ctx->pc = 0x178DA4u;
    // 0x178da4: 0xc05e324
    ctx->pc = 0x178DA4u;
    SET_GPR_U32(ctx, 31, 0x178DACu);
    ctx->pc = 0x178DA8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x178C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        htci_free_0x178c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178DACu; }
        else if (ctx->pc != 0x178DACu) { ctx->pc = 0x178DACu; }
    }
    if (ctx->pc != 0x178DACu) { return; }
    ctx->pc = 0x178DACu;
    // 0x178dac: 0x1000001b
    ctx->pc = 0x178DACu;
    {
        const bool branch_taken_0x178dac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x178DB0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x178dac) {
            ctx->pc = 0x178E1Cu;
            goto label_178e1c;
        }
    }
    ctx->pc = 0x178DB4u;
label_178db4:
    // 0x178db4: 0xc05e21c
    ctx->pc = 0x178DB4u;
    SET_GPR_U32(ctx, 31, 0x178DBCu);
    ctx->pc = 0x178870u;
    {
        const uint32_t __entryPc = ctx->pc;
        htci_wait_by_fd_0x178870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178DBCu; }
        else if (ctx->pc != 0x178DBCu) { ctx->pc = 0x178DBCu; }
    }
    if (ctx->pc != 0x178DBCu) { return; }
    ctx->pc = 0x178DBCu;
    // 0x178dbc: 0x10000006
    ctx->pc = 0x178DBCu;
    {
        const bool branch_taken_0x178dbc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x178DC0u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x178dbc) {
            ctx->pc = 0x178DD8u;
            goto label_178dd8;
        }
    }
    ctx->pc = 0x178DC4u;
label_178dc4:
    // 0x178dc4: 0xa2020001
    ctx->pc = 0x178dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x178dc8: 0x8fa30000
    ctx->pc = 0x178dc8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178dcc: 0xae03000c
    ctx->pc = 0x178dccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x178dd0: 0x8fa20004
    ctx->pc = 0x178dd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x178dd4: 0xae020010
    ctx->pc = 0x178dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_178dd8:
    // 0x178dd8: 0x8e020010
    ctx->pc = 0x178dd8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x178ddc: 0x2403ffff
    ctx->pc = 0x178ddcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x178de0: 0x24050001
    ctx->pc = 0x178de0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x178de4: 0xae000018
    ctx->pc = 0x178de4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x178de8: 0x244407ff
    ctx->pc = 0x178de8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 2047));
    // 0x178dec: 0xa2050000
    ctx->pc = 0x178decu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x178df0: 0x24420ffe
    ctx->pc = 0x178df0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4094));
    // 0x178df4: 0x64182a
    ctx->pc = 0x178df4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
    // 0x178df8: 0x83100b
    ctx->pc = 0x178df8u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
    // 0x178dfc: 0xae00001c
    ctx->pc = 0x178dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x178e00: 0x212c3
    ctx->pc = 0x178e00u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    // 0x178e04: 0xae000020
    ctx->pc = 0x178e04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x178e08: 0xae020014
    ctx->pc = 0x178e08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x178e0c: 0xa2000003
    ctx->pc = 0x178e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x178e10: 0x200102d
    ctx->pc = 0x178e10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178e14: 0xae000008
    ctx->pc = 0x178e14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x178e18: 0xa2000002
    ctx->pc = 0x178e18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_178e1c:
    // 0x178e1c: 0xdfbf0040
    ctx->pc = 0x178e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x178e20: 0xdfb20030
    ctx->pc = 0x178e20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x178e24: 0xdfb10020
    ctx->pc = 0x178e24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178e28: 0xdfb00010
    ctx->pc = 0x178e28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178e2c: 0x3e00008
    ctx->pc = 0x178E2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178E30u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178CD0u: goto label_178cd0;
            case 0x178CE4u: goto label_178ce4;
            case 0x178D04u: goto label_178d04;
            case 0x178D14u: goto label_178d14;
            case 0x178D64u: goto label_178d64;
            case 0x178DB4u: goto label_178db4;
            case 0x178DC4u: goto label_178dc4;
            case 0x178DD8u: goto label_178dd8;
            case 0x178E1Cu: goto label_178e1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x178E34u;
}
