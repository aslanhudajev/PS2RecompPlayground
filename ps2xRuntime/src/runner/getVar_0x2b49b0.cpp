#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: getVar
// Address: 0x2b49b0 - 0x2b4bec
void getVar_0x2b49b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b49b0u;

    // 0x2b49b0: 0x27bdff60
    ctx->pc = 0x2b49b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2b49b4: 0xffbf0090
    ctx->pc = 0x2b49b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2b49b8: 0xffbe0080
    ctx->pc = 0x2b49b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x2b49bc: 0xffb70070
    ctx->pc = 0x2b49bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2b49c0: 0xffb60060
    ctx->pc = 0x2b49c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2b49c4: 0xffb50050
    ctx->pc = 0x2b49c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2b49c8: 0xffb40040
    ctx->pc = 0x2b49c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2b49cc: 0xffb30030
    ctx->pc = 0x2b49ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2b49d0: 0xffb20020
    ctx->pc = 0x2b49d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2b49d4: 0xffb10010
    ctx->pc = 0x2b49d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b49d8: 0xffb00000
    ctx->pc = 0x2b49d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b49dc: 0x80a02d
    ctx->pc = 0x2b49dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b49e0: 0x3c030037
    ctx->pc = 0x2b49e0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2b49e4: 0x8c6221c0
    ctx->pc = 0x2b49e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8640)));
    // 0x2b49e8: 0x24420001
    ctx->pc = 0x2b49e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b49ec: 0xc0bf306
    ctx->pc = 0x2B49ECu;
    SET_GPR_U32(ctx, 31, 0x2B49F4u);
    ctx->pc = 0x2B49F0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8640), GPR_U32(ctx, 2));
    ctx->pc = 0x2FCC18u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x2fcc18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B49F4u; }
    }
    if (ctx->pc != 0x2B49F4u) { return; }
    ctx->pc = 0x2B49F4u;
    // 0x2b49f4: 0x40902d
    ctx->pc = 0x2b49f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b49f8: 0x82830000
    ctx->pc = 0x2b49f8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2b49fc: 0x2402007b
    ctx->pc = 0x2b49fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 123));
    // 0x2b4a00: 0x14620008
    ctx->pc = 0x2B4A00u;
    {
        const bool branch_taken_0x2b4a00 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2b4a00) {
            ctx->pc = 0x2B4A24u;
            goto label_2b4a24;
        }
    }
    ctx->pc = 0x2B4A08u;
    // 0x2b4a08: 0x26940001
    ctx->pc = 0x2b4a08u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
    // 0x2b4a0c: 0x2652ffff
    ctx->pc = 0x2b4a0cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2b4a10: 0x2541021
    ctx->pc = 0x2b4a10u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x2b4a14: 0x8042ffff
    ctx->pc = 0x2b4a14u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
    // 0x2b4a18: 0x2643ffff
    ctx->pc = 0x2b4a18u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2b4a1c: 0x3842007d
    ctx->pc = 0x2b4a1cu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 125));
    // 0x2b4a20: 0x62900a
    ctx->pc = 0x2b4a20u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 3));
