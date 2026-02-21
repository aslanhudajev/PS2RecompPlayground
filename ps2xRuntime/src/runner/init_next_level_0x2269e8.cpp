#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: init_next_level
// Address: 0x2269e8 - 0x226fc0
void init_next_level_0x2269e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2269e8u;

    // 0x2269e8: 0x27bdff50
    ctx->pc = 0x2269e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2269ec: 0xffbf00a0
    ctx->pc = 0x2269ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2269f0: 0xffbe0090
    ctx->pc = 0x2269f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2269f4: 0xffb70080
    ctx->pc = 0x2269f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2269f8: 0xffb60070
    ctx->pc = 0x2269f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2269fc: 0xffb50060
    ctx->pc = 0x2269fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x226a00: 0xffb40050
    ctx->pc = 0x226a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x226a04: 0xffb30040
    ctx->pc = 0x226a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x226a08: 0xffb20030
    ctx->pc = 0x226a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x226a0c: 0xffb10020
    ctx->pc = 0x226a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x226a10: 0xffb00010
    ctx->pc = 0x226a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x226a14: 0x3c020032
    ctx->pc = 0x226a14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x226a18: 0x8c4307bc
    ctx->pc = 0x226a18u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 1980)));
    // 0x226a1c: 0x2477fff3
    ctx->pc = 0x226a1cu;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 3), 4294967283));
    // 0x226a20: 0x3402fff2
    ctx->pc = 0x226a20u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65522));
    // 0x226a24: 0x57102b
    ctx->pc = 0x226a24u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x226a28: 0x38570001
    ctx->pc = 0x226a28u;
    SET_GPR_U32(ctx, 23, XOR32(GPR_U32(ctx, 2), 1));
    // 0x226a2c: 0x38630002
    ctx->pc = 0x226a2cu;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), 2));
    // 0x226a30: 0x2c630001
    ctx->pc = 0x226a30u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 3), 1));
    // 0x226a34: 0xafa30000
    ctx->pc = 0x226a34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x226a38: 0x3c020032
    ctx->pc = 0x226a38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x226a3c: 0xac40f454
    ctx->pc = 0x226a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294964308), GPR_U32(ctx, 0));
    // 0x226a40: 0x3c020031
    ctx->pc = 0x226a40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x226a44: 0x8c42f184
    ctx->pc = 0x226a44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963588)));
    // 0x226a48: 0x14400002
    ctx->pc = 0x226A48u;
    {
        const bool branch_taken_0x226a48 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x226A4Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x226a48) {
            ctx->pc = 0x226A54u;
            goto label_226a54;
        }
    }
    ctx->pc = 0x226A50u;
    // 0x226a50: 0xac401330
    ctx->pc = 0x226a50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4912), GPR_U32(ctx, 0));
label_226a54:
    // 0x226a54: 0xc08820a
    ctx->pc = 0x226A54u;
    SET_GPR_U32(ctx, 31, 0x226A5Cu);
    ctx->pc = 0x226A58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x220828u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioReset_0x220828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226A5Cu; }
    }
    if (ctx->pc != 0x226A5Cu) { return; }
    ctx->pc = 0x226A5Cu;
    // 0x226a5c: 0xc0b49c0
    ctx->pc = 0x226A5Cu;
    SET_GPR_U32(ctx, 31, 0x226A64u);
    ctx->pc = 0x2D2700u;
    {
        const uint32_t __entryPc = ctx->pc;
        ClearErrors_0x2d2700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226A64u; }
    }
    if (ctx->pc != 0x226A64u) { return; }
    ctx->pc = 0x226A64u;
    // 0x226a64: 0x3c030031
    ctx->pc = 0x226a64u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x226a68: 0x2402400c
    ctx->pc = 0x226a68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16396));
    // 0x226a6c: 0xac620018
    ctx->pc = 0x226a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x226a70: 0x3c020031
    ctx->pc = 0x226a70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x226a74: 0xac40ff9c
    ctx->pc = 0x226a74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967196), GPR_U32(ctx, 0));
    // 0x226a78: 0x3c020032
    ctx->pc = 0x226a78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x226a7c: 0xac4007cc
    ctx->pc = 0x226a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1996), GPR_U32(ctx, 0));
    // 0x226a80: 0x3c020032
    ctx->pc = 0x226a80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x226a84: 0xac4007d0
    ctx->pc = 0x226a84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2000), GPR_U32(ctx, 0));
    // 0x226a88: 0x3c020032
    ctx->pc = 0x226a88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x226a8c: 0xac4007d4
    ctx->pc = 0x226a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2004), GPR_U32(ctx, 0));
    // 0x226a90: 0x3c020032
    ctx->pc = 0x226a90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x226a94: 0xac4007ec
    ctx->pc = 0x226a94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2028), GPR_U32(ctx, 0));
    // 0x226a98: 0x3c02003c
    ctx->pc = 0x226a98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x226a9c: 0xac401800
    ctx->pc = 0x226a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6144), GPR_U32(ctx, 0));
    // 0x226aa0: 0x3c030032
    ctx->pc = 0x226aa0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x226aa4: 0x3c020032
    ctx->pc = 0x226aa4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x226aa8: 0x3c013f80
    ctx->pc = 0x226aa8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x226aac: 0x44810000
    ctx->pc = 0x226aacu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x226ab0: 0xe4400824
    ctx->pc = 0x226ab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2084), bits); }
    // 0x226ab4: 0xe46007fc
    ctx->pc = 0x226ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 2044), bits); }
    // 0x226ab8: 0x3c020032
    ctx->pc = 0x226ab8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x226abc: 0xac400860
    ctx->pc = 0x226abcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2144), GPR_U32(ctx, 0));
    // 0x226ac0: 0x3c020032
    ctx->pc = 0x226ac0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x226ac4: 0xac400864
    ctx->pc = 0x226ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2148), GPR_U32(ctx, 0));
    // 0x226ac8: 0x3c020032
    ctx->pc = 0x226ac8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x226acc: 0x8c42071c
    ctx->pc = 0x226accu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1820)));
    // 0x226ad0: 0x4410017
    ctx->pc = 0x226AD0u;
    {
        const bool branch_taken_0x226ad0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x226AD4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x226ad0) {
            ctx->pc = 0x226B30u;
            goto label_226b30;
        }
    }
    ctx->pc = 0x226AD8u;
    // 0x226ad8: 0xc089466
    ctx->pc = 0x226AD8u;
    SET_GPR_U32(ctx, 31, 0x226AE0u);
    ctx->pc = 0x225198u;
    {
        const uint32_t __entryPc = ctx->pc;
        next_world_0x225198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226AE0u; }
    }
    if (ctx->pc != 0x226AE0u) { return; }
    ctx->pc = 0x226AE0u;
    // 0x226ae0: 0x3c020032
    ctx->pc = 0x226ae0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x226ae4: 0x3c030032
    ctx->pc = 0x226ae4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x226ae8: 0x8c440704
    ctx->pc = 0x226ae8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 1796)));
    // 0x226aec: 0x8c6207b8
    ctx->pc = 0x226aecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 1976)));
    // 0x226af0: 0x10820003
    ctx->pc = 0x226AF0u;
    {
        const bool branch_taken_0x226af0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x226AF4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x226af0) {
            ctx->pc = 0x226B00u;
            goto label_226b00;
        }
    }
    ctx->pc = 0x226AF8u;
    // 0x226af8: 0x2402ffff
    ctx->pc = 0x226af8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x226afc: 0xac620700
    ctx->pc = 0x226afcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1792), GPR_U32(ctx, 2));
