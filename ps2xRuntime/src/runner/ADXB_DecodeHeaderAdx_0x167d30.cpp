#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXB_DecodeHeaderAdx
// Address: 0x167d30 - 0x167ec8
void ADXB_DecodeHeaderAdx_0x167d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXB_DecodeHeaderAdx");


    ctx->pc = 0x167d30u;

    // 0x167d30: 0x27bdffa0
    ctx->pc = 0x167d30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x167d34: 0x24020001
    ctx->pc = 0x167d34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x167d38: 0xffb20040
    ctx->pc = 0x167d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x167d3c: 0xffb00020
    ctx->pc = 0x167d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x167d40: 0xc0902d
    ctx->pc = 0x167d40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167d44: 0x80802d
    ctx->pc = 0x167d44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167d48: 0xffb10030
    ctx->pc = 0x167d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x167d4c: 0xffbf0050
    ctx->pc = 0x167d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x167d50: 0x26060010
    ctx->pc = 0x167d50u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 16));
    // 0x167d54: 0xa6020002
    ctx->pc = 0x167d54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x167d58: 0xa0882d
    ctx->pc = 0x167d58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167d5c: 0x26030018
    ctx->pc = 0x167d5cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 24));
    // 0x167d60: 0xafa60008
    ctx->pc = 0x167d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x167d64: 0x220202d
    ctx->pc = 0x167d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167d68: 0xafa30000
    ctx->pc = 0x167d68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x167d6c: 0x240282d
    ctx->pc = 0x167d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167d70: 0x27a60010
    ctx->pc = 0x167d70u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 16));
    // 0x167d74: 0x2607000c
    ctx->pc = 0x167d74u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 12));
    // 0x167d78: 0x2608000d
    ctx->pc = 0x167d78u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 13));
    // 0x167d7c: 0x2609000f
    ctx->pc = 0x167d7cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 16), 15));
    // 0x167d80: 0x260a000e
    ctx->pc = 0x167d80u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 16), 14));
    // 0x167d84: 0xc05a594
    ctx->pc = 0x167D84u;
    SET_GPR_U32(ctx, 31, 0x167D8Cu);
    ctx->pc = 0x167D88u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 16), 20));
    ctx->pc = 0x169650u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADX_DecodeInfo_0x169650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167D8Cu; }
        else if (ctx->pc != 0x167D8Cu) { ctx->pc = 0x167D8Cu; }
    }
    if (ctx->pc != 0x167D8Cu) { return; }
    ctx->pc = 0x167D8Cu;
    // 0x167d8c: 0x4400048
    ctx->pc = 0x167D8Cu;
    {
        const bool branch_taken_0x167d8c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x167D90u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x167d8c) {
            ctx->pc = 0x167EB0u;
            goto label_167eb0;
        }
    }
    ctx->pc = 0x167D94u;
    // 0x167d94: 0x8202000c
    ctx->pc = 0x167d94u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x167d98: 0x28420005
    ctx->pc = 0x167d98u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 5));
    // 0x167d9c: 0x14400015
    ctx->pc = 0x167D9Cu;
    {
        const bool branch_taken_0x167d9c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x167DA0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x167d9c) {
            ctx->pc = 0x167DF4u;
            goto label_167df4;
        }
    }
    ctx->pc = 0x167DA4u;
    // 0x167da4: 0x8e0200ac
    ctx->pc = 0x167da4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x167da8: 0x54400008
    ctx->pc = 0x167DA8u;
    {
        const bool branch_taken_0x167da8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x167da8) {
            ctx->pc = 0x167DACu;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
            ctx->pc = 0x167DCCu;
            goto label_167dcc;
        }
    }
    ctx->pc = 0x167DB0u;
    // 0x167db0: 0x3c04002c
    ctx->pc = 0x167db0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x167db4: 0x3c05002c
    ctx->pc = 0x167db4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
    // 0x167db8: 0x248490b8
    ctx->pc = 0x167db8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294938808));
    // 0x167dbc: 0xc05a868
    ctx->pc = 0x167DBCu;
    SET_GPR_U32(ctx, 31, 0x167DC4u);
    ctx->pc = 0x167DC0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294938840));
    ctx->pc = 0x16A1A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXERR_CallErrFunc2_0x16a1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167DC4u; }
        else if (ctx->pc != 0x167DC4u) { ctx->pc = 0x167DC4u; }
    }
    if (ctx->pc != 0x167DC4u) { return; }
    ctx->pc = 0x167DC4u;
    // 0x167dc4: 0x1000003a
    ctx->pc = 0x167DC4u;
    {
        const bool branch_taken_0x167dc4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x167DC8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x167dc4) {
            ctx->pc = 0x167EB0u;
            goto label_167eb0;
        }
    }
    ctx->pc = 0x167DCCu;
