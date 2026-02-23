#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initSparseTbl
// Address: 0x17ede8 - 0x17efe0
void initSparseTbl_0x17ede8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initSparseTbl");


    ctx->pc = 0x17ede8u;

    // 0x17ede8: 0x27bdfb50
    ctx->pc = 0x17ede8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966096));
    // 0x17edec: 0x3c02002e
    ctx->pc = 0x17edecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
    // 0x17edf0: 0xffbe0490
    ctx->pc = 0x17edf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1168), GPR_U64(ctx, 30));
    // 0x17edf4: 0x282d
    ctx->pc = 0x17edf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17edf8: 0xffb10420
    ctx->pc = 0x17edf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 17));
    // 0x17edfc: 0x24442000
    ctx->pc = 0x17edfcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 8192));
    // 0x17ee00: 0xffbf04a0
    ctx->pc = 0x17ee00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1184), GPR_U64(ctx, 31));
    // 0x17ee04: 0x24062000
    ctx->pc = 0x17ee04u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8192));
    // 0x17ee08: 0xffb70480
    ctx->pc = 0x17ee08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1152), GPR_U64(ctx, 23));
    // 0x17ee0c: 0x882d
    ctx->pc = 0x17ee0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ee10: 0xffb60470
    ctx->pc = 0x17ee10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1136), GPR_U64(ctx, 22));
    // 0x17ee14: 0xffb50460
    ctx->pc = 0x17ee14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1120), GPR_U64(ctx, 21));
    // 0x17ee18: 0xffb40450
    ctx->pc = 0x17ee18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1104), GPR_U64(ctx, 20));
    // 0x17ee1c: 0xffb30440
    ctx->pc = 0x17ee1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1088), GPR_U64(ctx, 19));
    // 0x17ee20: 0xffb20430
    ctx->pc = 0x17ee20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1072), GPR_U64(ctx, 18));
    // 0x17ee24: 0xc050cfe
    ctx->pc = 0x17EE24u;
    SET_GPR_U32(ctx, 31, 0x17EE2Cu);
    ctx->pc = 0x17EE28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 16));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EE2Cu; }
        else if (ctx->pc != 0x17EE2Cu) { ctx->pc = 0x17EE2Cu; }
    }
    if (ctx->pc != 0x17EE2Cu) { return; }
    ctx->pc = 0x17EE2Cu;
    // 0x17ee2c: 0xc05f96c
    ctx->pc = 0x17EE2Cu;
    SET_GPR_U32(ctx, 31, 0x17EE34u);
    ctx->pc = 0x17E5B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DCT_AcInit_0x17e5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EE34u; }
        else if (ctx->pc != 0x17EE34u) { ctx->pc = 0x17EE34u; }
    }
    if (ctx->pc != 0x17EE34u) { return; }
    ctx->pc = 0x17EE34u;
    // 0x17ee34: 0x27be0200
    ctx->pc = 0x17ee34u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 29), 512));
    // 0x17ee38: 0x1110c0
    ctx->pc = 0x17ee38u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 3));
    // 0x17ee3c: 0x0
    ctx->pc = 0x17ee3cu;
    // NOP
label_17ee40:
    // 0x17ee40: 0x111840
    ctx->pc = 0x17ee40u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 1));
    // 0x17ee44: 0x3a29821
    ctx->pc = 0x17ee44u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x17ee48: 0xa02d
    ctx->pc = 0x17ee48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ee4c: 0x3c020024
    ctx->pc = 0x17ee4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x17ee50: 0x11b9c0
    ctx->pc = 0x17ee50u;
    SET_GPR_U32(ctx, 23, SLL32(GPR_U32(ctx, 17), 7));
    // 0x17ee54: 0x244214b8
    ctx->pc = 0x17ee54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5304));
    // 0x17ee58: 0x3a0802d
    ctx->pc = 0x17ee58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ee5c: 0x629021
    ctx->pc = 0x17ee5cu;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17ee60: 0x26220001
    ctx->pc = 0x17ee60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 1));
    // 0x17ee64: 0xafa20400
    ctx->pc = 0x17ee64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1024), GPR_U32(ctx, 2));
