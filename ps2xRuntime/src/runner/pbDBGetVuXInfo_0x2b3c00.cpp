#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbDBGetVuXInfo
// Address: 0x2b3c00 - 0x2b4010
void pbDBGetVuXInfo_0x2b3c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b3c00u;

    // 0x2b3c00: 0x27bdff40
    ctx->pc = 0x2b3c00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2b3c04: 0xffbf00b0
    ctx->pc = 0x2b3c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x2b3c08: 0xffbe00a0
    ctx->pc = 0x2b3c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x2b3c0c: 0xffb70090
    ctx->pc = 0x2b3c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x2b3c10: 0xffb60080
    ctx->pc = 0x2b3c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x2b3c14: 0xffb50070
    ctx->pc = 0x2b3c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x2b3c18: 0xffb40060
    ctx->pc = 0x2b3c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2b3c1c: 0xffb30050
    ctx->pc = 0x2b3c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x2b3c20: 0xffb20040
    ctx->pc = 0x2b3c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2b3c24: 0xffb10030
    ctx->pc = 0x2b3c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2b3c28: 0xffb00020
    ctx->pc = 0x2b3c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2b3c2c: 0x80902d
    ctx->pc = 0x2b3c2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3c30: 0xa0b02d
    ctx->pc = 0x2b3c30u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3c34: 0xafa60010
    ctx->pc = 0x2b3c34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x2b3c38: 0xe0882d
    ctx->pc = 0x2b3c38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3c3c: 0x100a02d
    ctx->pc = 0x2b3c3cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3c40: 0x3c020036
    ctx->pc = 0x2b3c40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2b3c44: 0xc0ace42
    ctx->pc = 0x2B3C44u;
    SET_GPR_U32(ctx, 31, 0x2B3C4Cu);
    ctx->pc = 0x2B3C48u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    ctx->pc = 0x2B3908u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetVuFBRST_0x2b3908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3C4Cu; }
    }
    if (ctx->pc != 0x2B3C4Cu) { return; }
    ctx->pc = 0x2B3C4Cu;
    // 0x2b3c4c: 0xc0ace26
    ctx->pc = 0x2B3C4Cu;
    SET_GPR_U32(ctx, 31, 0x2B3C54u);
    ctx->pc = 0x2B3C50u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B3898u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetVuStat_0x2b3898(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3C54u; }
    }
    if (ctx->pc != 0x2B3C54u) { return; }
    ctx->pc = 0x2B3C54u;
    // 0x2b3c54: 0xc0abc02
    ctx->pc = 0x2B3C54u;
    SET_GPR_U32(ctx, 31, 0x2B3C5Cu);
    ctx->pc = 0x2B3C58u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2AF008u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetCPUTime_0x2af008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3C5Cu; }
    }
    if (ctx->pc != 0x2B3C5Cu) { return; }
    ctx->pc = 0x2B3C5Cu;
    // 0x2b3c5c: 0x40402d
    ctx->pc = 0x2b3c5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3c60: 0x8e020010
    ctx->pc = 0x2b3c60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2b3c64: 0x1280000a
    ctx->pc = 0x2B3C64u;
    {
        const bool branch_taken_0x2b3c64 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B3C68u;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 4)));
        if (branch_taken_0x2b3c64) {
            ctx->pc = 0x2B3C90u;
            goto label_2b3c90;
        }
    }
    ctx->pc = 0x2B3C6Cu;
    // 0x2b3c6c: 0x24140001
    ctx->pc = 0x2b3c6cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b3c70: 0x3c020037
    ctx->pc = 0x2b3c70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2b3c74: 0x8c5392c0
    ctx->pc = 0x2b3c74u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 2), 4294939328)));
    // 0x2b3c78: 0x3c020037
    ctx->pc = 0x2b3c78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2b3c7c: 0x244225d8
    ctx->pc = 0x2b3c7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9688));
    // 0x2b3c80: 0xafa20014
    ctx->pc = 0x2b3c80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x2b3c84: 0x3c020037
    ctx->pc = 0x2b3c84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2b3c88: 0x10000008
    ctx->pc = 0x2B3C88u;
    {
        const bool branch_taken_0x2b3c88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B3C8Cu;
        SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 2), 9692));
        if (branch_taken_0x2b3c88) {
            ctx->pc = 0x2B3CACu;
            goto label_2b3cac;
        }
    }
    ctx->pc = 0x2B3C90u;
