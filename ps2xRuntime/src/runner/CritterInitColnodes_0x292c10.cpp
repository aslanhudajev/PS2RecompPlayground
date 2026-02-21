#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterInitColnodes
// Address: 0x292c10 - 0x292e38
void CritterInitColnodes_0x292c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x292c10u;

    // 0x292c10: 0x27bdffa0
    ctx->pc = 0x292c10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x292c14: 0xffbf0050
    ctx->pc = 0x292c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x292c18: 0xffb40040
    ctx->pc = 0x292c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x292c1c: 0xffb30030
    ctx->pc = 0x292c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x292c20: 0xffb20020
    ctx->pc = 0x292c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x292c24: 0xffb10010
    ctx->pc = 0x292c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x292c28: 0xffb00000
    ctx->pc = 0x292c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x292c2c: 0x80882d
    ctx->pc = 0x292c2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292c30: 0x8e250004
    ctx->pc = 0x292c30u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x292c34: 0x84a20118
    ctx->pc = 0x292c34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 280)));
    // 0x292c38: 0x18400077
    ctx->pc = 0x292C38u;
    {
        const bool branch_taken_0x292c38 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x292C3Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 80));
        if (branch_taken_0x292c38) {
            ctx->pc = 0x292E18u;
            goto label_292e18;
        }
    }
    ctx->pc = 0x292C40u;
    // 0x292c40: 0x8ca40130
    ctx->pc = 0x292c40u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x292c44: 0x84a2011a
    ctx->pc = 0x292c44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 282)));
    // 0x292c48: 0x431018
    ctx->pc = 0x292c48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x292c4c: 0x8c83003c
    ctx->pc = 0x292c4cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x292c50: 0x439821
    ctx->pc = 0x292c50u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x292c54: 0x2402ffff
    ctx->pc = 0x292c54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x292c58: 0xa6220b40
    ctx->pc = 0x292c58u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2880), (uint16_t)GPR_U32(ctx, 2));
    // 0x292c5c: 0x84a20118
    ctx->pc = 0x292c5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 280)));
    // 0x292c60: 0x1840006d
    ctx->pc = 0x292C60u;
    {
        const bool branch_taken_0x292c60 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x292C64u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x292c60) {
            ctx->pc = 0x292E18u;
            goto label_292e18;
        }
    }
    ctx->pc = 0x292C68u;
    // 0x292c68: 0x3c020031
    ctx->pc = 0x292c68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x292c6c: 0x2454ffe8
    ctx->pc = 0x292c6cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x292c70: 0x24020060
    ctx->pc = 0x292c70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 96));
    // 0x292c74: 0x0
    ctx->pc = 0x292c74u;
    // NOP
label_292c78:
    // 0x292c78: 0x2421018
    ctx->pc = 0x292c78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x292c7c: 0x24420540
    ctx->pc = 0x292c7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1344));
    // 0x292c80: 0x2228021
    ctx->pc = 0x292c80u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x292c84: 0x24020050
    ctx->pc = 0x292c84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 80));
    // 0x292c88: 0x2421818
    ctx->pc = 0x292c88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x292c8c: 0x731021
    ctx->pc = 0x292c8cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x292c90: 0xae020000
    ctx->pc = 0x292c90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x292c94: 0x84450014
    ctx->pc = 0x292c94u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x292c98: 0x4a00005
    ctx->pc = 0x292C98u;
    {
        const bool branch_taken_0x292c98 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x292C9Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x292c98) {
            ctx->pc = 0x292CB0u;
            goto label_292cb0;
        }
    }
    ctx->pc = 0x292CA0u;
    // 0x292ca0: 0xc0a47e0
    ctx->pc = 0x292CA0u;
    SET_GPR_U32(ctx, 31, 0x292CA8u);
    ctx->pc = 0x292CA4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 204)));
    ctx->pc = 0x291F80u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterGetNode_0x291f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292CA8u; }
    }
    if (ctx->pc != 0x292CA8u) { return; }
    ctx->pc = 0x292CA8u;
    // 0x292ca8: 0x10000002
    ctx->pc = 0x292CA8u;
    {
        const bool branch_taken_0x292ca8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x292CACu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x292ca8) {
            ctx->pc = 0x292CB4u;
            goto label_292cb4;
        }
    }
    ctx->pc = 0x292CB0u;