label_17ee68:
    // 0x17ee68: 0x16910009
    ctx->pc = 0x17EE68u;
    {
        const bool branch_taken_0x17ee68 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 17));
        ctx->pc = 0x17EE6Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17ee68) {
            ctx->pc = 0x17EE90u;
            goto label_17ee90;
        }
    }
    ctx->pc = 0x17EE70u;
    // 0x17ee70: 0xc052e16
    ctx->pc = 0x17EE70u;
    SET_GPR_U32(ctx, 31, 0x17EE78u);
    ctx->pc = 0x17EE74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x14B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x14b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EE78u; }
        else if (ctx->pc != 0x17EE78u) { ctx->pc = 0x17EE78u; }
    }
    if (ctx->pc != 0x17EE78u) { return; }
    ctx->pc = 0x17EE78u;
    // 0x17ee78: 0x340482a0
    ctx->pc = 0x17ee78u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 33440));
    // 0x17ee7c: 0x423fc
    ctx->pc = 0x17ee7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x17ee80: 0xc052d62
    ctx->pc = 0x17EE80u;
    SET_GPR_U32(ctx, 31, 0x17EE88u);
    ctx->pc = 0x17EE84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B588u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpdiv_0x14b588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EE88u; }
        else if (ctx->pc != 0x17EE88u) { ctx->pc = 0x17EE88u; }
    }
    if (ctx->pc != 0x17EE88u) { return; }
    ctx->pc = 0x17EE88u;
    // 0x17ee88: 0x10000002
    ctx->pc = 0x17EE88u;
    {
        const bool branch_taken_0x17ee88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17EE8Cu;
        WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 2));
        if (branch_taken_0x17ee88) {
            ctx->pc = 0x17EE94u;
            goto label_17ee94;
        }
    }
    ctx->pc = 0x17EE90u;
label_17ee90:
    // 0x17ee90: 0xfe020000
    ctx->pc = 0x17ee90u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
label_17ee94:
    // 0x17ee94: 0x26940001
    ctx->pc = 0x17ee94u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
    // 0x17ee98: 0x2a820040
    ctx->pc = 0x17ee98u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 64));
    // 0x17ee9c: 0x1440fff2
    ctx->pc = 0x17EE9Cu;
    {
        const bool branch_taken_0x17ee9c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17EEA0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 8));
        if (branch_taken_0x17ee9c) {
            ctx->pc = 0x17EE68u;
            goto label_17ee68;
        }
    }
    ctx->pc = 0x17EEA4u;
    // 0x17eea4: 0x3a0202d
    ctx->pc = 0x17eea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eea8: 0xc05fa58
    ctx->pc = 0x17EEA8u;
    SET_GPR_U32(ctx, 31, 0x17EEB0u);
    ctx->pc = 0x17EEACu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17E960u;
    {
        const uint32_t __entryPc = ctx->pc;
        DCT_AcIdctDouble_0x17e960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EEB0u; }
        else if (ctx->pc != 0x17EEB0u) { ctx->pc = 0x17EEB0u; }
    }
    if (ctx->pc != 0x17EEB0u) { return; }
    ctx->pc = 0x17EEB0u;
    // 0x17eeb0: 0x3416ff80
    ctx->pc = 0x17eeb0u;
    SET_GPR_U32(ctx, 22, OR32(GPR_U32(ctx, 0), 65408));
    // 0x17eeb4: 0x16b3bc
    ctx->pc = 0x17eeb4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) << (32 + 14));
    // 0x17eeb8: 0x3c02002e
    ctx->pc = 0x17eeb8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
    // 0x17eebc: 0x3c0a82d
    ctx->pc = 0x17eebcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eec0: 0x24422000
    ctx->pc = 0x17eec0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8192));
    // 0x17eec4: 0x2414003f
    ctx->pc = 0x17eec4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 63));
    // 0x17eec8: 0x2e29821
    ctx->pc = 0x17eec8u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x17eecc: 0x0
    ctx->pc = 0x17eeccu;
    // NOP