label_167dcc:
    // 0x167dcc: 0x240300c0
    ctx->pc = 0x167dccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 192));
    // 0x167dd0: 0x24050008
    ctx->pc = 0x167dd0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    // 0x167dd4: 0x24060060
    ctx->pc = 0x167dd4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 96));
    // 0x167dd8: 0x431018
    ctx->pc = 0x167dd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x167ddc: 0x2404000a
    ctx->pc = 0x167ddcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 10));
    // 0x167de0: 0xa205000d
    ctx->pc = 0x167de0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 5));
    // 0x167de4: 0xae060010
    ctx->pc = 0x167de4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
    // 0x167de8: 0xa60400a8
    ctx->pc = 0x167de8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 168), (uint16_t)GPR_U32(ctx, 4));
    // 0x167dec: 0x10000016
    ctx->pc = 0x167DECu;
    {
        const bool branch_taken_0x167dec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x167DF0u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x167dec) {
            ctx->pc = 0x167E48u;
            goto label_167e48;
        }
    }
    ctx->pc = 0x167DF4u;
label_167df4:
    // 0x167df4: 0x240282d
    ctx->pc = 0x167df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167df8: 0xc05a5d6
    ctx->pc = 0x167DF8u;
    SET_GPR_U32(ctx, 31, 0x167E00u);
    ctx->pc = 0x167DFCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 28));
    ctx->pc = 0x169758u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADX_DecodeInfoExADPCM2_0x169758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167E00u; }
        else if (ctx->pc != 0x167E00u) { ctx->pc = 0x167E00u; }
    }
    if (ctx->pc != 0x167E00u) { return; }
    ctx->pc = 0x167E00u;
    // 0x167e00: 0x440002b
    ctx->pc = 0x167E00u;
    {
        const bool branch_taken_0x167e00 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x167E04u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x167e00) {
            ctx->pc = 0x167EB0u;
            goto label_167eb0;
        }
    }
    ctx->pc = 0x167E08u;
    // 0x167e08: 0x8e040008
    ctx->pc = 0x167e08u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x167e0c: 0x8e050014
    ctx->pc = 0x167e0cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x167e10: 0xc05cfdc
    ctx->pc = 0x167E10u;
    SET_GPR_U32(ctx, 31, 0x167E18u);
    ctx->pc = 0x167E14u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->pc = 0x173F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXPD_SetCoef_0x173f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167E18u; }
        else if (ctx->pc != 0x167E18u) { ctx->pc = 0x167E18u; }
    }
    if (ctx->pc != 0x167E18u) { return; }
    ctx->pc = 0x167E18u;
    // 0x167e18: 0x26020034
    ctx->pc = 0x167e18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 52));
    // 0x167e1c: 0x220202d
    ctx->pc = 0x167e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167e20: 0xafa20000
    ctx->pc = 0x167e20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x167e24: 0x240282d
    ctx->pc = 0x167e24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167e28: 0x26060020
    ctx->pc = 0x167e28u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 32));
    // 0x167e2c: 0x26070024
    ctx->pc = 0x167e2cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 36));
    // 0x167e30: 0x26080026
    ctx->pc = 0x167e30u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 38));
    // 0x167e34: 0x26090028
    ctx->pc = 0x167e34u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 16), 40));
    // 0x167e38: 0x260a002c
    ctx->pc = 0x167e38u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 16), 44));
    // 0x167e3c: 0xc05a5f6
    ctx->pc = 0x167E3Cu;
    SET_GPR_U32(ctx, 31, 0x167E44u);
    ctx->pc = 0x167E40u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 16), 48));
    ctx->pc = 0x1697D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADX_DecodeInfoExLoop_0x1697d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167E44u; }
        else if (ctx->pc != 0x167E44u) { ctx->pc = 0x167E44u; }
    }
    if (ctx->pc != 0x167E44u) { return; }
    ctx->pc = 0x167E44u;
    // 0x167e44: 0xa60000a8
    ctx->pc = 0x167e44u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 168), (uint16_t)GPR_U32(ctx, 0));