label_226b00:
    // 0x226b00: 0x3c020032
    ctx->pc = 0x226b00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x226b04: 0xac4007bc
    ctx->pc = 0x226b04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1980), GPR_U32(ctx, 0));
    // 0x226b08: 0x3c020032
    ctx->pc = 0x226b08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x226b0c: 0x3c030032
    ctx->pc = 0x226b0cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x226b10: 0x8c4407b8
    ctx->pc = 0x226b10u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 1976)));
    // 0x226b14: 0x24050001
    ctx->pc = 0x226b14u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x226b18: 0xc0898c2
    ctx->pc = 0x226B18u;
    SET_GPR_U32(ctx, 31, 0x226B20u);
    ctx->pc = 0x226B1Cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 1792)));
    ctx->pc = 0x226308u;
    {
        const uint32_t __entryPc = ctx->pc;
        ResetModels_0x226308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226B20u; }
    }
    if (ctx->pc != 0x226B20u) { return; }
    ctx->pc = 0x226B20u;
    // 0x226b20: 0xc089994
    ctx->pc = 0x226B20u;
    SET_GPR_U32(ctx, 31, 0x226B28u);
    ctx->pc = 0x226650u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocMBMem_0x226650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226B28u; }
    }
    if (ctx->pc != 0x226B28u) { return; }
    ctx->pc = 0x226B28u;
    // 0x226b28: 0x10000008
    ctx->pc = 0x226B28u;
    {
        const bool branch_taken_0x226b28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x226b28) {
            ctx->pc = 0x226B4Cu;
            goto label_226b4c;
        }
    }
    ctx->pc = 0x226B30u;
label_226b30:
    // 0x226b30: 0x3c030032
    ctx->pc = 0x226b30u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x226b34: 0x8c44e7d4
    ctx->pc = 0x226b34u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294961108)));
    // 0x226b38: 0x24050001
    ctx->pc = 0x226b38u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x226b3c: 0xc0898c2
    ctx->pc = 0x226B3Cu;
    SET_GPR_U32(ctx, 31, 0x226B44u);
    ctx->pc = 0x226B40u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 1820)));
    ctx->pc = 0x226308u;
    {
        const uint32_t __entryPc = ctx->pc;
        ResetModels_0x226308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226B44u; }
    }
    if (ctx->pc != 0x226B44u) { return; }
    ctx->pc = 0x226B44u;
    // 0x226b44: 0xc089994
    ctx->pc = 0x226B44u;
    SET_GPR_U32(ctx, 31, 0x226B4Cu);
    ctx->pc = 0x226650u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocMBMem_0x226650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226B4Cu; }
    }
    if (ctx->pc != 0x226B4Cu) { return; }
    ctx->pc = 0x226B4Cu;