label_2b3c90:
    // 0x2b3c90: 0x3c020037
    ctx->pc = 0x2b3c90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2b3c94: 0x8c539308
    ctx->pc = 0x2b3c94u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 2), 4294939400)));
    // 0x2b3c98: 0x3c020037
    ctx->pc = 0x2b3c98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2b3c9c: 0x244225e0
    ctx->pc = 0x2b3c9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9696));
    // 0x2b3ca0: 0xafa20014
    ctx->pc = 0x2b3ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x2b3ca4: 0x3c020037
    ctx->pc = 0x2b3ca4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2b3ca8: 0x245e25e4
    ctx->pc = 0x2b3ca8u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 2), 9700));
label_2b3cac:
    // 0x2b3cac: 0x32a30f00
    ctx->pc = 0x2b3cacu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 21), 3840));
    // 0x2b3cb0: 0x24020100
    ctx->pc = 0x2b3cb0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 256));
    // 0x2b3cb4: 0x10620004
    ctx->pc = 0x2B3CB4u;
    {
        const bool branch_taken_0x2b3cb4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B3CB8u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 21), 15));
        if (branch_taken_0x2b3cb4) {
            ctx->pc = 0x2B3CC8u;
            goto label_2b3cc8;
        }
    }
    ctx->pc = 0x2B3CBCu;
    // 0x2b3cbc: 0x24020001
    ctx->pc = 0x2b3cbcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b3cc0: 0x14620002
    ctx->pc = 0x2B3CC0u;
    {
        const bool branch_taken_0x2b3cc0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2b3cc0) {
            ctx->pc = 0x2B3CCCu;
            goto label_2b3ccc;
        }
    }
    ctx->pc = 0x2B3CC8u;
label_2b3cc8:
    // 0x2b3cc8: 0xafa00010
    ctx->pc = 0x2b3cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_2b3ccc:
    // 0x2b3ccc: 0x52400005
    ctx->pc = 0x2B3CCCu;
    {
        const bool branch_taken_0x2b3ccc = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        if (branch_taken_0x2b3ccc) {
            ctx->pc = 0x2B3CD0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->pc = 0x2B3CE4u;
            goto label_2b3ce4;
        }
    }
    ctx->pc = 0x2B3CD4u;
    // 0x2b3cd4: 0x5620002b
    ctx->pc = 0x2B3CD4u;
    {
        const bool branch_taken_0x2b3cd4 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x2b3cd4) {
            ctx->pc = 0x2B3CD8u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->pc = 0x2B3D84u;
            goto label_2b3d84;
        }
    }
    ctx->pc = 0x2B3CDCu;
    // 0x2b3cdc: 0x10000025
    ctx->pc = 0x2B3CDCu;
    {
        const bool branch_taken_0x2b3cdc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B3CE0u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 18), 8)));
        if (branch_taken_0x2b3cdc) {
            ctx->pc = 0x2B3D74u;
            goto label_2b3d74;
        }
    }
    ctx->pc = 0x2B3CE4u;
label_2b3ce4:
    // 0x2b3ce4: 0x24440001
    ctx->pc = 0x2b3ce4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b3ce8: 0x8e620014
    ctx->pc = 0x2b3ce8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x2b3cec: 0x14400003
    ctx->pc = 0x2B3CECu;
    {
        const bool branch_taken_0x2b3cec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B3CF0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
        if (branch_taken_0x2b3cec) {
            ctx->pc = 0x2B3CFCu;
            goto label_2b3cfc;
        }
    }
    ctx->pc = 0x2B3CF4u;
    // 0x2b3cf4: 0x2484fffd
    ctx->pc = 0x2b3cf4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967293));
    // 0x2b3cf8: 0x24020002
    ctx->pc = 0x2b3cf8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_2b3cfc:
    // 0x2b3cfc: 0x24030003
    ctx->pc = 0x2b3cfcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b3d00: 0x76100b
    ctx->pc = 0x2b3d00u;
    if (GPR_U32(ctx, 22) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
    // 0x2b3d04: 0xae620014
    ctx->pc = 0x2b3d04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
    // 0x2b3d08: 0x2402ffff
    ctx->pc = 0x2b3d08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b3d0c: 0x44102a
    ctx->pc = 0x2b3d0cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x2b3d10: 0x2200a
    ctx->pc = 0x2b3d10u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 0));
    // 0x2b3d14: 0x8e65000c
    ctx->pc = 0x2b3d14u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2b3d18: 0x24060260
    ctx->pc = 0x2b3d18u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 608));
    // 0x2b3d1c: 0x0
    ctx->pc = 0x2b3d1cu;
    // NOP