label_167e48:
    // 0x167e48: 0x9202000e
    ctx->pc = 0x167e48u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x167e4c: 0x21600
    ctx->pc = 0x167e4cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 24));
    // 0x167e50: 0x820c000f
    ctx->pc = 0x167e50u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
    // 0x167e54: 0x8e0d0010
    ctx->pc = 0x167e54u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x167e58: 0x2609004c
    ctx->pc = 0x167e58u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 16), 76));
    // 0x167e5c: 0x8e0b003c
    ctx->pc = 0x167e5cu;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x167e60: 0x21603
    ctx->pc = 0x167e60u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x167e64: 0x8e0a0040
    ctx->pc = 0x167e64u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x167e68: 0x120202d
    ctx->pc = 0x167e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167e6c: 0x8e080044
    ctx->pc = 0x167e6cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x167e70: 0x282d
    ctx->pc = 0x167e70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167e74: 0x96070048
    ctx->pc = 0x167e74u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x167e78: 0x24060004
    ctx->pc = 0x167e78u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    // 0x167e7c: 0x9603004a
    ctx->pc = 0x167e7cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 74)));
    // 0x167e80: 0xae00009c
    ctx->pc = 0x167e80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x167e84: 0xae020058
    ctx->pc = 0x167e84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x167e88: 0xae0c005c
    ctx->pc = 0x167e88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 12));
    // 0x167e8c: 0xae0d0060
    ctx->pc = 0x167e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 13));
    // 0x167e90: 0xae0b0064
    ctx->pc = 0x167e90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 11));
    // 0x167e94: 0xae0a0068
    ctx->pc = 0x167e94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 10));
    // 0x167e98: 0xae08006c
    ctx->pc = 0x167e98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 8));
    // 0x167e9c: 0xa607007c
    ctx->pc = 0x167e9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 7));
    // 0x167ea0: 0xa603007e
    ctx->pc = 0x167ea0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 126), (uint16_t)GPR_U32(ctx, 3));
    // 0x167ea4: 0xc050cfe
    ctx->pc = 0x167EA4u;
    SET_GPR_U32(ctx, 31, 0x167EACu);
    ctx->pc = 0x167EA8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 9));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167EACu; }
        else if (ctx->pc != 0x167EACu) { ctx->pc = 0x167EACu; }
    }
    if (ctx->pc != 0x167EACu) { return; }
    ctx->pc = 0x167EACu;
    // 0x167eac: 0x87a20010
    ctx->pc = 0x167eacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
label_167eb0:
    // 0x167eb0: 0xdfbf0050
    ctx->pc = 0x167eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x167eb4: 0xdfb20040
    ctx->pc = 0x167eb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x167eb8: 0xdfb10030
    ctx->pc = 0x167eb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x167ebc: 0xdfb00020
    ctx->pc = 0x167ebcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167ec0: 0x3e00008
    ctx->pc = 0x167EC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167EC4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x167DCCu: goto label_167dcc;
            case 0x167DF4u: goto label_167df4;
            case 0x167E48u: goto label_167e48;
            case 0x167EB0u: goto label_167eb0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x167EC8u;
}