label_292cb0:
    // 0x292cb0: 0xae000004
    ctx->pc = 0x292cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_292cb4:
    // 0x292cb4: 0x8e020004
    ctx->pc = 0x292cb4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x292cb8: 0x1040002d
    ctx->pc = 0x292CB8u;
    {
        const bool branch_taken_0x292cb8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x292CBCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        if (branch_taken_0x292cb8) {
            ctx->pc = 0x292D70u;
            goto label_292d70;
        }
    }
    ctx->pc = 0x292CC0u;
    // 0x292cc0: 0x8e040000
    ctx->pc = 0x292cc0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x292cc4: 0x80830030
    ctx->pc = 0x292cc4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x292cc8: 0x10600029
    ctx->pc = 0x292CC8u;
    {
        const bool branch_taken_0x292cc8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x292CCCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 45));
        if (branch_taken_0x292cc8) {
            ctx->pc = 0x292D70u;
            goto label_292d70;
        }
    }
    ctx->pc = 0x292CD0u;
    // 0x292cd0: 0x1462000e
    ctx->pc = 0x292CD0u;
    {
        const bool branch_taken_0x292cd0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x292CD4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 43));
        if (branch_taken_0x292cd0) {
            ctx->pc = 0x292D0Cu;
            goto label_292d0c;
        }
    }
    ctx->pc = 0x292CD8u;
    // 0x292cd8: 0x80820031
    ctx->pc = 0x292cd8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 49)));
    // 0x292cdc: 0x2444ffd0
    ctx->pc = 0x292cdcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x292ce0: 0x18800023
    ctx->pc = 0x292CE0u;
    {
        const bool branch_taken_0x292ce0 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x292CE4u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x292ce0) {
            ctx->pc = 0x292D70u;
            goto label_292d70;
        }
    }
    ctx->pc = 0x292CE8u;
label_292ce8:
    // 0x292ce8: 0x8e020008
    ctx->pc = 0x292ce8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x292cec: 0x8c420074
    ctx->pc = 0x292cecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x292cf0: 0xae020008
    ctx->pc = 0x292cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x292cf4: 0x24630001
    ctx->pc = 0x292cf4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x292cf8: 0x64102a
    ctx->pc = 0x292cf8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
    // 0x292cfc: 0x1440fffa
    ctx->pc = 0x292CFCu;
    {
        const bool branch_taken_0x292cfc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x292cfc) {
            ctx->pc = 0x292CE8u;
            goto label_292ce8;
        }
    }
    ctx->pc = 0x292D04u;
    // 0x292d04: 0x1000001b
    ctx->pc = 0x292D04u;
    {
        const bool branch_taken_0x292d04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x292D08u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        if (branch_taken_0x292d04) {
            ctx->pc = 0x292D74u;
            goto label_292d74;
        }
    }
    ctx->pc = 0x292D0Cu;
label_292d0c:
    // 0x292d0c: 0x5462000f
    ctx->pc = 0x292D0Cu;
    {
        const bool branch_taken_0x292d0c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x292d0c) {
            ctx->pc = 0x292D10u;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x292D4Cu;
            goto label_292d4c;
        }
    }
    ctx->pc = 0x292D14u;
    // 0x292d14: 0x80820031
    ctx->pc = 0x292d14u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 49)));
    // 0x292d18: 0x2444ffd0
    ctx->pc = 0x292d18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x292d1c: 0x18800014
    ctx->pc = 0x292D1Cu;
    {
        const bool branch_taken_0x292d1c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x292D20u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x292d1c) {
            ctx->pc = 0x292D70u;
            goto label_292d70;
        }
    }
    ctx->pc = 0x292D24u;
    // 0x292d24: 0x0
    ctx->pc = 0x292d24u;
    // NOP