label_17eed0:
    // 0x17eed0: 0xdeb00000
    ctx->pc = 0x17eed0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x17eed4: 0x282d
    ctx->pc = 0x17eed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eed8: 0xc052e02
    ctx->pc = 0x17EED8u;
    SET_GPR_U32(ctx, 31, 0x17EEE0u);
    ctx->pc = 0x17EEDCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B808u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x14b808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EEE0u; }
        else if (ctx->pc != 0x17EEE0u) { ctx->pc = 0x17EEE0u; }
    }
    if (ctx->pc != 0x17EEE0u) { return; }
    ctx->pc = 0x17EEE0u;
    // 0x17eee0: 0x4400012
    ctx->pc = 0x17EEE0u;
    {
        const bool branch_taken_0x17eee0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x17EEE4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17eee0) {
            ctx->pc = 0x17EF2Cu;
            goto label_17ef2c;
        }
    }
    ctx->pc = 0x17EEE8u;
    // 0x17eee8: 0x200202d
    ctx->pc = 0x17eee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eeec: 0xc052c88
    ctx->pc = 0x17EEECu;
    SET_GPR_U32(ctx, 31, 0x17EEF4u);
    ctx->pc = 0x17EEF0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B220u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x14b220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EEF4u; }
        else if (ctx->pc != 0x17EEF4u) { ctx->pc = 0x17EEF4u; }
    }
    if (ctx->pc != 0x17EEF4u) { return; }
    ctx->pc = 0x17EEF4u;
    // 0x17eef4: 0x40802d
    ctx->pc = 0x17eef4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eef8: 0xc052e44
    ctx->pc = 0x17EEF8u;
    SET_GPR_U32(ctx, 31, 0x17EF00u);
    ctx->pc = 0x17EEFCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B910u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x14b910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EF00u; }
        else if (ctx->pc != 0x17EF00u) { ctx->pc = 0x17EF00u; }
    }
    if (ctx->pc != 0x17EF00u) { return; }
    ctx->pc = 0x17EF00u;
    // 0x17ef00: 0x40882d
    ctx->pc = 0x17ef00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ef04: 0x220202d
    ctx->pc = 0x17ef04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ef08: 0xc052e16
    ctx->pc = 0x17EF08u;
    SET_GPR_U32(ctx, 31, 0x17EF10u);
    ctx->pc = 0x17EF0Cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x14b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EF10u; }
        else if (ctx->pc != 0x17EF10u) { ctx->pc = 0x17EF10u; }
    }
    if (ctx->pc != 0x17EF10u) { return; }
    ctx->pc = 0x17EF10u;
    // 0x17ef10: 0x40202d
    ctx->pc = 0x17ef10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ef14: 0xc052e02
    ctx->pc = 0x17EF14u;
    SET_GPR_U32(ctx, 31, 0x17EF1Cu);
    ctx->pc = 0x17EF18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B808u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x14b808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EF1Cu; }
        else if (ctx->pc != 0x17EF1Cu) { ctx->pc = 0x17EF1Cu; }
    }
    if (ctx->pc != 0x17EF1Cu) { return; }
    ctx->pc = 0x17EF1Cu;
    // 0x17ef1c: 0x5c400001
    ctx->pc = 0x17EF1Cu;
    {
        const bool branch_taken_0x17ef1c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x17ef1c) {
            ctx->pc = 0x17EF20u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->pc = 0x17EF24u;
            goto label_17ef24;
        }
    }
    ctx->pc = 0x17EF24u;
label_17ef24:
    // 0x17ef24: 0x10000016
    ctx->pc = 0x17EF24u;
    {
        const bool branch_taken_0x17ef24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17EF28u;
        WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 18));
        if (branch_taken_0x17ef24) {
            ctx->pc = 0x17EF80u;
            goto label_17ef80;
        }
    }
    ctx->pc = 0x17EF2Cu;
label_17ef2c:
    // 0x17ef2c: 0xc052c9e
    ctx->pc = 0x17EF2Cu;
    SET_GPR_U32(ctx, 31, 0x17EF34u);
    ctx->pc = 0x17EF30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B278u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x14b278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EF34u; }
        else if (ctx->pc != 0x17EF34u) { ctx->pc = 0x17EF34u; }
    }
    if (ctx->pc != 0x17EF34u) { return; }
    ctx->pc = 0x17EF34u;
    // 0x17ef34: 0x260902d
    ctx->pc = 0x17ef34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ef38: 0x40202d
    ctx->pc = 0x17ef38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ef3c: 0xc052c88
    ctx->pc = 0x17EF3Cu;
    SET_GPR_U32(ctx, 31, 0x17EF44u);
    ctx->pc = 0x17EF40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B220u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x14b220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EF44u; }
        else if (ctx->pc != 0x17EF44u) { ctx->pc = 0x17EF44u; }
    }
    if (ctx->pc != 0x17EF44u) { return; }
    ctx->pc = 0x17EF44u;
    // 0x17ef44: 0x40802d
    ctx->pc = 0x17ef44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ef48: 0xc052e44
    ctx->pc = 0x17EF48u;
    SET_GPR_U32(ctx, 31, 0x17EF50u);
    ctx->pc = 0x17EF4Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B910u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x14b910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EF50u; }
        else if (ctx->pc != 0x17EF50u) { ctx->pc = 0x17EF50u; }
    }
    if (ctx->pc != 0x17EF50u) { return; }
    ctx->pc = 0x17EF50u;
    // 0x17ef50: 0x40882d
    ctx->pc = 0x17ef50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ef54: 0xc052e16
    ctx->pc = 0x17EF54u;
    SET_GPR_U32(ctx, 31, 0x17EF5Cu);
    ctx->pc = 0x17EF58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x14b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EF5Cu; }
        else if (ctx->pc != 0x17EF5Cu) { ctx->pc = 0x17EF5Cu; }
    }
    if (ctx->pc != 0x17EF5Cu) { return; }
    ctx->pc = 0x17EF5Cu;
    // 0x17ef5c: 0x40202d
    ctx->pc = 0x17ef5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ef60: 0xc052e02
    ctx->pc = 0x17EF60u;
    SET_GPR_U32(ctx, 31, 0x17EF68u);
    ctx->pc = 0x17EF64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B808u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x14b808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EF68u; }
        else if (ctx->pc != 0x17EF68u) { ctx->pc = 0x17EF68u; }
    }
    if (ctx->pc != 0x17EF68u) { return; }
    ctx->pc = 0x17EF68u;
    // 0x17ef68: 0x18400003
    ctx->pc = 0x17EF68u;
    {
        const bool branch_taken_0x17ef68 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x17EF6Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x17ef68) {
            ctx->pc = 0x17EF78u;
            goto label_17ef78;
        }
    }
    ctx->pc = 0x17EF70u;
    // 0x17ef70: 0x10000002
    ctx->pc = 0x17EF70u;
    {
        const bool branch_taken_0x17ef70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17EF74u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        if (branch_taken_0x17ef70) {
            ctx->pc = 0x17EF7Cu;
            goto label_17ef7c;
        }
    }
    ctx->pc = 0x17EF78u;