label_226b4c:
    // 0x226b4c: 0xc0a0220
    ctx->pc = 0x226B4Cu;
    SET_GPR_U32(ctx, 31, 0x226B54u);
    ctx->pc = 0x226B50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x280880u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitLighting_0x280880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226B54u; }
    }
    if (ctx->pc != 0x226B54u) { return; }
    ctx->pc = 0x226B54u;
    // 0x226b54: 0x3c030034
    ctx->pc = 0x226b54u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x226b58: 0x3c100034
    ctx->pc = 0x226b58u;
    SET_GPR_U32(ctx, 16, ((uint32_t)52 << 16));
    // 0x226b5c: 0x8e02e7f0
    ctx->pc = 0x226b5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294961136)));
    // 0x226b60: 0xac62e89c
    ctx->pc = 0x226b60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961308), GPR_U32(ctx, 2));
    // 0x226b64: 0x3c030034
    ctx->pc = 0x226b64u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x226b68: 0x3c020034
    ctx->pc = 0x226b68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x226b6c: 0x8c42e7f4
    ctx->pc = 0x226b6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961140)));
    // 0x226b70: 0xac62e8a0
    ctx->pc = 0x226b70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961312), GPR_U32(ctx, 2));
    // 0x226b74: 0x3c030032
    ctx->pc = 0x226b74u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x226b78: 0x2402ffff
    ctx->pc = 0x226b78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x226b7c: 0xac620700
    ctx->pc = 0x226b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1792), GPR_U32(ctx, 2));
    // 0x226b80: 0x3c020034
    ctx->pc = 0x226b80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x226b84: 0x8c45e7c8
    ctx->pc = 0x226b84u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x226b88: 0x202d
    ctx->pc = 0x226b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226b8c: 0xc08073e
    ctx->pc = 0x226B8Cu;
    SET_GPR_U32(ctx, 31, 0x226B94u);
    ctx->pc = 0x226B90u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
    ctx->pc = 0x201CF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetScrollLevelMsgList_0x201cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226B94u; }
    }
    if (ctx->pc != 0x226B94u) { return; }
    ctx->pc = 0x226B94u;
    // 0x226b94: 0xc089a6c
    ctx->pc = 0x226B94u;
    SET_GPR_U32(ctx, 31, 0x226B9Cu);
    ctx->pc = 0x226B98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2269B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_moving_objects_0x2269b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226B9Cu; }
    }
    if (ctx->pc != 0x226B9Cu) { return; }
    ctx->pc = 0x226B9Cu;
    // 0x226b9c: 0xc09d5a2
    ctx->pc = 0x226B9Cu;
    SET_GPR_U32(ctx, 31, 0x226BA4u);
    ctx->pc = 0x275688u;
    {
        const uint32_t __entryPc = ctx->pc;
        TowerInit_0x275688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226BA4u; }
    }
    if (ctx->pc != 0x226BA4u) { return; }
    ctx->pc = 0x226BA4u;
    // 0x226ba4: 0xc098b5c
    ctx->pc = 0x226BA4u;
    SET_GPR_U32(ctx, 31, 0x226BACu);
    ctx->pc = 0x262D70u;
    {
        const uint32_t __entryPc = ctx->pc;
        GauntWorldInit_0x262d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226BACu; }
    }
    if (ctx->pc != 0x226BACu) { return; }
    ctx->pc = 0x226BACu;
    // 0x226bac: 0xc0a005c
    ctx->pc = 0x226BACu;
    SET_GPR_U32(ctx, 31, 0x226BB4u);
    ctx->pc = 0x280170u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetupDynGrid_0x280170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226BB4u; }
    }
    if (ctx->pc != 0x226BB4u) { return; }
    ctx->pc = 0x226BB4u;
    // 0x226bb4: 0xc087d8c
    ctx->pc = 0x226BB4u;
    SET_GPR_U32(ctx, 31, 0x226BBCu);
    ctx->pc = 0x21F630u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateDynobjGrid_0x21f630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226BBCu; }
    }
    if (ctx->pc != 0x226BBCu) { return; }
    ctx->pc = 0x226BBCu;
    // 0x226bbc: 0x8e03e7f0
    ctx->pc = 0x226bbcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4294961136)));
    // 0x226bc0: 0x2402000d
    ctx->pc = 0x226bc0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
    // 0x226bc4: 0x14620019
    ctx->pc = 0x226BC4u;
    {
        const bool branch_taken_0x226bc4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x226BC8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x226bc4) {
            ctx->pc = 0x226C2Cu;
            goto label_226c2c;
        }
    }
    ctx->pc = 0x226BCCu;
    // 0x226bcc: 0x902d
    ctx->pc = 0x226bccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226bd0: 0x3c020032
    ctx->pc = 0x226bd0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x226bd4: 0x24501bc0
    ctx->pc = 0x226bd4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x226bd8: 0x24110001
    ctx->pc = 0x226bd8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
    // 0x226bdc: 0x2413000b
    ctx->pc = 0x226bdcu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 11));
label_226be0:
    // 0x226be0: 0x8e0200fc
    ctx->pc = 0x226be0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x226be4: 0x14510005
    ctx->pc = 0x226BE4u;
    {
        const bool branch_taken_0x226be4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        if (branch_taken_0x226be4) {
            ctx->pc = 0x226BFCu;
            goto label_226bfc;
        }
    }
    ctx->pc = 0x226BECu;
    // 0x226bec: 0xc08c06a
    ctx->pc = 0x226BECu;
    SET_GPR_U32(ctx, 31, 0x226BF4u);
    ctx->pc = 0x226BF0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2301A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        player_store_in_save_0x2301a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226BF4u; }
    }
    if (ctx->pc != 0x226BF4u) { return; }
    ctx->pc = 0x226BF4u;
    // 0x226bf4: 0x10000007
    ctx->pc = 0x226BF4u;
    {
        const bool branch_taken_0x226bf4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x226BF8u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x226bf4) {
            ctx->pc = 0x226C14u;
            goto label_226c14;
        }
    }
    ctx->pc = 0x226BFCu;