label_2b3d20:
    // 0x2b3d20: 0x85102b
    ctx->pc = 0x2b3d20u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2b3d24: 0x14400008
    ctx->pc = 0x2B3D24u;
    {
        const bool branch_taken_0x2b3d24 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B3D28u;
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x2b3d24) {
            ctx->pc = 0x2B3D48u;
            goto label_2b3d48;
        }
    }
    ctx->pc = 0x2B3D2Cu;
    // 0x2b3d2c: 0x852023
    ctx->pc = 0x2b3d2cu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2b3d30: 0x8e630010
    ctx->pc = 0x2b3d30u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2b3d34: 0x31027
    ctx->pc = 0x2b3d34u;
    SET_GPR_U32(ctx, 2, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x2b3d38: 0x2102b
    ctx->pc = 0x2b3d38u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2b3d3c: 0x621821
    ctx->pc = 0x2b3d3cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b3d40: 0xae630010
    ctx->pc = 0x2b3d40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 3));
    // 0x2b3d44: 0x861818
    ctx->pc = 0x2b3d44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2b3d48:
    // 0x2b3d48: 0x8e620004
    ctx->pc = 0x2b3d48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2b3d4c: 0x629021
    ctx->pc = 0x2b3d4cu;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b3d50: 0x8fa30014
    ctx->pc = 0x2b3d50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2b3d54: 0x8c620000
    ctx->pc = 0x2b3d54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b3d58: 0x5242fff1
    ctx->pc = 0x2B3D58u;
    {
        const bool branch_taken_0x2b3d58 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 2));
        if (branch_taken_0x2b3d58) {
            ctx->pc = 0x2B3D5Cu;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
            ctx->pc = 0x2B3D20u;
            goto label_2b3d20;
        }
    }
    ctx->pc = 0x2B3D60u;
    // 0x2b3d60: 0x8fc20000
    ctx->pc = 0x2b3d60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2b3d64: 0x56420003
    ctx->pc = 0x2B3D64u;
    {
        const bool branch_taken_0x2b3d64 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        if (branch_taken_0x2b3d64) {
            ctx->pc = 0x2B3D68u;
            WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 4));
            ctx->pc = 0x2B3D74u;
            goto label_2b3d74;
        }
    }
    ctx->pc = 0x2B3D6Cu;
    // 0x2b3d6c: 0x1000ffec
    ctx->pc = 0x2B3D6Cu;
    {
        const bool branch_taken_0x2b3d6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B3D70u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x2b3d6c) {
            ctx->pc = 0x2B3D20u;
            goto label_2b3d20;
        }
    }
    ctx->pc = 0x2B3D74u;
label_2b3d74:
    // 0x2b3d74: 0x16200003
    ctx->pc = 0x2B3D74u;
    {
        const bool branch_taken_0x2b3d74 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B3D78u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 20)));
        if (branch_taken_0x2b3d74) {
            ctx->pc = 0x2B3D84u;
            goto label_2b3d84;
        }
    }
    ctx->pc = 0x2B3D7Cu;
    // 0x2b3d7c: 0x3c02003b
    ctx->pc = 0x2b3d7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
    // 0x2b3d80: 0x245145c0
    ctx->pc = 0x2b3d80u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 17856));
label_2b3d84:
    // 0x2b3d84: 0x8e62000c
    ctx->pc = 0x2b3d84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2b3d88: 0x62102b
    ctx->pc = 0x2b3d88u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b3d8c: 0x50400008
    ctx->pc = 0x2B3D8Cu;
    {
        const bool branch_taken_0x2b3d8c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2b3d8c) {
            ctx->pc = 0x2B3D90u;
            WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
            ctx->pc = 0x2B3DB0u;
            goto label_2b3db0;
        }
    }
    ctx->pc = 0x2B3D94u;
    // 0x2b3d94: 0x8e620000
    ctx->pc = 0x2b3d94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2b3d98: 0x31880
    ctx->pc = 0x2b3d98u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b3d9c: 0x621821
    ctx->pc = 0x2b3d9cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b3da0: 0x8c620000
    ctx->pc = 0x2b3da0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b3da4: 0x50520001
    ctx->pc = 0x2B3DA4u;
    {
        const bool branch_taken_0x2b3da4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 18));
        if (branch_taken_0x2b3da4) {
            ctx->pc = 0x2B3DA8u;
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x2B3DACu;
            goto label_2b3dac;
        }
    }
    ctx->pc = 0x2B3DACu;