label_17ef78:
    // 0x17ef78: 0x111023
    ctx->pc = 0x17ef78u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
label_17ef7c:
    // 0x17ef7c: 0xa6420000
    ctx->pc = 0x17ef7cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
label_17ef80:
    // 0x17ef80: 0x26730002
    ctx->pc = 0x17ef80u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 2));
    // 0x17ef84: 0x2694ffff
    ctx->pc = 0x17ef84u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x17ef88: 0x681ffd1
    ctx->pc = 0x17EF88u;
    {
        const bool branch_taken_0x17ef88 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x17EF8Cu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 8));
        if (branch_taken_0x17ef88) {
            ctx->pc = 0x17EED0u;
            goto label_17eed0;
        }
    }
    ctx->pc = 0x17EF90u;
    // 0x17ef90: 0x3c02002e
    ctx->pc = 0x17ef90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
    // 0x17ef94: 0x8fb10400
    ctx->pc = 0x17ef94u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x17ef98: 0x24442000
    ctx->pc = 0x17ef98u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 8192));
    // 0x17ef9c: 0xc05fb60
    ctx->pc = 0x17EF9Cu;
    SET_GPR_U32(ctx, 31, 0x17EFA4u);
    ctx->pc = 0x17EFA0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
    ctx->pc = 0x17ED80u;
    {
        const uint32_t __entryPc = ctx->pc;
        swap_pre_idct_tbl_0x17ed80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EFA4u; }
        else if (ctx->pc != 0x17EFA4u) { ctx->pc = 0x17EFA4u; }
    }
    if (ctx->pc != 0x17EFA4u) { return; }
    ctx->pc = 0x17EFA4u;
    // 0x17efa4: 0x2a220040
    ctx->pc = 0x17efa4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 64));
    // 0x17efa8: 0x5440ffa5
    ctx->pc = 0x17EFA8u;
    {
        const bool branch_taken_0x17efa8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x17efa8) {
            ctx->pc = 0x17EFACu;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 3));
            ctx->pc = 0x17EE40u;
            goto label_17ee40;
        }
    }
    ctx->pc = 0x17EFB0u;
    // 0x17efb0: 0xdfbf04a0
    ctx->pc = 0x17efb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x17efb4: 0xdfbe0490
    ctx->pc = 0x17efb4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x17efb8: 0xdfb70480
    ctx->pc = 0x17efb8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1152)));
    // 0x17efbc: 0xdfb60470
    ctx->pc = 0x17efbcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x17efc0: 0xdfb50460
    ctx->pc = 0x17efc0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x17efc4: 0xdfb40450
    ctx->pc = 0x17efc4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x17efc8: 0xdfb30440
    ctx->pc = 0x17efc8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x17efcc: 0xdfb20430
    ctx->pc = 0x17efccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x17efd0: 0xdfb10420
    ctx->pc = 0x17efd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x17efd4: 0xdfb00410
    ctx->pc = 0x17efd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x17efd8: 0x3e00008
    ctx->pc = 0x17EFD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EFDCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 1200));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17EE40u: goto label_17ee40;
            case 0x17EE68u: goto label_17ee68;
            case 0x17EE90u: goto label_17ee90;
            case 0x17EE94u: goto label_17ee94;
            case 0x17EED0u: goto label_17eed0;
            case 0x17EF24u: goto label_17ef24;
            case 0x17EF2Cu: goto label_17ef2c;
            case 0x17EF78u: goto label_17ef78;
            case 0x17EF7Cu: goto label_17ef7c;
            case 0x17EF80u: goto label_17ef80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17EFE0u;
}