label_226bfc:
    // 0x226bfc: 0x54530005
    ctx->pc = 0x226BFCu;
    {
        const bool branch_taken_0x226bfc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 19));
        if (branch_taken_0x226bfc) {
            ctx->pc = 0x226C00u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x226C14u;
            goto label_226c14;
        }
    }
    ctx->pc = 0x226C04u;
    // 0x226c04: 0xc08c274
    ctx->pc = 0x226C04u;
    SET_GPR_U32(ctx, 31, 0x226C0Cu);
    ctx->pc = 0x226C08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2309D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerRestoreState_0x2309d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226C0Cu; }
    }
    if (ctx->pc != 0x226C0Cu) { return; }
    ctx->pc = 0x226C0Cu;
    // 0x226c0c: 0xae1100fc
    ctx->pc = 0x226c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 17));
    // 0x226c10: 0x26520001
    ctx->pc = 0x226c10u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_226c14:
    // 0x226c14: 0x2a420004
    ctx->pc = 0x226c14u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 4));
    // 0x226c18: 0x1440fff1
    ctx->pc = 0x226C18u;
    {
        const bool branch_taken_0x226c18 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x226C1Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 11008));
        if (branch_taken_0x226c18) {
            ctx->pc = 0x226BE0u;
            goto label_226be0;
        }
    }
    ctx->pc = 0x226C20u;
    // 0x226c20: 0xc09d5d2
    ctx->pc = 0x226C20u;
    SET_GPR_U32(ctx, 31, 0x226C28u);
    ctx->pc = 0x275748u;
    {
        const uint32_t __entryPc = ctx->pc;
        EnterTower_0x275748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226C28u; }
    }
    if (ctx->pc != 0x226C28u) { return; }
    ctx->pc = 0x226C28u;
    // 0x226c28: 0x3c020034
    ctx->pc = 0x226c28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_226c2c:
    // 0x226c2c: 0x8c43e7f0
    ctx->pc = 0x226c2cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
    // 0x226c30: 0x2402000c
    ctx->pc = 0x226c30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
    // 0x226c34: 0x10620004
    ctx->pc = 0x226C34u;
    {
        const bool branch_taken_0x226c34 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x226c34) {
            ctx->pc = 0x226C48u;
            goto label_226c48;
        }
    }
    ctx->pc = 0x226C3Cu;
    // 0x226c3c: 0x16e00002
    ctx->pc = 0x226C3Cu;
    {
        const bool branch_taken_0x226c3c = (GPR_U32(ctx, 23) != GPR_U32(ctx, 0));
        ctx->pc = 0x226C40u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x226c3c) {
            ctx->pc = 0x226C48u;
            goto label_226c48;
        }
    }
    ctx->pc = 0x226C44u;
    // 0x226c44: 0xac400828
    ctx->pc = 0x226c44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2088), GPR_U32(ctx, 0));
label_226c48:
    // 0x226c48: 0xc099da2
    ctx->pc = 0x226C48u;
    SET_GPR_U32(ctx, 31, 0x226C50u);
    ctx->pc = 0x226C4Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x267688u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitCamera_0x267688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226C50u; }
    }
    if (ctx->pc != 0x226C50u) { return; }
    ctx->pc = 0x226C50u;
    // 0x226c50: 0x902d
    ctx->pc = 0x226c50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226c54: 0x3c020032
    ctx->pc = 0x226c54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x226c58: 0x24501bc0
    ctx->pc = 0x226c58u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x226c5c: 0x3c1e0032
    ctx->pc = 0x226c5cu;
    SET_GPR_U32(ctx, 30, ((uint32_t)50 << 16));
    // 0x226c60: 0x24140001
    ctx->pc = 0x226c60u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
    // 0x226c64: 0x2416000b
    ctx->pc = 0x226c64u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 11));
    // 0x226c68: 0x3c020032
    ctx->pc = 0x226c68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x226c6c: 0x24530830
    ctx->pc = 0x226c6cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 2096));
    // 0x226c70: 0x3c020032
    ctx->pc = 0x226c70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x226c74: 0x24550838
    ctx->pc = 0x226c74u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 2104));
label_226c78:
    // 0x226c78: 0x3c030032
    ctx->pc = 0x226c78u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x226c7c: 0x8c6207b8
    ctx->pc = 0x226c7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 1976)));
    // 0x226c80: 0xae020808
    ctx->pc = 0x226c80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2056), GPR_U32(ctx, 2));
    // 0x226c84: 0xae000080
    ctx->pc = 0x226c84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x226c88: 0xae000090
    ctx->pc = 0x226c88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
    // 0x226c8c: 0x2541004
    ctx->pc = 0x226c8cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), GPR_U32(ctx, 18) & 0x1F));
    // 0x226c90: 0x8fc307b4
    ctx->pc = 0x226c90u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 1972)));
    // 0x226c94: 0x431024
    ctx->pc = 0x226c94u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x226c98: 0x10400022
    ctx->pc = 0x226C98u;
    {
        const bool branch_taken_0x226c98 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x226c98) {
            ctx->pc = 0x226D24u;
            goto label_226d24;
        }
    }
    ctx->pc = 0x226CA0u;
    // 0x226ca0: 0x8e0200fc
    ctx->pc = 0x226ca0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x226ca4: 0x1056001f
    ctx->pc = 0x226CA4u;
    {
        const bool branch_taken_0x226ca4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 22));
        if (branch_taken_0x226ca4) {
            ctx->pc = 0x226D24u;
            goto label_226d24;
        }
    }
    ctx->pc = 0x226CACu;
    // 0x226cac: 0xae1400fc
    ctx->pc = 0x226cacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 20));
    // 0x226cb0: 0xc08c35e
    ctx->pc = 0x226CB0u;
    SET_GPR_U32(ctx, 31, 0x226CB8u);
    ctx->pc = 0x226CB4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x230D78u;
    {
        const uint32_t __entryPc = ctx->pc;
        load_player_geo_0x230d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226CB8u; }
    }
    if (ctx->pc != 0x226CB8u) { return; }
    ctx->pc = 0x226CB8u;
    // 0x226cb8: 0x26110020
    ctx->pc = 0x226cb8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 32));
    // 0x226cbc: 0xc09a352
    ctx->pc = 0x226CBCu;
    SET_GPR_U32(ctx, 31, 0x226CC4u);
    ctx->pc = 0x226CC0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x268D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        add_target_0x268d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226CC4u; }
    }
    if (ctx->pc != 0x226CC4u) { return; }
    ctx->pc = 0x226CC4u;
    // 0x226cc4: 0x240202d
    ctx->pc = 0x226cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226cc8: 0x8e05000c
    ctx->pc = 0x226cc8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x226ccc: 0xc093692
    ctx->pc = 0x226CCCu;
    SET_GPR_U32(ctx, 31, 0x226CD4u);
    ctx->pc = 0x226CD0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x24DA48u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadPlyrData_0x24da48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226CD4u; }
    }
    if (ctx->pc != 0x226CD4u) { return; }
    ctx->pc = 0x226CD4u;
    // 0x226cd4: 0x8fa60000
    ctx->pc = 0x226cd4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226cd8: 0x10c00012
    ctx->pc = 0x226CD8u;
    {
        const bool branch_taken_0x226cd8 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x226CDCu;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        if (branch_taken_0x226cd8) {
            ctx->pc = 0x226D24u;
            goto label_226d24;
        }
    }
    ctx->pc = 0x226CE0u;
    // 0x226ce0: 0x24842550
    ctx->pc = 0x226ce0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 9552));
    // 0x226ce4: 0xc0b549e
    ctx->pc = 0x226CE4u;
    SET_GPR_U32(ctx, 31, 0x226CECu);
    ctx->pc = 0x226CE8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5278u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat3_0x2d5278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226CECu; }
    }
    if (ctx->pc != 0x226CECu) { return; }
    ctx->pc = 0x226CECu;
    // 0x226cec: 0x2403000c
    ctx->pc = 0x226cecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 12));
    // 0x226cf0: 0x2431818
    ctx->pc = 0x226cf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x226cf4: 0x731021
    ctx->pc = 0x226cf4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x226cf8: 0xc4400000
    ctx->pc = 0x226cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226cfc: 0xe6000050
    ctx->pc = 0x226cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x226d00: 0x2631021
    ctx->pc = 0x226d00u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x226d04: 0xc4400004
    ctx->pc = 0x226d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226d08: 0xe6000054
    ctx->pc = 0x226d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x226d0c: 0x751821
    ctx->pc = 0x226d0cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x226d10: 0xc4600000
    ctx->pc = 0x226d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226d14: 0xe6000058
    ctx->pc = 0x226d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x226d18: 0x200202d
    ctx->pc = 0x226d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226d1c: 0xc08ac14
    ctx->pc = 0x226D1Cu;
    SET_GPR_U32(ctx, 31, 0x226D24u);
    ctx->pc = 0x226D20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22B050u;
    {
        const uint32_t __entryPc = ctx->pc;
        UpdatePlayerWorldMat_0x22b050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226D24u; }
    }
    if (ctx->pc != 0x226D24u) { return; }
    ctx->pc = 0x226D24u;