label_2b3dac:
    // 0x2b3dac: 0xae400014
    ctx->pc = 0x2b3dacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_2b3db0:
    // 0x2b3db0: 0xae56001c
    ctx->pc = 0x2b3db0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 22));
    // 0x2b3db4: 0xae400018
    ctx->pc = 0x2b3db4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
    // 0x2b3db8: 0xae510008
    ctx->pc = 0x2b3db8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 17));
    // 0x2b3dbc: 0xae48000c
    ctx->pc = 0x2b3dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 8));
    // 0x2b3dc0: 0xae470010
    ctx->pc = 0x2b3dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 7));
    // 0x2b3dc4: 0xae570000
    ctx->pc = 0x2b3dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 23));
    // 0x2b3dc8: 0xae550004
    ctx->pc = 0x2b3dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 21));
    // 0x2b3dcc: 0x8fa20010
    ctx->pc = 0x2b3dccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b3dd0: 0x1040004b
    ctx->pc = 0x2B3DD0u;
    {
        const bool branch_taken_0x2b3dd0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B3DD4u;
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b3dd0) {
            ctx->pc = 0x2B3F00u;
            goto label_2b3f00;
        }
    }
    ctx->pc = 0x2B3DD8u;
    // 0x2b3dd8: 0x12800040
    ctx->pc = 0x2B3DD8u;
    {
        const bool branch_taken_0x2b3dd8 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        if (branch_taken_0x2b3dd8) {
            ctx->pc = 0x2B3EDCu;
            goto label_2b3edc;
        }
    }
    ctx->pc = 0x2B3DE0u;
    // 0x2b3de0: 0xc0acdfc
    ctx->pc = 0x2B3DE0u;
    SET_GPR_U32(ctx, 31, 0x2B3DE8u);
    ctx->pc = 0x2B3DE4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 17152));
    ctx->pc = 0x2B37F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetVu0MemWord_0x2b37f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3DE8u; }
    }
    if (ctx->pc != 0x2B3DE8u) { return; }
    ctx->pc = 0x2B3DE8u;
    // 0x2b3de8: 0xae420240
    ctx->pc = 0x2b3de8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 576), GPR_U32(ctx, 2));
    // 0x2b3dec: 0xc0acdfc
    ctx->pc = 0x2B3DECu;
    SET_GPR_U32(ctx, 31, 0x2B3DF4u);
    ctx->pc = 0x2B3DF0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 17168));
    ctx->pc = 0x2B37F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetVu0MemWord_0x2b37f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3DF4u; }
    }
    if (ctx->pc != 0x2B3DF4u) { return; }
    ctx->pc = 0x2B3DF4u;
    // 0x2b3df4: 0xae420244
    ctx->pc = 0x2b3df4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 580), GPR_U32(ctx, 2));
    // 0x2b3df8: 0xc0acdfc
    ctx->pc = 0x2B3DF8u;
    SET_GPR_U32(ctx, 31, 0x2B3E00u);
    ctx->pc = 0x2B3DFCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 17184));
    ctx->pc = 0x2B37F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetVu0MemWord_0x2b37f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3E00u; }
    }
    if (ctx->pc != 0x2B3E00u) { return; }
    ctx->pc = 0x2B3E00u;
    // 0x2b3e00: 0xae420248
    ctx->pc = 0x2b3e00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 584), GPR_U32(ctx, 2));
    // 0x2b3e04: 0xc0acdfc
    ctx->pc = 0x2B3E04u;
    SET_GPR_U32(ctx, 31, 0x2B3E0Cu);
    ctx->pc = 0x2B3E08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 17216));
    ctx->pc = 0x2B37F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetVu0MemWord_0x2b37f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3E0Cu; }
    }
    if (ctx->pc != 0x2B3E0Cu) { return; }
    ctx->pc = 0x2B3E0Cu;
    // 0x2b3e0c: 0xae42024c
    ctx->pc = 0x2b3e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 588), GPR_U32(ctx, 2));
    // 0x2b3e10: 0xc0acdfc
    ctx->pc = 0x2B3E10u;
    SET_GPR_U32(ctx, 31, 0x2B3E18u);
    ctx->pc = 0x2B3E14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 17232));
    ctx->pc = 0x2B37F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetVu0MemWord_0x2b37f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3E18u; }
    }
    if (ctx->pc != 0x2B3E18u) { return; }
    ctx->pc = 0x2B3E18u;
    // 0x2b3e18: 0xae420250
    ctx->pc = 0x2b3e18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 2));
    // 0x2b3e1c: 0xc0acdfc
    ctx->pc = 0x2B3E1Cu;
    SET_GPR_U32(ctx, 31, 0x2B3E24u);
    ctx->pc = 0x2B3E20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 17248));
    ctx->pc = 0x2B37F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetVu0MemWord_0x2b37f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3E24u; }
    }
    if (ctx->pc != 0x2B3E24u) { return; }
    ctx->pc = 0x2B3E24u;
    // 0x2b3e24: 0xae420254
    ctx->pc = 0x2b3e24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 596), GPR_U32(ctx, 2));
    // 0x2b3e28: 0xc0acdfc
    ctx->pc = 0x2B3E28u;
    SET_GPR_U32(ctx, 31, 0x2B3E30u);
    ctx->pc = 0x2B3E2Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 17264));
    ctx->pc = 0x2B37F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetVu0MemWord_0x2b37f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3E30u; }
    }
    if (ctx->pc != 0x2B3E30u) { return; }
    ctx->pc = 0x2B3E30u;
    // 0x2b3e30: 0xae420258
    ctx->pc = 0x2b3e30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 600), GPR_U32(ctx, 2));
    // 0x2b3e34: 0xc0acdfc
    ctx->pc = 0x2B3E34u;
    SET_GPR_U32(ctx, 31, 0x2B3E3Cu);
    ctx->pc = 0x2B3E38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 17312));
    ctx->pc = 0x2B37F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetVu0MemWord_0x2b37f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3E3Cu; }
    }
    if (ctx->pc != 0x2B3E3Cu) { return; }
    ctx->pc = 0x2B3E3Cu;
    // 0x2b3e3c: 0xae42025c
    ctx->pc = 0x2b3e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 604), GPR_U32(ctx, 2));
    // 0x2b3e40: 0x882d
    ctx->pc = 0x2b3e40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3e44: 0x26500220
    ctx->pc = 0x2b3e44u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 18), 544));
    // 0x2b3e48: 0x112100
    ctx->pc = 0x2b3e48u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 17), 4));
    // 0x2b3e4c: 0x0
    ctx->pc = 0x2b3e4cu;
    // NOP