label_2b4a24:
    // 0x2b4a24: 0x1e400015
    ctx->pc = 0x2B4A24u;
    {
        const bool branch_taken_0x2b4a24 = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x2B4A28u;
        SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
        if (branch_taken_0x2b4a24) {
            ctx->pc = 0x2B4A7Cu;
            goto label_2b4a7c;
        }
    }
    ctx->pc = 0x2B4A2Cu;
    // 0x2b4a2c: 0x3c04003b
    ctx->pc = 0x2b4a2cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b4a30: 0x24844650
    ctx->pc = 0x2b4a30u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18000));
    // 0x2b4a34: 0x24050020
    ctx->pc = 0x2b4a34u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
    // 0x2b4a38: 0x3c06003b
    ctx->pc = 0x2b4a38u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x2b4a3c: 0x24c60d80
    ctx->pc = 0x2b4a3cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 3456));
    // 0x2b4a40: 0xc0ad0d6
    ctx->pc = 0x2B4A40u;
    SET_GPR_U32(ctx, 31, 0x2B4A48u);
    ctx->pc = 0x2B4A44u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2B4358u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalDBLvlPrint_0x2b4358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4A48u; }
    }
    if (ctx->pc != 0x2B4A48u) { return; }
    ctx->pc = 0x2B4A48u;
    // 0x2b4a48: 0x3c04003b
    ctx->pc = 0x2b4a48u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b4a4c: 0xc0b4a34
    ctx->pc = 0x2B4A4Cu;
    SET_GPR_U32(ctx, 31, 0x2B4A54u);
    ctx->pc = 0x2B4A50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18392));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4A54u; }
    }
    if (ctx->pc != 0x2B4A54u) { return; }
    ctx->pc = 0x2B4A54u;
    // 0x2b4a54: 0x3c04003b
    ctx->pc = 0x2b4a54u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b4a58: 0xc0b4a34
    ctx->pc = 0x2B4A58u;
    SET_GPR_U32(ctx, 31, 0x2B4A60u);
    ctx->pc = 0x2B4A5Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4A60u; }
    }
    if (ctx->pc != 0x2B4A60u) { return; }
    ctx->pc = 0x2B4A60u;
    // 0x2b4a60: 0x3c020037
    ctx->pc = 0x2b4a60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2b4a64: 0x8c4320ac
    ctx->pc = 0x2b4a64u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
    // 0x2b4a68: 0x8c620048
    ctx->pc = 0x2b4a68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2b4a6c: 0x34420001
    ctx->pc = 0x2b4a6cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
    // 0x2b4a70: 0xac620048
    ctx->pc = 0x2b4a70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
    // 0x2b4a74: 0x10000051
    ctx->pc = 0x2B4A74u;
    {
        const bool branch_taken_0x2b4a74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B4A78u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b4a74) {
            ctx->pc = 0x2B4BBCu;
            goto label_2b4bbc;
        }
    }
    ctx->pc = 0x2B4A7Cu;
label_2b4a7c:
    // 0x2b4a7c: 0x8c6221c4
    ctx->pc = 0x2b4a7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8644)));
    // 0x2b4a80: 0x1040000d
    ctx->pc = 0x2B4A80u;
    {
        const bool branch_taken_0x2b4a80 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B4A84u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b4a80) {
            ctx->pc = 0x2B4AB8u;
            goto label_2b4ab8;
        }
    }
    ctx->pc = 0x2B4A88u;
    // 0x2b4a88: 0xac6021c4
    ctx->pc = 0x2b4a88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8644), GPR_U32(ctx, 0));
    // 0x2b4a8c: 0x3c020037
    ctx->pc = 0x2b4a8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2b4a90: 0x8c4420ac
    ctx->pc = 0x2b4a90u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
    // 0x2b4a94: 0x24050060
    ctx->pc = 0x2b4a94u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 96));
label_2b4a98:
    // 0x2b4a98: 0x8c83000c
    ctx->pc = 0x2b4a98u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2b4a9c: 0x2251018
    ctx->pc = 0x2b4a9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2b4aa0: 0x431021
    ctx->pc = 0x2b4aa0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b4aa4: 0xac400054
    ctx->pc = 0x2b4aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 0));
    // 0x2b4aa8: 0x26310001
    ctx->pc = 0x2b4aa8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x2b4aac: 0x2a220014
    ctx->pc = 0x2b4aacu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 20));
    // 0x2b4ab0: 0x1440fff9
    ctx->pc = 0x2B4AB0u;
    {
        const bool branch_taken_0x2b4ab0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2b4ab0) {
            ctx->pc = 0x2B4A98u;
            goto label_2b4a98;
        }
    }
    ctx->pc = 0x2B4AB8u;
label_2b4ab8:
    // 0x2b4ab8: 0x982d
    ctx->pc = 0x2b4ab8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4abc: 0xa82d
    ctx->pc = 0x2b4abcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4ac0: 0x882d
    ctx->pc = 0x2b4ac0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4ac4: 0x241e0060
    ctx->pc = 0x2b4ac4u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 96));
    // 0x2b4ac8: 0x3c177fff
    ctx->pc = 0x2b4ac8u;
    SET_GPR_U32(ctx, 23, ((uint32_t)32767 << 16));
    // 0x2b4acc: 0x36f7ffff
    ctx->pc = 0x2b4accu;
    SET_GPR_U32(ctx, 23, OR32(GPR_U32(ctx, 23), 65535));
    // 0x2b4ad0: 0x10000013
    ctx->pc = 0x2B4AD0u;
    {
        const bool branch_taken_0x2b4ad0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B4AD4u;
        SET_GPR_U32(ctx, 22, ((uint32_t)55 << 16));
        if (branch_taken_0x2b4ad0) {
            ctx->pc = 0x2B4B20u;
            goto label_2b4b20;
        }
    }
    ctx->pc = 0x2B4AD8u;