label_226d24:
    // 0x226d24: 0xc08d382
    ctx->pc = 0x226D24u;
    SET_GPR_U32(ctx, 31, 0x226D2Cu);
    ctx->pc = 0x226D28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x234E08u;
    {
        const uint32_t __entryPc = ctx->pc;
        setup_player_display_0x234e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226D2Cu; }
    }
    if (ctx->pc != 0x226D2Cu) { return; }
    ctx->pc = 0x226D2Cu;
    // 0x226d2c: 0x26520001
    ctx->pc = 0x226d2cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x226d30: 0x2a420004
    ctx->pc = 0x226d30u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 4));
    // 0x226d34: 0x1440ffd0
    ctx->pc = 0x226D34u;
    {
        const bool branch_taken_0x226d34 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x226D38u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 11008));
        if (branch_taken_0x226d34) {
            ctx->pc = 0x226C78u;
            goto label_226c78;
        }
    }
    ctx->pc = 0x226D3Cu;
    // 0x226d3c: 0x16e0002a
    ctx->pc = 0x226D3Cu;
    {
        const bool branch_taken_0x226d3c = (GPR_U32(ctx, 23) != GPR_U32(ctx, 0));
        ctx->pc = 0x226D40u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x226d3c) {
            ctx->pc = 0x226DE8u;
            goto label_226de8;
        }
    }
    ctx->pc = 0x226D44u;
    // 0x226d44: 0x3c020032
    ctx->pc = 0x226d44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x226d48: 0x24531bc0
    ctx->pc = 0x226d48u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x226d4c: 0x24112b00
    ctx->pc = 0x226d4cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x226d50: 0x3c100034
    ctx->pc = 0x226d50u;
    SET_GPR_U32(ctx, 16, ((uint32_t)52 << 16));
    // 0x226d54: 0x2416000d
    ctx->pc = 0x226d54u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 13));
    // 0x226d58: 0x2415000c
    ctx->pc = 0x226d58u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 12));
    // 0x226d5c: 0x24140001
    ctx->pc = 0x226d5cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
    // 0x226d60: 0x2511818
    ctx->pc = 0x226d60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x226d64: 0x0
    ctx->pc = 0x226d64u;
    // NOP
label_226d68:
    // 0x226d68: 0x731021
    ctx->pc = 0x226d68u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x226d6c: 0x8c4200fc
    ctx->pc = 0x226d6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x226d70: 0x10400012
    ctx->pc = 0x226D70u;
    {
        const bool branch_taken_0x226d70 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x226D74u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294961136)));
        if (branch_taken_0x226d70) {
            ctx->pc = 0x226DBCu;
            goto label_226dbc;
        }
    }
    ctx->pc = 0x226D78u;
    // 0x226d78: 0x14560005
    ctx->pc = 0x226D78u;
    {
        const bool branch_taken_0x226d78 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 22));
        ctx->pc = 0x226D7Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x226d78) {
            ctx->pc = 0x226D90u;
            goto label_226d90;
        }
    }
    ctx->pc = 0x226D80u;
    // 0x226d80: 0xc08c220
    ctx->pc = 0x226D80u;
    SET_GPR_U32(ctx, 31, 0x226D88u);
    ctx->pc = 0x226D84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x230880u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerSaveState_0x230880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226D88u; }
    }
    if (ctx->pc != 0x226D88u) { return; }
    ctx->pc = 0x226D88u;
    // 0x226d88: 0x10000006
    ctx->pc = 0x226D88u;
    {
        const bool branch_taken_0x226d88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x226D8Cu;
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x226d88) {
            ctx->pc = 0x226DA4u;
            goto label_226da4;
        }
    }
    ctx->pc = 0x226D90u;