label_2b3e50:
    // 0x2b3e50: 0xc0ace18
    ctx->pc = 0x2B3E50u;
    SET_GPR_U32(ctx, 31, 0x2B3E58u);
    ctx->pc = 0x2B3E54u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 16896));
    ctx->pc = 0x2B3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetVu0MemHWord_0x2b3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3E58u; }
    }
    if (ctx->pc != 0x2B3E58u) { return; }
    ctx->pc = 0x2B3E58u;
    // 0x2b3e58: 0x111840
    ctx->pc = 0x2b3e58u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 1));
    // 0x2b3e5c: 0x2031821
    ctx->pc = 0x2b3e5cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2b3e60: 0xa4620000
    ctx->pc = 0x2b3e60u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b3e64: 0x26310001
    ctx->pc = 0x2b3e64u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x2b3e68: 0x2a220010
    ctx->pc = 0x2b3e68u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 16));
    // 0x2b3e6c: 0x1440fff8
    ctx->pc = 0x2B3E6Cu;
    {
        const bool branch_taken_0x2b3e6c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B3E70u;
        SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 17), 4));
        if (branch_taken_0x2b3e6c) {
            ctx->pc = 0x2B3E50u;
            goto label_2b3e50;
        }
    }
    ctx->pc = 0x2B3E74u;
    // 0x2b3e74: 0x882d
    ctx->pc = 0x2b3e74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3e78: 0x26570020
    ctx->pc = 0x2b3e78u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 18), 32));
    // 0x2b3e7c: 0x26560024
    ctx->pc = 0x2b3e7cu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 18), 36));
    // 0x2b3e80: 0x26550028
    ctx->pc = 0x2b3e80u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 18), 40));
    // 0x2b3e84: 0x2654002c
    ctx->pc = 0x2b3e84u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 18), 44));