label_2b4ad8:
    // 0x2b4ad8: 0x12770010
    ctx->pc = 0x2B4AD8u;
    {
        const bool branch_taken_0x2b4ad8 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 23));
        ctx->pc = 0x2B4ADCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 8640)));
        if (branch_taken_0x2b4ad8) {
            ctx->pc = 0x2B4B1Cu;
            goto label_2b4b1c;
        }
    }
    ctx->pc = 0x2B4AE0u;
    // 0x2b4ae0: 0x8e030058
    ctx->pc = 0x2b4ae0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2b4ae4: 0x431823
    ctx->pc = 0x2b4ae4u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b4ae8: 0x8e020054
    ctx->pc = 0x2b4ae8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2b4aec: 0x14400005
    ctx->pc = 0x2B4AECu;
    {
        const bool branch_taken_0x2b4aec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2b4aec) {
            ctx->pc = 0x2B4B04u;
            goto label_2b4b04;
        }
    }
    ctx->pc = 0x2B4AF4u;
    // 0x2b4af4: 0x220a82d
    ctx->pc = 0x2b4af4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4af8: 0x3c137fff
    ctx->pc = 0x2b4af8u;
    SET_GPR_U32(ctx, 19, ((uint32_t)32767 << 16));
    // 0x2b4afc: 0x10000007
    ctx->pc = 0x2B4AFCu;
    {
        const bool branch_taken_0x2b4afc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B4B00u;
        SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 19), 65535));
        if (branch_taken_0x2b4afc) {
            ctx->pc = 0x2B4B1Cu;
            goto label_2b4b1c;
        }
    }
    ctx->pc = 0x2B4B04u;
label_2b4b04:
    // 0x2b4b04: 0x12200003
    ctx->pc = 0x2B4B04u;
    {
        const bool branch_taken_0x2b4b04 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B4B08u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 3)));
        if (branch_taken_0x2b4b04) {
            ctx->pc = 0x2B4B14u;
            goto label_2b4b14;
        }
    }
    ctx->pc = 0x2B4B0Cu;
    // 0x2b4b0c: 0x50400004
    ctx->pc = 0x2B4B0Cu;
    {
        const bool branch_taken_0x2b4b0c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2b4b0c) {
            ctx->pc = 0x2B4B10u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x2B4B20u;
            goto label_2b4b20;
        }
    }
    ctx->pc = 0x2B4B14u;
label_2b4b14:
    // 0x2b4b14: 0x220a82d
    ctx->pc = 0x2b4b14u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4b18: 0x60982d
    ctx->pc = 0x2b4b18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2b4b1c:
    // 0x2b4b1c: 0x26310001
    ctx->pc = 0x2b4b1cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_2b4b20:
    // 0x2b4b20: 0x2a220014
    ctx->pc = 0x2b4b20u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 20));
    // 0x2b4b24: 0x1040000f
    ctx->pc = 0x2B4B24u;
    {
        const bool branch_taken_0x2b4b24 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B4B28u;
        SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
        if (branch_taken_0x2b4b24) {
            ctx->pc = 0x2B4B64u;
            goto label_2b4b64;
        }
    }
    ctx->pc = 0x2B4B2Cu;
    // 0x2b4b2c: 0x8c6220ac
    ctx->pc = 0x2b4b2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8364)));
    // 0x2b4b30: 0x23e1818
    ctx->pc = 0x2b4b30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2b4b34: 0x8c42000c
    ctx->pc = 0x2b4b34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2b4b38: 0x628021
    ctx->pc = 0x2b4b38u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b4b3c: 0x8e020054
    ctx->pc = 0x2b4b3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2b4b40: 0x1642ffe5
    ctx->pc = 0x2B4B40u;
    {
        const bool branch_taken_0x2b4b40 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        ctx->pc = 0x2B4B44u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b4b40) {
            ctx->pc = 0x2B4AD8u;
            goto label_2b4ad8;
        }
    }
    ctx->pc = 0x2B4B48u;
    // 0x2b4b48: 0x8e050050
    ctx->pc = 0x2b4b48u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2b4b4c: 0xc0bf3c0
    ctx->pc = 0x2B4B4Cu;
    SET_GPR_U32(ctx, 31, 0x2B4B54u);
    ctx->pc = 0x2B4B50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FCF00u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x2fcf00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4B54u; }
    }
    if (ctx->pc != 0x2B4B54u) { return; }
    ctx->pc = 0x2B4B54u;
    // 0x2b4b54: 0x1440ffe0
    ctx->pc = 0x2B4B54u;
    {
        const bool branch_taken_0x2b4b54 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B4B58u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 20));
        if (branch_taken_0x2b4b54) {
            ctx->pc = 0x2B4AD8u;
            goto label_2b4ad8;
        }
    }
    ctx->pc = 0x2B4B5Cu;
    // 0x2b4b5c: 0x1440000e
    ctx->pc = 0x2B4B5Cu;
    {
        const bool branch_taken_0x2b4b5c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B4B60u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2b4b5c) {
            ctx->pc = 0x2B4B98u;
            goto label_2b4b98;
        }
    }
    ctx->pc = 0x2B4B64u;