label_226d90:
    // 0x226d90: 0x10550004
    ctx->pc = 0x226D90u;
    {
        const bool branch_taken_0x226d90 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 21));
        ctx->pc = 0x226D94u;
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x226d90) {
            ctx->pc = 0x226DA4u;
            goto label_226da4;
        }
    }
    ctx->pc = 0x226D98u;
    // 0x226d98: 0xc08c220
    ctx->pc = 0x226D98u;
    SET_GPR_U32(ctx, 31, 0x226DA0u);
    ctx->pc = 0x226D9Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x230880u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerSaveState_0x230880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226DA0u; }
    }
    if (ctx->pc != 0x226DA0u) { return; }
    ctx->pc = 0x226DA0u;
    // 0x226da0: 0x2511018
    ctx->pc = 0x226da0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_226da4:
    // 0x226da4: 0x531821
    ctx->pc = 0x226da4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x226da8: 0x8c621a1c
    ctx->pc = 0x226da8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 6684)));
    // 0x226dac: 0x54400004
    ctx->pc = 0x226DACu;
    {
        const bool branch_taken_0x226dac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x226dac) {
            ctx->pc = 0x226DB0u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x226DC0u;
            goto label_226dc0;
        }
    }
    ctx->pc = 0x226DB4u;
    // 0x226db4: 0xac741a1c
    ctx->pc = 0x226db4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6684), GPR_U32(ctx, 20));
    // 0x226db8: 0xa06009a7
    ctx->pc = 0x226db8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2471), (uint8_t)GPR_U32(ctx, 0));
label_226dbc:
    // 0x226dbc: 0x26520001
    ctx->pc = 0x226dbcu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_226dc0:
    // 0x226dc0: 0x2a420004
    ctx->pc = 0x226dc0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 4));
    // 0x226dc4: 0x1440ffe8
    ctx->pc = 0x226DC4u;
    {
        const bool branch_taken_0x226dc4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x226DC8u;
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x226dc4) {
            ctx->pc = 0x226D68u;
            goto label_226d68;
        }
    }
    ctx->pc = 0x226DCCu;
    // 0x226dcc: 0xc09bf82
    ctx->pc = 0x226DCCu;
    SET_GPR_U32(ctx, 31, 0x226DD4u);
    ctx->pc = 0x226DD0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x26FE08u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_game_cam_0x26fe08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226DD4u; }
    }
    if (ctx->pc != 0x226DD4u) { return; }
    ctx->pc = 0x226DD4u;
    // 0x226dd4: 0x3c020032
    ctx->pc = 0x226dd4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x226dd8: 0xc08dc66
    ctx->pc = 0x226DD8u;
    SET_GPR_U32(ctx, 31, 0x226DE0u);
    ctx->pc = 0x226DDCu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2048), GPR_U32(ctx, 0));
    ctx->pc = 0x237198u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetRightPath_0x237198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226DE0u; }
    }
    if (ctx->pc != 0x226DE0u) { return; }
    ctx->pc = 0x226DE0u;
    // 0x226de0: 0x10000006
    ctx->pc = 0x226DE0u;
    {
        const bool branch_taken_0x226de0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x226de0) {
            ctx->pc = 0x226DFCu;
            goto label_226dfc;
        }
    }
    ctx->pc = 0x226DE8u;
label_226de8:
    // 0x226de8: 0xc0a4600
    ctx->pc = 0x226DE8u;
    SET_GPR_U32(ctx, 31, 0x226DF0u);
    ctx->pc = 0x291800u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadStage_0x291800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226DF0u; }
    }
    if (ctx->pc != 0x226DF0u) { return; }
    ctx->pc = 0x226DF0u;
    // 0x226df0: 0x3c030035
    ctx->pc = 0x226df0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x226df4: 0x2402ffff
    ctx->pc = 0x226df4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x226df8: 0xac62f834
    ctx->pc = 0x226df8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965300), GPR_U32(ctx, 2));
label_226dfc:
    // 0x226dfc: 0xc097312
    ctx->pc = 0x226DFCu;
    SET_GPR_U32(ctx, 31, 0x226E04u);
    ctx->pc = 0x25CC48u;
    {
        const uint32_t __entryPc = ctx->pc;
        BGMusicStart_0x25cc48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226E04u; }
    }
    if (ctx->pc != 0x226E04u) { return; }
    ctx->pc = 0x226E04u;
    // 0x226e04: 0xc08ae76
    ctx->pc = 0x226E04u;
    SET_GPR_U32(ctx, 31, 0x226E0Cu);
    ctx->pc = 0x226E08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22B9D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetPlayerWindows_0x22b9d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226E0Cu; }
    }
    if (ctx->pc != 0x226E0Cu) { return; }
    ctx->pc = 0x226E0Cu;
    // 0x226e0c: 0xc0853e8
    ctx->pc = 0x226E0Cu;
    SET_GPR_U32(ctx, 31, 0x226E14u);
    ctx->pc = 0x226E10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x214FA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        StdCamInit_0x214fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226E14u; }
    }
    if (ctx->pc != 0x226E14u) { return; }
    ctx->pc = 0x226E14u;
    // 0x226e14: 0xc096d44
    ctx->pc = 0x226E14u;
    SET_GPR_U32(ctx, 31, 0x226E1Cu);
    ctx->pc = 0x25B510u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_items_0x25b510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226E1Cu; }
    }
    if (ctx->pc != 0x226E1Cu) { return; }
    ctx->pc = 0x226E1Cu;
    // 0x226e1c: 0xc08ed62
    ctx->pc = 0x226E1Cu;
    SET_GPR_U32(ctx, 31, 0x226E24u);
    ctx->pc = 0x23B588u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_enemies_0x23b588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226E24u; }
    }
    if (ctx->pc != 0x226E24u) { return; }
    ctx->pc = 0x226E24u;
    // 0x226e24: 0xc089292
    ctx->pc = 0x226E24u;
    SET_GPR_U32(ctx, 31, 0x226E2Cu);
    ctx->pc = 0x224A48u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_wave_timer_0x224a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226E2Cu; }
    }
    if (ctx->pc != 0x226E2Cu) { return; }
    ctx->pc = 0x226E2Cu;
    // 0x226e2c: 0xc089158
    ctx->pc = 0x226E2Cu;
    SET_GPR_U32(ctx, 31, 0x226E34u);
    ctx->pc = 0x224560u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_thermometer_0x224560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226E34u; }
    }
    if (ctx->pc != 0x226E34u) { return; }
    ctx->pc = 0x226E34u;
    // 0x226e34: 0xc09734e
    ctx->pc = 0x226E34u;
    SET_GPR_U32(ctx, 31, 0x226E3Cu);
    ctx->pc = 0x25CD38u;
    {
        const uint32_t __entryPc = ctx->pc;
        BGMusicUpdate_0x25cd38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226E3Cu; }
    }
    if (ctx->pc != 0x226E3Cu) { return; }
    ctx->pc = 0x226E3Cu;
    // 0x226e3c: 0x3c020034
    ctx->pc = 0x226e3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x226e40: 0x8c43e7f0
    ctx->pc = 0x226e40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
    // 0x226e44: 0x2402000c
    ctx->pc = 0x226e44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
    // 0x226e48: 0x10620003
    ctx->pc = 0x226E48u;
    {
        const bool branch_taken_0x226e48 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x226E4Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
        if (branch_taken_0x226e48) {
            ctx->pc = 0x226E58u;
            goto label_226e58;
        }
    }
    ctx->pc = 0x226E50u;
    // 0x226e50: 0x2402012c
    ctx->pc = 0x226e50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 300));
    // 0x226e54: 0xac62cb6c
    ctx->pc = 0x226e54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294953836), GPR_U32(ctx, 2));