label_2b3e88:
    // 0x2b3e88: 0x118100
    ctx->pc = 0x2b3e88u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 17), 4));
    // 0x2b3e8c: 0x3a0202d
    ctx->pc = 0x2b3e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3e90: 0xc0acdde
    ctx->pc = 0x2B3E90u;
    SET_GPR_U32(ctx, 31, 0x2B3E98u);
    ctx->pc = 0x2B3E94u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 16384));
    ctx->pc = 0x2B3778u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetVu0MemQWord_0x2b3778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3E98u; }
    }
    if (ctx->pc != 0x2B3E98u) { return; }
    ctx->pc = 0x2B3E98u;
    // 0x2b3e98: 0x2f01021
    ctx->pc = 0x2b3e98u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    // 0x2b3e9c: 0xc7a00000
    ctx->pc = 0x2b3e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b3ea0: 0xe4400000
    ctx->pc = 0x2b3ea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2b3ea4: 0x2d01021
    ctx->pc = 0x2b3ea4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x2b3ea8: 0xc7a00004
    ctx->pc = 0x2b3ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b3eac: 0xe4400000
    ctx->pc = 0x2b3eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2b3eb0: 0x2b01021
    ctx->pc = 0x2b3eb0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x2b3eb4: 0xc7a00008
    ctx->pc = 0x2b3eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b3eb8: 0xe4400000
    ctx->pc = 0x2b3eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2b3ebc: 0x2908021
    ctx->pc = 0x2b3ebcu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x2b3ec0: 0xc7a0000c
    ctx->pc = 0x2b3ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b3ec4: 0x26310001
    ctx->pc = 0x2b3ec4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x2b3ec8: 0x2a220020
    ctx->pc = 0x2b3ec8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 32));
    // 0x2b3ecc: 0x1440ffee
    ctx->pc = 0x2B3ECCu;
    {
        const bool branch_taken_0x2b3ecc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B3ED0u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        if (branch_taken_0x2b3ecc) {
            ctx->pc = 0x2B3E88u;
            goto label_2b3e88;
        }
    }
    ctx->pc = 0x2B3ED4u;
    // 0x2b3ed4: 0x10000008
    ctx->pc = 0x2B3ED4u;
    {
        const bool branch_taken_0x2b3ed4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B3ED8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2b3ed4) {
            ctx->pc = 0x2B3EF8u;
            goto label_2b3ef8;
        }
    }
    ctx->pc = 0x2B3EDCu;
label_2b3edc:
    // 0x2b3edc: 0xc0acec8
    ctx->pc = 0x2B3EDCu;
    SET_GPR_U32(ctx, 31, 0x2B3EE4u);
    ctx->pc = 0x2B3EE0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B3B20u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetVu0SRegs_0x2b3b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3EE4u; }
    }
    if (ctx->pc != 0x2B3EE4u) { return; }
    ctx->pc = 0x2B3EE4u;
    // 0x2b3ee4: 0xc0ace9a
    ctx->pc = 0x2B3EE4u;
    SET_GPR_U32(ctx, 31, 0x2B3EECu);
    ctx->pc = 0x2B3EE8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 544));
    ctx->pc = 0x2B3A68u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetVu0IRegs_0x2b3a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3EECu; }
    }
    if (ctx->pc != 0x2B3EECu) { return; }
    ctx->pc = 0x2B3EECu;
    // 0x2b3eec: 0xc0ace6c
    ctx->pc = 0x2B3EECu;
    SET_GPR_U32(ctx, 31, 0x2B3EF4u);
    ctx->pc = 0x2B3EF0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 32));
    ctx->pc = 0x2B39B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetVu0FRegs_0x2b39b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3EF4u; }
    }
    if (ctx->pc != 0x2B3EF4u) { return; }
    ctx->pc = 0x2B3EF4u;
    // 0x2b3ef4: 0x24020001
    ctx->pc = 0x2b3ef4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2b3ef8:
    // 0x2b3ef8: 0xae420018
    ctx->pc = 0x2b3ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
    // 0x2b3efc: 0x482d
    ctx->pc = 0x2b3efcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b3f00:
    // 0x2b3f00: 0x302d
    ctx->pc = 0x2b3f00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3f04: 0x24080001
    ctx->pc = 0x2b3f04u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b3f08: 0x282d
    ctx->pc = 0x2b3f08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3f0c: 0x8e62000c
    ctx->pc = 0x2b3f0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2b3f10: 0x102102b
    ctx->pc = 0x2b3f10u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2b3f14: 0x1040002a
    ctx->pc = 0x2B3F14u;
    {
        const bool branch_taken_0x2b3f14 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B3F18u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b3f14) {
            ctx->pc = 0x2B3FC0u;
            goto label_2b3fc0;
        }
    }
    ctx->pc = 0x2B3F1Cu;
    // 0x2b3f1c: 0x240a0001
    ctx->pc = 0x2b3f1cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 1));
label_2b3f20:
    // 0x2b3f20: 0x10000003
    ctx->pc = 0x2B3F20u;
    {
        const bool branch_taken_0x2b3f20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B3F24u;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 19), 12)));
        if (branch_taken_0x2b3f20) {
            ctx->pc = 0x2B3F30u;
            goto label_2b3f30;
        }
    }
    ctx->pc = 0x2B3F28u;