label_292d28:
    // 0x292d28: 0x8e020008
    ctx->pc = 0x292d28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x292d2c: 0x8c420078
    ctx->pc = 0x292d2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x292d30: 0xae020008
    ctx->pc = 0x292d30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x292d34: 0x24630001
    ctx->pc = 0x292d34u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x292d38: 0x64102a
    ctx->pc = 0x292d38u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
    // 0x292d3c: 0x1440fffa
    ctx->pc = 0x292D3Cu;
    {
        const bool branch_taken_0x292d3c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x292d3c) {
            ctx->pc = 0x292D28u;
            goto label_292d28;
        }
    }
    ctx->pc = 0x292D44u;
    // 0x292d44: 0x1000000b
    ctx->pc = 0x292D44u;
    {
        const bool branch_taken_0x292d44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x292D48u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        if (branch_taken_0x292d44) {
            ctx->pc = 0x292D74u;
            goto label_292d74;
        }
    }
    ctx->pc = 0x292D4Cu;
label_292d4c:
    // 0x292d4c: 0x8e240004
    ctx->pc = 0x292d4cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x292d50: 0x24a50030
    ctx->pc = 0x292d50u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 48));
    // 0x292d54: 0xc0a47c8
    ctx->pc = 0x292D54u;
    SET_GPR_U32(ctx, 31, 0x292D5Cu);
    ctx->pc = 0x292D58u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x291F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterGetNodeIdx_0x291f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292D5Cu; }
    }
    if (ctx->pc != 0x292D5Cu) { return; }
    ctx->pc = 0x292D5Cu;
    // 0x292d5c: 0x220202d
    ctx->pc = 0x292d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292d60: 0x40282d
    ctx->pc = 0x292d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292d64: 0xc0a47e0
    ctx->pc = 0x292D64u;
    SET_GPR_U32(ctx, 31, 0x292D6Cu);
    ctx->pc = 0x292D68u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 204)));
    ctx->pc = 0x291F80u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterGetNode_0x291f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292D6Cu; }
    }
    if (ctx->pc != 0x292D6Cu) { return; }
    ctx->pc = 0x292D6Cu;
    // 0x292d6c: 0xae020008
    ctx->pc = 0x292d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_292d70:
    // 0x292d70: 0x8e020000
    ctx->pc = 0x292d70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_292d74:
    // 0x292d74: 0x8e040004
    ctx->pc = 0x292d74u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x292d78: 0x84450016
    ctx->pc = 0x292d78u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x292d7c: 0xc0b4096
    ctx->pc = 0x292D7Cu;
    SET_GPR_U32(ctx, 31, 0x292D84u);
    ctx->pc = 0x292D80u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0258u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetZMod_0x2d0258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292D84u; }
    }
    if (ctx->pc != 0x292D84u) { return; }
    ctx->pc = 0x292D84u;
    // 0x292d84: 0x2402ffff
    ctx->pc = 0x292d84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x292d88: 0xae020054
    ctx->pc = 0x292d88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x292d8c: 0xae00005c
    ctx->pc = 0x292d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x292d90: 0x8e050000
    ctx->pc = 0x292d90u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x292d94: 0xc4a00044
    ctx->pc = 0x292d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292d98: 0xc62104f4
    ctx->pc = 0x292d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x292d9c: 0x46010002
    ctx->pc = 0x292d9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x292da0: 0xe6000058
    ctx->pc = 0x292da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x292da4: 0x8e220004
    ctx->pc = 0x292da4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x292da8: 0x8c430120
    ctx->pc = 0x292da8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 288)));
    // 0x292dac: 0x8c440130
    ctx->pc = 0x292dacu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x292db0: 0x84a50012
    ctx->pc = 0x292db0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 18)));
    // 0x292db4: 0xc0a47a0
    ctx->pc = 0x292DB4u;
    SET_GPR_U32(ctx, 31, 0x292DBCu);
    ctx->pc = 0x292DB8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 40)));
    ctx->pc = 0x291E80u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterInitDamage_0x291e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292DBCu; }
    }
    if (ctx->pc != 0x292DBCu) { return; }
    ctx->pc = 0x292DBCu;
    // 0x292dbc: 0x3c020031
    ctx->pc = 0x292dbcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x292dc0: 0xdc420e28
    ctx->pc = 0x292dc0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
    // 0x292dc4: 0x30420010
    ctx->pc = 0x292dc4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x292dc8: 0x5040000e
    ctx->pc = 0x292DC8u;
    {
        const bool branch_taken_0x292dc8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x292dc8) {
            ctx->pc = 0x292DCCu;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x292E04u;
            goto label_292e04;
        }
    }
    ctx->pc = 0x292DD0u;
    // 0x292dd0: 0x8e820020
    ctx->pc = 0x292dd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x292dd4: 0x5040000b
    ctx->pc = 0x292DD4u;
    {
        const bool branch_taken_0x292dd4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x292dd4) {
            ctx->pc = 0x292DD8u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x292E04u;
            goto label_292e04;
        }
    }
    ctx->pc = 0x292DDCu;
    // 0x292ddc: 0x8e050000
    ctx->pc = 0x292ddcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x292de0: 0xc4ac002c
    ctx->pc = 0x292de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x292de4: 0x44806800
    ctx->pc = 0x292de4u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
    // 0x292de8: 0x46006b86
    ctx->pc = 0x292de8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x292dec: 0x8e040004
    ctx->pc = 0x292decu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x292df0: 0x24a50020
    ctx->pc = 0x292df0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 32));
    // 0x292df4: 0xc09ff46
    ctx->pc = 0x292DF4u;
    SET_GPR_U32(ctx, 31, 0x292DFCu);
    ctx->pc = 0x292DF8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
    ctx->pc = 0x27FD18u;
    {
        const uint32_t __entryPc = ctx->pc;
        DmgFxCircleAdd_0x27fd18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292DFCu; }
    }
    if (ctx->pc != 0x292DFCu) { return; }
    ctx->pc = 0x292DFCu;
    // 0x292dfc: 0xae020050
    ctx->pc = 0x292dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x292e00: 0x26520001
    ctx->pc = 0x292e00u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_292e04:
    // 0x292e04: 0x8e220004
    ctx->pc = 0x292e04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x292e08: 0x84420118
    ctx->pc = 0x292e08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x292e0c: 0x242102a
    ctx->pc = 0x292e0cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
    // 0x292e10: 0x1440ff99
    ctx->pc = 0x292E10u;
    {
        const bool branch_taken_0x292e10 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x292E14u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 96));
        if (branch_taken_0x292e10) {
            ctx->pc = 0x292C78u;
            goto label_292c78;
        }
    }
    ctx->pc = 0x292E18u;
label_292e18:
    // 0x292e18: 0xdfbf0050
    ctx->pc = 0x292e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x292e1c: 0xdfb40040
    ctx->pc = 0x292e1cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x292e20: 0xdfb30030
    ctx->pc = 0x292e20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x292e24: 0xdfb20020
    ctx->pc = 0x292e24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x292e28: 0xdfb10010
    ctx->pc = 0x292e28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x292e2c: 0xdfb00000
    ctx->pc = 0x292e2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x292e30: 0x3e00008
    ctx->pc = 0x292E30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292E34u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x292C78u: goto label_292c78;
            case 0x292CB0u: goto label_292cb0;
            case 0x292CB4u: goto label_292cb4;
            case 0x292CE8u: goto label_292ce8;
            case 0x292D0Cu: goto label_292d0c;
            case 0x292D28u: goto label_292d28;
            case 0x292D4Cu: goto label_292d4c;
            case 0x292D70u: goto label_292d70;
            case 0x292D74u: goto label_292d74;
            case 0x292E04u: goto label_292e04;
            case 0x292E18u: goto label_292e18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x292E38u;
}