label_226e58:
    // 0x226e58: 0x3c020034
    ctx->pc = 0x226e58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x226e5c: 0x8c43e7f0
    ctx->pc = 0x226e5cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
    // 0x226e60: 0x2402000d
    ctx->pc = 0x226e60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
    // 0x226e64: 0x14620045
    ctx->pc = 0x226E64u;
    {
        const bool branch_taken_0x226e64 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x226E68u;
        SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
        if (branch_taken_0x226e64) {
            ctx->pc = 0x226F7Cu;
            goto label_226f7c;
        }
    }
    ctx->pc = 0x226E6Cu;
    // 0x226e6c: 0x902d
    ctx->pc = 0x226e6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226e70: 0x3c020032
    ctx->pc = 0x226e70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x226e74: 0x24501bc0
    ctx->pc = 0x226e74u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x226e78: 0x24050001
    ctx->pc = 0x226e78u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x226e7c: 0x0
    ctx->pc = 0x226e7cu;
    // NOP
label_226e80:
    // 0x226e80: 0x8e0200fc
    ctx->pc = 0x226e80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x226e84: 0x54450039
    ctx->pc = 0x226E84u;
    {
        const bool branch_taken_0x226e84 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        if (branch_taken_0x226e84) {
            ctx->pc = 0x226E88u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x226F6Cu;
            goto label_226f6c;
        }
    }
    ctx->pc = 0x226E8Cu;
    // 0x226e8c: 0x26041a28
    ctx->pc = 0x226e8cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 6696));
    // 0x226e90: 0x2603099c
    ctx->pc = 0x226e90u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 2460));
    // 0x226e94: 0x641025
    ctx->pc = 0x226e94u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x226e98: 0x30420007
    ctx->pc = 0x226e98u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 7));
    // 0x226e9c: 0x10400019
    ctx->pc = 0x226E9Cu;
    {
        const bool branch_taken_0x226e9c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x226EA0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 6652));
        if (branch_taken_0x226e9c) {
            ctx->pc = 0x226F04u;
            goto label_226f04;
        }
    }
    ctx->pc = 0x226EA4u;
label_226ea4:
    // 0x226ea4: 0x68660007
    ctx->pc = 0x226ea4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x226ea8: 0x6c660000
    ctx->pc = 0x226ea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x226eac: 0x6867000f
    ctx->pc = 0x226eacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x226eb0: 0x6c670008
    ctx->pc = 0x226eb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x226eb4: 0x68680017
    ctx->pc = 0x226eb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x226eb8: 0x6c680010
    ctx->pc = 0x226eb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x226ebc: 0x6869001f
    ctx->pc = 0x226ebcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x226ec0: 0x6c690018
    ctx->pc = 0x226ec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x226ec4: 0xb0860007
    ctx->pc = 0x226ec4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x226ec8: 0xb4860000
    ctx->pc = 0x226ec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x226ecc: 0xb087000f
    ctx->pc = 0x226eccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x226ed0: 0xb4870008
    ctx->pc = 0x226ed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x226ed4: 0xb0880017
    ctx->pc = 0x226ed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x226ed8: 0xb4880010
    ctx->pc = 0x226ed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x226edc: 0xb089001f
    ctx->pc = 0x226edcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 9) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x226ee0: 0xb4890018
    ctx->pc = 0x226ee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 9) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x226ee4: 0x24630020
    ctx->pc = 0x226ee4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
    // 0x226ee8: 0x24840020
    ctx->pc = 0x226ee8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
    // 0x226eec: 0x0
    ctx->pc = 0x226eecu;
    // NOP
    // 0x226ef0: 0x0
    ctx->pc = 0x226ef0u;
    // NOP
    // 0x226ef4: 0x1462ffeb
    ctx->pc = 0x226EF4u;
    {
        const bool branch_taken_0x226ef4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x226ef4) {
            ctx->pc = 0x226EA4u;
            goto label_226ea4;
        }
    }
    ctx->pc = 0x226EFCu;
    // 0x226efc: 0x10000010
    ctx->pc = 0x226EFCu;
    {
        const bool branch_taken_0x226efc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x226efc) {
            ctx->pc = 0x226F40u;
            goto label_226f40;
        }
    }
    ctx->pc = 0x226F04u;