label_2b3f28:
    // 0x2b3f28: 0x80282d
    ctx->pc = 0x2b3f28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3f2c: 0x202d
    ctx->pc = 0x2b3f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b3f30:
    // 0x2b3f30: 0xc7102b
    ctx->pc = 0x2b3f30u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_2b3f34:
    // 0x2b3f34: 0x10400016
    ctx->pc = 0x2B3F34u;
    {
        const bool branch_taken_0x2b3f34 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B3F38u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
        if (branch_taken_0x2b3f34) {
            ctx->pc = 0x2B3F90u;
            goto label_2b3f90;
        }
    }
    ctx->pc = 0x2B3F3Cu;
    // 0x2b3f3c: 0x8e630000
    ctx->pc = 0x2b3f3cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2b3f40: 0x431021
    ctx->pc = 0x2b3f40u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b3f44: 0x8c440000
    ctx->pc = 0x2b3f44u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b3f48: 0x1080fff9
    ctx->pc = 0x2B3F48u;
    {
        const bool branch_taken_0x2b3f48 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B3F4Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
        if (branch_taken_0x2b3f48) {
            ctx->pc = 0x2B3F30u;
            goto label_2b3f30;
        }
    }
    ctx->pc = 0x2B3F50u;
    // 0x2b3f50: 0x8c82001c
    ctx->pc = 0x2b3f50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2b3f54: 0x1440000c
    ctx->pc = 0x2B3F54u;
    {
        const bool branch_taken_0x2b3f54 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B3F58u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 24)));
        if (branch_taken_0x2b3f54) {
            ctx->pc = 0x2B3F88u;
            goto label_2b3f88;
        }
    }
    ctx->pc = 0x2B3F5Cu;
    // 0x2b3f5c: 0x10400003
    ctx->pc = 0x2B3F5Cu;
    {
        const bool branch_taken_0x2b3f5c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B3F60u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 20)));
        if (branch_taken_0x2b3f5c) {
            ctx->pc = 0x2B3F6Cu;
            goto label_2b3f6c;
        }
    }
    ctx->pc = 0x2B3F64u;
    // 0x2b3f64: 0x11200008
    ctx->pc = 0x2B3F64u;
    {
        const bool branch_taken_0x2b3f64 = (GPR_U32(ctx, 9) == GPR_U32(ctx, 0));
        if (branch_taken_0x2b3f64) {
            ctx->pc = 0x2B3F88u;
            goto label_2b3f88;
        }
    }
    ctx->pc = 0x2B3F6Cu;
label_2b3f6c:
    // 0x2b3f6c: 0x8c620000
    ctx->pc = 0x2b3f6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b3f70: 0x50820005
    ctx->pc = 0x2B3F70u;
    {
        const bool branch_taken_0x2b3f70 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        if (branch_taken_0x2b3f70) {
            ctx->pc = 0x2B3F74u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 24)));
            ctx->pc = 0x2B3F88u;
            goto label_2b3f88;
        }
    }
    ctx->pc = 0x2B3F78u;
    // 0x2b3f78: 0x8fc20000
    ctx->pc = 0x2b3f78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2b3f7c: 0x1482ffed
    ctx->pc = 0x2B3F7Cu;
    {
        const bool branch_taken_0x2b3f7c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x2B3F80u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        if (branch_taken_0x2b3f7c) {
            ctx->pc = 0x2B3F34u;
            goto label_2b3f34;
        }
    }
    ctx->pc = 0x2B3F84u;
    // 0x2b3f84: 0x8c820018
    ctx->pc = 0x2b3f84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_2b3f88:
    // 0x2b3f88: 0x10a0ffe7
    ctx->pc = 0x2B3F88u;
    {
        const bool branch_taken_0x2b3f88 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B3F8Cu;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 9, GPR_U32(ctx, 10));
        if (branch_taken_0x2b3f88) {
            ctx->pc = 0x2B3F28u;
            goto label_2b3f28;
        }
    }
    ctx->pc = 0x2B3F90u;
label_2b3f90:
    // 0x2b3f90: 0x54a00001
    ctx->pc = 0x2B3F90u;
    {
        const bool branch_taken_0x2b3f90 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        if (branch_taken_0x2b3f90) {
            ctx->pc = 0x2B3F94u;
            WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 8));
            ctx->pc = 0x2B3F98u;
            goto label_2b3f98;
        }
    }
    ctx->pc = 0x2B3F98u;