label_2b4b64:
    // 0x2b4b64: 0x2a0882d
    ctx->pc = 0x2b4b64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4b68: 0x3c020037
    ctx->pc = 0x2b4b68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2b4b6c: 0x8c4320ac
    ctx->pc = 0x2b4b6cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
    // 0x2b4b70: 0x24020060
    ctx->pc = 0x2b4b70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 96));
    // 0x2b4b74: 0x2221018
    ctx->pc = 0x2b4b74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2b4b78: 0x8c63000c
    ctx->pc = 0x2b4b78u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2b4b7c: 0x438021
    ctx->pc = 0x2b4b7cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b4b80: 0xae140050
    ctx->pc = 0x2b4b80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 20));
    // 0x2b4b84: 0xae120054
    ctx->pc = 0x2b4b84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 18));
    // 0x2b4b88: 0x24020020
    ctx->pc = 0x2b4b88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
    // 0x2b4b8c: 0xae020000
    ctx->pc = 0x2b4b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2b4b90: 0xae000010
    ctx->pc = 0x2b4b90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2b4b94: 0x3c020037
    ctx->pc = 0x2b4b94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2b4b98:
    // 0x2b4b98: 0x8c4320ac
    ctx->pc = 0x2b4b98u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
    // 0x2b4b9c: 0x24020060
    ctx->pc = 0x2b4b9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 96));
    // 0x2b4ba0: 0x2221018
    ctx->pc = 0x2b4ba0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2b4ba4: 0x8c63000c
    ctx->pc = 0x2b4ba4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2b4ba8: 0x438021
    ctx->pc = 0x2b4ba8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b4bac: 0x3c020037
    ctx->pc = 0x2b4bacu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2b4bb0: 0x8c4221c0
    ctx->pc = 0x2b4bb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8640)));
    // 0x2b4bb4: 0xae020058
    ctx->pc = 0x2b4bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x2b4bb8: 0x200102d
    ctx->pc = 0x2b4bb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b4bbc:
    // 0x2b4bbc: 0xdfbf0090
    ctx->pc = 0x2b4bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b4bc0: 0xdfbe0080
    ctx->pc = 0x2b4bc0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b4bc4: 0xdfb70070
    ctx->pc = 0x2b4bc4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b4bc8: 0xdfb60060
    ctx->pc = 0x2b4bc8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b4bcc: 0xdfb50050
    ctx->pc = 0x2b4bccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b4bd0: 0xdfb40040
    ctx->pc = 0x2b4bd0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b4bd4: 0xdfb30030
    ctx->pc = 0x2b4bd4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b4bd8: 0xdfb20020
    ctx->pc = 0x2b4bd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b4bdc: 0xdfb10010
    ctx->pc = 0x2b4bdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b4be0: 0xdfb00000
    ctx->pc = 0x2b4be0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4be4: 0x3e00008
    ctx->pc = 0x2B4BE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4BE8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B4A24u: goto label_2b4a24;
            case 0x2B4A7Cu: goto label_2b4a7c;
            case 0x2B4A98u: goto label_2b4a98;
            case 0x2B4AB8u: goto label_2b4ab8;
            case 0x2B4AD8u: goto label_2b4ad8;
            case 0x2B4B04u: goto label_2b4b04;
            case 0x2B4B14u: goto label_2b4b14;
            case 0x2B4B1Cu: goto label_2b4b1c;
            case 0x2B4B20u: goto label_2b4b20;
            case 0x2B4B64u: goto label_2b4b64;
            case 0x2B4B98u: goto label_2b4b98;
            case 0x2B4BBCu: goto label_2b4bbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B4BECu;
}