label_226f04:
    // 0x226f04: 0x24621060
    ctx->pc = 0x226f04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4192));
label_226f08:
    // 0x226f08: 0xdc660000
    ctx->pc = 0x226f08u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x226f0c: 0xdc670008
    ctx->pc = 0x226f0cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x226f10: 0xdc680010
    ctx->pc = 0x226f10u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x226f14: 0xdc690018
    ctx->pc = 0x226f14u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x226f18: 0xfc860000
    ctx->pc = 0x226f18u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
    // 0x226f1c: 0xfc870008
    ctx->pc = 0x226f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x226f20: 0xfc880010
    ctx->pc = 0x226f20u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 8));
    // 0x226f24: 0xfc890018
    ctx->pc = 0x226f24u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
    // 0x226f28: 0x24630020
    ctx->pc = 0x226f28u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
    // 0x226f2c: 0x24840020
    ctx->pc = 0x226f2cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
    // 0x226f30: 0x0
    ctx->pc = 0x226f30u;
    // NOP
    // 0x226f34: 0x0
    ctx->pc = 0x226f34u;
    // NOP
    // 0x226f38: 0x1462fff3
    ctx->pc = 0x226F38u;
    {
        const bool branch_taken_0x226f38 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x226f38) {
            ctx->pc = 0x226F08u;
            goto label_226f08;
        }
    }
    ctx->pc = 0x226F40u;
label_226f40:
    // 0x226f40: 0x68620007
    ctx->pc = 0x226f40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x226f44: 0x6c620000
    ctx->pc = 0x226f44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x226f48: 0x6866000f
    ctx->pc = 0x226f48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x226f4c: 0x6c660008
    ctx->pc = 0x226f4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x226f50: 0x8c670010
    ctx->pc = 0x226f50u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x226f54: 0xb0820007
    ctx->pc = 0x226f54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x226f58: 0xb4820000
    ctx->pc = 0x226f58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x226f5c: 0xb086000f
    ctx->pc = 0x226f5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x226f60: 0xb4860008
    ctx->pc = 0x226f60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x226f64: 0xac870010
    ctx->pc = 0x226f64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 7));
    // 0x226f68: 0x26520001
    ctx->pc = 0x226f68u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_226f6c:
    // 0x226f6c: 0x2a420004
    ctx->pc = 0x226f6cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 4));
    // 0x226f70: 0x1440ffc3
    ctx->pc = 0x226F70u;
    {
        const bool branch_taken_0x226f70 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x226F74u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 11008));
        if (branch_taken_0x226f70) {
            ctx->pc = 0x226E80u;
            goto label_226e80;
        }
    }
    ctx->pc = 0x226F78u;
    // 0x226f78: 0x3c030031
    ctx->pc = 0x226f78u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_226f7c:
    // 0x226f7c: 0x9462f1b4
    ctx->pc = 0x226f7cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294963636)));
    // 0x226f80: 0x2c421c20
    ctx->pc = 0x226f80u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 7200));
    // 0x226f84: 0x10400002
    ctx->pc = 0x226F84u;
    {
        const bool branch_taken_0x226f84 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x226F88u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7200));
        if (branch_taken_0x226f84) {
            ctx->pc = 0x226F90u;
            goto label_226f90;
        }
    }
    ctx->pc = 0x226F8Cu;
    // 0x226f8c: 0xa462f1b4
    ctx->pc = 0x226f8cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294963636), (uint16_t)GPR_U32(ctx, 2));
label_226f90:
    // 0x226f90: 0xdfbf00a0
    ctx->pc = 0x226f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x226f94: 0xdfbe0090
    ctx->pc = 0x226f94u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x226f98: 0xdfb70080
    ctx->pc = 0x226f98u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x226f9c: 0xdfb60070
    ctx->pc = 0x226f9cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x226fa0: 0xdfb50060
    ctx->pc = 0x226fa0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x226fa4: 0xdfb40050
    ctx->pc = 0x226fa4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x226fa8: 0xdfb30040
    ctx->pc = 0x226fa8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x226fac: 0xdfb20030
    ctx->pc = 0x226facu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x226fb0: 0xdfb10020
    ctx->pc = 0x226fb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x226fb4: 0xdfb00010
    ctx->pc = 0x226fb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226fb8: 0x3e00008
    ctx->pc = 0x226FB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226FBCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x226A54u: goto label_226a54;
            case 0x226B00u: goto label_226b00;
            case 0x226B30u: goto label_226b30;
            case 0x226B4Cu: goto label_226b4c;
            case 0x226BE0u: goto label_226be0;
            case 0x226BFCu: goto label_226bfc;
            case 0x226C14u: goto label_226c14;
            case 0x226C2Cu: goto label_226c2c;
            case 0x226C48u: goto label_226c48;
            case 0x226C78u: goto label_226c78;
            case 0x226D24u: goto label_226d24;
            case 0x226D68u: goto label_226d68;
            case 0x226D90u: goto label_226d90;
            case 0x226DA4u: goto label_226da4;
            case 0x226DBCu: goto label_226dbc;
            case 0x226DC0u: goto label_226dc0;
            case 0x226DE8u: goto label_226de8;
            case 0x226DFCu: goto label_226dfc;
            case 0x226E58u: goto label_226e58;
            case 0x226E80u: goto label_226e80;
            case 0x226EA4u: goto label_226ea4;
            case 0x226F04u: goto label_226f04;
            case 0x226F08u: goto label_226f08;
            case 0x226F40u: goto label_226f40;
            case 0x226F6Cu: goto label_226f6c;
            case 0x226F7Cu: goto label_226f7c;
            case 0x226F90u: goto label_226f90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x226FC0u;
}