label_2b3f98:
    // 0x2b3f98: 0x8e620000
    ctx->pc = 0x2b3f98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2b3f9c: 0x81880
    ctx->pc = 0x2b3f9cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 2));
    // 0x2b3fa0: 0x621821
    ctx->pc = 0x2b3fa0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b3fa4: 0xac650000
    ctx->pc = 0x2b3fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x2b3fa8: 0x25080001
    ctx->pc = 0x2b3fa8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x2b3fac: 0x80282d
    ctx->pc = 0x2b3facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3fb0: 0x8e62000c
    ctx->pc = 0x2b3fb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2b3fb4: 0x102102b
    ctx->pc = 0x2b3fb4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2b3fb8: 0x1440ffd9
    ctx->pc = 0x2B3FB8u;
    {
        const bool branch_taken_0x2b3fb8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B3FBCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b3fb8) {
            ctx->pc = 0x2B3F20u;
            goto label_2b3f20;
        }
    }
    ctx->pc = 0x2B3FC0u;
label_2b3fc0:
    // 0x2b3fc0: 0x8e620000
    ctx->pc = 0x2b3fc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2b3fc4: 0xac520000
    ctx->pc = 0x2b3fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x2b3fc8: 0xafd20000
    ctx->pc = 0x2b3fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 18));
    // 0x2b3fcc: 0x8fa20010
    ctx->pc = 0x2b3fccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b3fd0: 0x10400002
    ctx->pc = 0x2B3FD0u;
    {
        const bool branch_taken_0x2b3fd0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B3FD4u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 20)));
        if (branch_taken_0x2b3fd0) {
            ctx->pc = 0x2B3FDCu;
            goto label_2b3fdc;
        }
    }
    ctx->pc = 0x2B3FD8u;
    // 0x2b3fd8: 0xac720000
    ctx->pc = 0x2b3fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
label_2b3fdc:
    // 0x2b3fdc: 0x240102d
    ctx->pc = 0x2b3fdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3fe0: 0xdfbf00b0
    ctx->pc = 0x2b3fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2b3fe4: 0xdfbe00a0
    ctx->pc = 0x2b3fe4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b3fe8: 0xdfb70090
    ctx->pc = 0x2b3fe8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b3fec: 0xdfb60080
    ctx->pc = 0x2b3fecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b3ff0: 0xdfb50070
    ctx->pc = 0x2b3ff0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b3ff4: 0xdfb40060
    ctx->pc = 0x2b3ff4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b3ff8: 0xdfb30050
    ctx->pc = 0x2b3ff8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b3ffc: 0xdfb20040
    ctx->pc = 0x2b3ffcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b4000: 0xdfb10030
    ctx->pc = 0x2b4000u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b4004: 0xdfb00020
    ctx->pc = 0x2b4004u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b4008: 0x3e00008
    ctx->pc = 0x2B4008u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B400Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B3C90u: goto label_2b3c90;
            case 0x2B3CACu: goto label_2b3cac;
            case 0x2B3CC8u: goto label_2b3cc8;
            case 0x2B3CCCu: goto label_2b3ccc;
            case 0x2B3CE4u: goto label_2b3ce4;
            case 0x2B3CFCu: goto label_2b3cfc;
            case 0x2B3D20u: goto label_2b3d20;
            case 0x2B3D48u: goto label_2b3d48;
            case 0x2B3D74u: goto label_2b3d74;
            case 0x2B3D84u: goto label_2b3d84;
            case 0x2B3DACu: goto label_2b3dac;
            case 0x2B3DB0u: goto label_2b3db0;
            case 0x2B3E50u: goto label_2b3e50;
            case 0x2B3E88u: goto label_2b3e88;
            case 0x2B3EDCu: goto label_2b3edc;
            case 0x2B3EF8u: goto label_2b3ef8;
            case 0x2B3F00u: goto label_2b3f00;
            case 0x2B3F20u: goto label_2b3f20;
            case 0x2B3F28u: goto label_2b3f28;
            case 0x2B3F30u: goto label_2b3f30;
            case 0x2B3F34u: goto label_2b3f34;
            case 0x2B3F6Cu: goto label_2b3f6c;
            case 0x2B3F88u: goto label_2b3f88;
            case 0x2B3F90u: goto label_2b3f90;
            case 0x2B3F98u: goto label_2b3f98;
            case 0x2B3FC0u: goto label_2b3fc0;
            case 0x2B3FDCu: goto label_2b3fdc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B4010u;
}
