#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PreDispVamp__10PeopleTaskFv
// Address: 0x207950 - 0x208520
void PreDispVamp__10PeopleTaskFv_0x207950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PreDispVamp__10PeopleTaskFv");


    ctx->pc = 0x207950u;

label_207950:
    // 0x207950: 0x27bdff90
    ctx->pc = 0x207950u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
label_207954:
    // 0x207954: 0x7fbf0040
    ctx->pc = 0x207954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
label_207958:
    // 0x207958: 0x7fb20030
    ctx->pc = 0x207958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_20795c:
    // 0x20795c: 0x7fb10020
    ctx->pc = 0x20795cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_207960:
    // 0x207960: 0x7fb00010
    ctx->pc = 0x207960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_207964:
    // 0x207964: 0xe7b50004
    ctx->pc = 0x207964u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_207968:
    // 0x207968: 0x70809628
    ctx->pc = 0x207968u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_20796c:
    // 0x20796c: 0xc082b14
label_207970:
    if (ctx->pc == 0x207970u) {
        ctx->pc = 0x207970u;
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x207974u;
        goto label_207974;
    }
    ctx->pc = 0x20796Cu;
    SET_GPR_U32(ctx, 31, 0x207974u);
    ctx->pc = 0x207970u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->pc = 0x20AC50u;
    {
        const uint32_t __entryPc = ctx->pc;
        checkVampDamage__10PeopleTaskFv_0x20ac50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207974u; }
        else if (ctx->pc != 0x207974u) { ctx->pc = 0x207974u; }
    }
    if (ctx->pc != 0x207974u) { return; }
    ctx->pc = 0x207974u;
label_207974:
    // 0x207974: 0x8e43000c
    ctx->pc = 0x207974u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_207978:
    // 0x207978: 0x3c024000
    ctx->pc = 0x207978u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
label_20797c:
    // 0x20797c: 0x621024
    ctx->pc = 0x20797cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_207980:
    // 0x207980: 0x10400049
label_207984:
    if (ctx->pc == 0x207984u) {
        ctx->pc = 0x207984u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        ctx->pc = 0x207988u;
        goto label_207988;
    }
    ctx->pc = 0x207980u;
    {
        const bool branch_taken_0x207980 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x207984u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        if (branch_taken_0x207980) {
            ctx->pc = 0x207AA8u;
            goto label_207aa8;
        }
    }
    ctx->pc = 0x207988u;
label_207988:
    // 0x207988: 0xc082cd8
label_20798c:
    if (ctx->pc == 0x20798Cu) {
        ctx->pc = 0x207990u;
        goto label_207990;
    }
    ctx->pc = 0x207988u;
    SET_GPR_U32(ctx, 31, 0x207990u);
    ctx->pc = 0x20B360u;
    {
        const uint32_t __entryPc = ctx->pc;
        checkVampDamageMotEnd__10PeopleTaskFv_0x20b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207990u; }
        else if (ctx->pc != 0x207990u) { ctx->pc = 0x207990u; }
    }
    if (ctx->pc != 0x207990u) { return; }
    ctx->pc = 0x207990u;
label_207990:
    // 0x207990: 0x8e44000c
    ctx->pc = 0x207990u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_207994:
    // 0x207994: 0x3c024000
    ctx->pc = 0x207994u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
label_207998:
    // 0x207998: 0x821024
    ctx->pc = 0x207998u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_20799c:
    // 0x20799c: 0x14400042
label_2079a0:
    if (ctx->pc == 0x2079A0u) {
        ctx->pc = 0x2079A4u;
        goto label_2079a4;
    }
    ctx->pc = 0x20799Cu;
    {
        const bool branch_taken_0x20799c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x20799c) {
            ctx->pc = 0x207AA8u;
            goto label_207aa8;
        }
    }
    ctx->pc = 0x2079A4u;
label_2079a4:
    // 0x2079a4: 0x8e431db8
    ctx->pc = 0x2079a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 7608)));
label_2079a8:
    // 0x2079a8: 0x24020003
    ctx->pc = 0x2079a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_2079ac:
    // 0x2079ac: 0x1062003b
label_2079b0:
    if (ctx->pc == 0x2079B0u) {
        ctx->pc = 0x2079B0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)65527 << 16));
        ctx->pc = 0x2079B4u;
        goto label_2079b4;
    }
    ctx->pc = 0x2079ACu;
    {
        const bool branch_taken_0x2079ac = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2079B0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)65527 << 16));
        if (branch_taken_0x2079ac) {
            ctx->pc = 0x207A9Cu;
            goto label_207a9c;
        }
    }
    ctx->pc = 0x2079B4u;
label_2079b4:
    // 0x2079b4: 0x24020005
    ctx->pc = 0x2079b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
label_2079b8:
    // 0x2079b8: 0x10620011
label_2079bc:
    if (ctx->pc == 0x2079BCu) {
        ctx->pc = 0x2079BCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2079C0u;
        goto label_2079c0;
    }
    ctx->pc = 0x2079B8u;
    {
        const bool branch_taken_0x2079b8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2079BCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2079b8) {
            ctx->pc = 0x207A00u;
            goto label_207a00;
        }
    }
    ctx->pc = 0x2079C0u;
label_2079c0:
    // 0x2079c0: 0x1062000b
label_2079c4:
    if (ctx->pc == 0x2079C4u) {
        ctx->pc = 0x2079C4u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 4), 8192));
        ctx->pc = 0x2079C8u;
        goto label_2079c8;
    }
    ctx->pc = 0x2079C0u;
    {
        const bool branch_taken_0x2079c0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2079C4u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 4), 8192));
        if (branch_taken_0x2079c0) {
            ctx->pc = 0x2079F0u;
            goto label_2079f0;
        }
    }
    ctx->pc = 0x2079C8u;
label_2079c8:
    // 0x2079c8: 0x10600003
label_2079cc:
    if (ctx->pc == 0x2079CCu) {
        ctx->pc = 0x2079CCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
        ctx->pc = 0x2079D0u;
        goto label_2079d0;
    }
    ctx->pc = 0x2079C8u;
    {
        const bool branch_taken_0x2079c8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2079CCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
        if (branch_taken_0x2079c8) {
            ctx->pc = 0x2079D8u;
            goto label_2079d8;
        }
    }
    ctx->pc = 0x2079D0u;
label_2079d0:
    // 0x2079d0: 0x10000036
label_2079d4:
    if (ctx->pc == 0x2079D4u) {
        ctx->pc = 0x2079D4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->pc = 0x2079D8u;
        goto label_2079d8;
    }
    ctx->pc = 0x2079D0u;
    {
        const bool branch_taken_0x2079d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2079D4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 12)));
        if (branch_taken_0x2079d0) {
            ctx->pc = 0x207AACu;
            goto label_207aac;
        }
    }
    ctx->pc = 0x2079D8u;
label_2079d8:
    // 0x2079d8: 0xae421d78
    ctx->pc = 0x2079d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7544), GPR_U32(ctx, 2));
label_2079dc:
    // 0x2079dc: 0x8e43000c
    ctx->pc = 0x2079dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2079e0:
    // 0x2079e0: 0x3c021000
    ctx->pc = 0x2079e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
label_2079e4:
    // 0x2079e4: 0x621025
    ctx->pc = 0x2079e4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2079e8:
    // 0x2079e8: 0x1000002f
label_2079ec:
    if (ctx->pc == 0x2079ECu) {
        ctx->pc = 0x2079ECu;
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->pc = 0x2079F0u;
        goto label_2079f0;
    }
    ctx->pc = 0x2079E8u;
    {
        const bool branch_taken_0x2079e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2079ECu;
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x2079e8) {
            ctx->pc = 0x207AA8u;
            goto label_207aa8;
        }
    }
    ctx->pc = 0x2079F0u;
label_2079f0:
    // 0x2079f0: 0xae42000c
    ctx->pc = 0x2079f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_2079f4:
    // 0x2079f4: 0x3c024100
    ctx->pc = 0x2079f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16640 << 16));
label_2079f8:
    // 0x2079f8: 0x1000002b
label_2079fc:
    if (ctx->pc == 0x2079FCu) {
        ctx->pc = 0x2079FCu;
        WRITE32(ADD32(GPR_U32(ctx, 18), 7544), GPR_U32(ctx, 2));
        ctx->pc = 0x207A00u;
        goto label_207a00;
    }
    ctx->pc = 0x2079F8u;
    {
        const bool branch_taken_0x2079f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2079FCu;
        WRITE32(ADD32(GPR_U32(ctx, 18), 7544), GPR_U32(ctx, 2));
        if (branch_taken_0x2079f8) {
            ctx->pc = 0x207AA8u;
            goto label_207aa8;
        }
    }
    ctx->pc = 0x207A00u;
label_207a00:
    // 0x207a00: 0xc6411df8
    ctx->pc = 0x207a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 7672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_207a04:
    // 0x207a04: 0x3c0241f0
    ctx->pc = 0x207a04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16880 << 16));
label_207a08:
    // 0x207a08: 0x44820000
    ctx->pc = 0x207a08u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_207a0c:
    // 0x207a0c: 0x0
    ctx->pc = 0x207a0cu;
    // NOP
label_207a10:
    // 0x207a10: 0x46000836
    ctx->pc = 0x207a10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_207a14:
    // 0x207a14: 0x0
    ctx->pc = 0x207a14u;
    // NOP
label_207a18:
    // 0x207a18: 0x4501001c
label_207a1c:
    if (ctx->pc == 0x207A1Cu) {
        ctx->pc = 0x207A1Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 4), 8192));
        ctx->pc = 0x207A20u;
        goto label_207a20;
    }
    ctx->pc = 0x207A18u;
    {
        const bool branch_taken_0x207a18 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x207A1Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 4), 8192));
        if (branch_taken_0x207a18) {
            ctx->pc = 0x207A8Cu;
            goto label_207a8c;
        }
    }
    ctx->pc = 0x207A20u;
label_207a20:
    // 0x207a20: 0x2402dfff
    ctx->pc = 0x207a20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294959103));
label_207a24:
    // 0x207a24: 0x821024
    ctx->pc = 0x207a24u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_207a28:
    // 0x207a28: 0xae42000c
    ctx->pc = 0x207a28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_207a2c:
    // 0x207a2c: 0x8e431db0
    ctx->pc = 0x207a2cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 7600)));
label_207a30:
    // 0x207a30: 0x3c020027
    ctx->pc = 0x207a30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
label_207a34:
    // 0x207a34: 0x244229e8
    ctx->pc = 0x207a34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10728));
label_207a38:
    // 0x207a38: 0x31880
    ctx->pc = 0x207a38u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_207a3c:
    // 0x207a3c: 0x431021
    ctx->pc = 0x207a3cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_207a40:
    // 0x207a40: 0x8c450000
    ctx->pc = 0x207a40u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_207a44:
    // 0x207a44: 0xc0829ac
label_207a48:
    if (ctx->pc == 0x207A48u) {
        ctx->pc = 0x207A48u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        ctx->pc = 0x207A4Cu;
        goto label_207a4c;
    }
    ctx->pc = 0x207A44u;
    SET_GPR_U32(ctx, 31, 0x207A4Cu);
    ctx->pc = 0x207A48u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x20A6B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        motionSelect__10PeopleTaskFPi_0x20a6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207A4Cu; }
        else if (ctx->pc != 0x207A4Cu) { ctx->pc = 0x207A4Cu; }
    }
    if (ctx->pc != 0x207A4Cu) { return; }
    ctx->pc = 0x207A4Cu;
label_207a4c:
    // 0x207a4c: 0x2143c
    ctx->pc = 0x207a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_207a50:
    // 0x207a50: 0x2143f
    ctx->pc = 0x207a50u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_207a54:
    // 0x207a54: 0xae421dcc
    ctx->pc = 0x207a54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7628), GPR_U32(ctx, 2));
label_207a58:
    // 0x207a58: 0x2404ffff
    ctx->pc = 0x207a58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
label_207a5c:
    // 0x207a5c: 0xae441dd0
    ctx->pc = 0x207a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7632), GPR_U32(ctx, 4));
label_207a60:
    // 0x207a60: 0x3c023f80
    ctx->pc = 0x207a60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
label_207a64:
    // 0x207a64: 0xae421d78
    ctx->pc = 0x207a64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7544), GPR_U32(ctx, 2));
label_207a68:
    // 0x207a68: 0xae401db8
    ctx->pc = 0x207a68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7608), GPR_U32(ctx, 0));
label_207a6c:
    // 0x207a6c: 0x82421e00
    ctx->pc = 0x207a6cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 7680)));
label_207a70:
    // 0x207a70: 0x1044000d
label_207a74:
    if (ctx->pc == 0x207A74u) {
        ctx->pc = 0x207A74u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x207A78u;
        goto label_207a78;
    }
    ctx->pc = 0x207A70u;
    {
        const bool branch_taken_0x207a70 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        ctx->pc = 0x207A74u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
        if (branch_taken_0x207a70) {
            ctx->pc = 0x207AA8u;
            goto label_207aa8;
        }
    }
    ctx->pc = 0x207A78u;
label_207a78:
    // 0x207a78: 0x27828b60
    ctx->pc = 0x207a78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 28), 4294937440));
label_207a7c:
    // 0x207a7c: 0x431021
    ctx->pc = 0x207a7cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_207a80:
    // 0x207a80: 0xac400000
    ctx->pc = 0x207a80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_207a84:
    // 0x207a84: 0x10000008
label_207a88:
    if (ctx->pc == 0x207A88u) {
        ctx->pc = 0x207A88u;
        WRITE8(ADD32(GPR_U32(ctx, 18), 7680), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x207A8Cu;
        goto label_207a8c;
    }
    ctx->pc = 0x207A84u;
    {
        const bool branch_taken_0x207a84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x207A88u;
        WRITE8(ADD32(GPR_U32(ctx, 18), 7680), (uint8_t)GPR_U32(ctx, 4));
        if (branch_taken_0x207a84) {
            ctx->pc = 0x207AA8u;
            goto label_207aa8;
        }
    }
    ctx->pc = 0x207A8Cu;
label_207a8c:
    // 0x207a8c: 0xae42000c
    ctx->pc = 0x207a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_207a90:
    // 0x207a90: 0x3c024100
    ctx->pc = 0x207a90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16640 << 16));
label_207a94:
    // 0x207a94: 0x10000004
label_207a98:
    if (ctx->pc == 0x207A98u) {
        ctx->pc = 0x207A98u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 7544), GPR_U32(ctx, 2));
        ctx->pc = 0x207A9Cu;
        goto label_207a9c;
    }
    ctx->pc = 0x207A94u;
    {
        const bool branch_taken_0x207a94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x207A98u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 7544), GPR_U32(ctx, 2));
        if (branch_taken_0x207a94) {
            ctx->pc = 0x207AA8u;
            goto label_207aa8;
        }
    }
    ctx->pc = 0x207A9Cu;
label_207a9c:
    // 0x207a9c: 0x3442ffff
    ctx->pc = 0x207a9cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
label_207aa0:
    // 0x207aa0: 0x821024
    ctx->pc = 0x207aa0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_207aa4:
    // 0x207aa4: 0xae42000c
    ctx->pc = 0x207aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_207aa8:
    // 0x207aa8: 0x8e44000c
    ctx->pc = 0x207aa8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_207aac:
    // 0x207aac: 0x3c020400
    ctx->pc = 0x207aacu;
    SET_GPR_U32(ctx, 2, ((uint32_t)1024 << 16));
label_207ab0:
    // 0x207ab0: 0x821024
    ctx->pc = 0x207ab0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_207ab4:
    // 0x207ab4: 0x10400041
label_207ab8:
    if (ctx->pc == 0x207AB8u) {
        ctx->pc = 0x207AB8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
        ctx->pc = 0x207ABCu;
        goto label_207abc;
    }
    ctx->pc = 0x207AB4u;
    {
        const bool branch_taken_0x207ab4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x207AB8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
        if (branch_taken_0x207ab4) {
            ctx->pc = 0x207BBCu;
            goto label_207bbc;
        }
    }
    ctx->pc = 0x207ABCu;
label_207abc:
    // 0x207abc: 0x8f848c48
    ctx->pc = 0x207abcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
label_207ac0:
    // 0x207ac0: 0x70002e28
    ctx->pc = 0x207ac0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_207ac4:
    // 0x207ac4: 0xc072658
label_207ac8:
    if (ctx->pc == 0x207AC8u) {
        ctx->pc = 0x207AC8u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x207ACCu;
        goto label_207acc;
    }
    ctx->pc = 0x207AC4u;
    SET_GPR_U32(ctx, 31, 0x207ACCu);
    ctx->pc = 0x207AC8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1C9960u;
    {
        const uint32_t __entryPc = ctx->pc;
        chgCafsIdx__10CameraTaskFii_0x1c9960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207ACCu; }
        else if (ctx->pc != 0x207ACCu) { ctx->pc = 0x207ACCu; }
    }
    if (ctx->pc != 0x207ACCu) { return; }
    ctx->pc = 0x207ACCu;
label_207acc:
    // 0x207acc: 0x8e44000c
    ctx->pc = 0x207accu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_207ad0:
    // 0x207ad0: 0x3c020008
    ctx->pc = 0x207ad0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)8 << 16));
label_207ad4:
    // 0x207ad4: 0x34430100
    ctx->pc = 0x207ad4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), 256));
label_207ad8:
    // 0x207ad8: 0x24020002
    ctx->pc = 0x207ad8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_207adc:
    // 0x207adc: 0x831825
    ctx->pc = 0x207adcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_207ae0:
    // 0x207ae0: 0xae43000c
    ctx->pc = 0x207ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
label_207ae4:
    // 0x207ae4: 0x8e431db0
    ctx->pc = 0x207ae4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 7600)));
label_207ae8:
    // 0x207ae8: 0x1062001c
label_207aec:
    if (ctx->pc == 0x207AECu) {
        ctx->pc = 0x207AECu;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        ctx->pc = 0x207AF0u;
        goto label_207af0;
    }
    ctx->pc = 0x207AE8u;
    {
        const bool branch_taken_0x207ae8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x207AECu;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        if (branch_taken_0x207ae8) {
            ctx->pc = 0x207B5Cu;
            goto label_207b5c;
        }
    }
    ctx->pc = 0x207AF0u;
label_207af0:
    // 0x207af0: 0x24020001
    ctx->pc = 0x207af0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_207af4:
    // 0x207af4: 0x1062000f
label_207af8:
    if (ctx->pc == 0x207AF8u) {
        ctx->pc = 0x207AF8u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        ctx->pc = 0x207AFCu;
        goto label_207afc;
    }
    ctx->pc = 0x207AF4u;
    {
        const bool branch_taken_0x207af4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x207AF8u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        if (branch_taken_0x207af4) {
            ctx->pc = 0x207B34u;
            goto label_207b34;
        }
    }
    ctx->pc = 0x207AFCu;
label_207afc:
    // 0x207afc: 0x10600003
label_207b00:
    if (ctx->pc == 0x207B00u) {
        ctx->pc = 0x207B00u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        ctx->pc = 0x207B04u;
        goto label_207b04;
    }
    ctx->pc = 0x207AFCu;
    {
        const bool branch_taken_0x207afc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x207B00u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        if (branch_taken_0x207afc) {
            ctx->pc = 0x207B0Cu;
            goto label_207b0c;
        }
    }
    ctx->pc = 0x207B04u;
label_207b04:
    // 0x207b04: 0x1000001e
label_207b08:
    if (ctx->pc == 0x207B08u) {
        ctx->pc = 0x207B08u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x207B0Cu;
        goto label_207b0c;
    }
    ctx->pc = 0x207B04u;
    {
        const bool branch_taken_0x207b04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x207B08u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x207b04) {
            ctx->pc = 0x207B80u;
            goto label_207b80;
        }
    }
    ctx->pc = 0x207B0Cu;
label_207b0c:
    // 0x207b0c: 0x12400002
label_207b10:
    if (ctx->pc == 0x207B10u) {
        ctx->pc = 0x207B10u;
        SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
        ctx->pc = 0x207B14u;
        goto label_207b14;
    }
    ctx->pc = 0x207B0Cu;
    {
        const bool branch_taken_0x207b0c = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x207B10u;
        SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
        if (branch_taken_0x207b0c) {
            ctx->pc = 0x207B18u;
            goto label_207b18;
        }
    }
    ctx->pc = 0x207B14u;
label_207b14:
    // 0x207b14: 0x24a50030
    ctx->pc = 0x207b14u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 48));
label_207b18:
    // 0x207b18: 0x2407000a
    ctx->pc = 0x207b18u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 10));
label_207b1c:
    // 0x207b1c: 0x2444e8e0
    ctx->pc = 0x207b1cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294961376));
label_207b20:
    // 0x207b20: 0x240617db
    ctx->pc = 0x207b20u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6107));
label_207b24:
    // 0x207b24: 0xc07eabc
label_207b28:
    if (ctx->pc == 0x207B28u) {
        ctx->pc = 0x207B28u;
        SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
        ctx->pc = 0x207B2Cu;
        goto label_207b2c;
    }
    ctx->pc = 0x207B24u;
    SET_GPR_U32(ctx, 31, 0x207B2Cu);
    ctx->pc = 0x207B28u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1FAAF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        motSupplement__12BodyMgrClassFP10MotObjTaskiii_0x1faaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207B2Cu; }
        else if (ctx->pc != 0x207B2Cu) { ctx->pc = 0x207B2Cu; }
    }
    if (ctx->pc != 0x207B2Cu) { return; }
    ctx->pc = 0x207B2Cu;
label_207b2c:
    // 0x207b2c: 0x10000013
label_207b30:
    if (ctx->pc == 0x207B30u) {
        ctx->pc = 0x207B34u;
        goto label_207b34;
    }
    ctx->pc = 0x207B2Cu;
    {
        const bool branch_taken_0x207b2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x207b2c) {
            ctx->pc = 0x207B7Cu;
            goto label_207b7c;
        }
    }
    ctx->pc = 0x207B34u;
label_207b34:
    // 0x207b34: 0x12400002
label_207b38:
    if (ctx->pc == 0x207B38u) {
        ctx->pc = 0x207B38u;
        SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
        ctx->pc = 0x207B3Cu;
        goto label_207b3c;
    }
    ctx->pc = 0x207B34u;
    {
        const bool branch_taken_0x207b34 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x207B38u;
        SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
        if (branch_taken_0x207b34) {
            ctx->pc = 0x207B40u;
            goto label_207b40;
        }
    }
    ctx->pc = 0x207B3Cu;
label_207b3c:
    // 0x207b3c: 0x24a50030
    ctx->pc = 0x207b3cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 48));
label_207b40:
    // 0x207b40: 0x2407000a
    ctx->pc = 0x207b40u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 10));
label_207b44:
    // 0x207b44: 0x2444e8e0
    ctx->pc = 0x207b44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294961376));
label_207b48:
    // 0x207b48: 0x24061849
    ctx->pc = 0x207b48u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6217));
label_207b4c:
    // 0x207b4c: 0xc07eabc
label_207b50:
    if (ctx->pc == 0x207B50u) {
        ctx->pc = 0x207B50u;
        SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
        ctx->pc = 0x207B54u;
        goto label_207b54;
    }
    ctx->pc = 0x207B4Cu;
    SET_GPR_U32(ctx, 31, 0x207B54u);
    ctx->pc = 0x207B50u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1FAAF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        motSupplement__12BodyMgrClassFP10MotObjTaskiii_0x1faaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207B54u; }
        else if (ctx->pc != 0x207B54u) { ctx->pc = 0x207B54u; }
    }
    if (ctx->pc != 0x207B54u) { return; }
    ctx->pc = 0x207B54u;
label_207b54:
    // 0x207b54: 0x10000009
label_207b58:
    if (ctx->pc == 0x207B58u) {
        ctx->pc = 0x207B5Cu;
        goto label_207b5c;
    }
    ctx->pc = 0x207B54u;
    {
        const bool branch_taken_0x207b54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x207b54) {
            ctx->pc = 0x207B7Cu;
            goto label_207b7c;
        }
    }
    ctx->pc = 0x207B5Cu;
label_207b5c:
    // 0x207b5c: 0x12400002
label_207b60:
    if (ctx->pc == 0x207B60u) {
        ctx->pc = 0x207B60u;
        SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
        ctx->pc = 0x207B64u;
        goto label_207b64;
    }
    ctx->pc = 0x207B5Cu;
    {
        const bool branch_taken_0x207b5c = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x207B60u;
        SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
        if (branch_taken_0x207b5c) {
            ctx->pc = 0x207B68u;
            goto label_207b68;
        }
    }
    ctx->pc = 0x207B64u;
label_207b64:
    // 0x207b64: 0x24a50030
    ctx->pc = 0x207b64u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 48));
label_207b68:
    // 0x207b68: 0x2407000a
    ctx->pc = 0x207b68u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 10));
label_207b6c:
    // 0x207b6c: 0x2444e8e0
    ctx->pc = 0x207b6cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294961376));
label_207b70:
    // 0x207b70: 0x24061895
    ctx->pc = 0x207b70u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6293));
label_207b74:
    // 0x207b74: 0xc07eabc
label_207b78:
    if (ctx->pc == 0x207B78u) {
        ctx->pc = 0x207B78u;
        SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
        ctx->pc = 0x207B7Cu;
        goto label_207b7c;
    }
    ctx->pc = 0x207B74u;
    SET_GPR_U32(ctx, 31, 0x207B7Cu);
    ctx->pc = 0x207B78u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1FAAF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        motSupplement__12BodyMgrClassFP10MotObjTaskiii_0x1faaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207B7Cu; }
        else if (ctx->pc != 0x207B7Cu) { ctx->pc = 0x207B7Cu; }
    }
    if (ctx->pc != 0x207B7Cu) { return; }
    ctx->pc = 0x207B7Cu;
label_207b7c:
    // 0x207b7c: 0x24020001
    ctx->pc = 0x207b7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_207b80:
    // 0x207b80: 0xae421dac
    ctx->pc = 0x207b80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7596), GPR_U32(ctx, 2));
label_207b84:
    // 0x207b84: 0x3c020027
    ctx->pc = 0x207b84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
label_207b88:
    // 0x207b88: 0xae401dd0
    ctx->pc = 0x207b88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7632), GPR_U32(ctx, 0));
label_207b8c:
    // 0x207b8c: 0x24422ec8
    ctx->pc = 0x207b8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11976));
label_207b90:
    // 0x207b90: 0x8c450008
    ctx->pc = 0x207b90u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_207b94:
    // 0x207b94: 0x8e441d70
    ctx->pc = 0x207b94u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 7536)));
label_207b98:
    // 0x207b98: 0xc068fd8
label_207b9c:
    if (ctx->pc == 0x207B9Cu) {
        ctx->pc = 0x207B9Cu;
        SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        ctx->pc = 0x207BA0u;
        goto label_207ba0;
    }
    ctx->pc = 0x207B98u;
    SET_GPR_U32(ctx, 31, 0x207BA0u);
    ctx->pc = 0x207B9Cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A3F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        changeExec__11SystemTask2FPFv_vPv_0x1a3f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207BA0u; }
        else if (ctx->pc != 0x207BA0u) { ctx->pc = 0x207BA0u; }
    }
    if (ctx->pc != 0x207BA0u) { return; }
    ctx->pc = 0x207BA0u;
label_207ba0:
    // 0x207ba0: 0x87838d74
    ctx->pc = 0x207ba0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937972)));
label_207ba4:
    // 0x207ba4: 0x3c024278
    ctx->pc = 0x207ba4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17016 << 16));
label_207ba8:
    // 0x207ba8: 0x2463ffff
    ctx->pc = 0x207ba8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
label_207bac:
    // 0x207bac: 0xa7838d74
    ctx->pc = 0x207bacu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937972), (uint16_t)GPR_U32(ctx, 3));
label_207bb0:
    // 0x207bb0: 0xae421d78
    ctx->pc = 0x207bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7544), GPR_U32(ctx, 2));
label_207bb4:
    // 0x207bb4: 0x10000239
label_207bb8:
    if (ctx->pc == 0x207BB8u) {
        ctx->pc = 0x207BB8u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 7608), GPR_U32(ctx, 0));
        ctx->pc = 0x207BBCu;
        goto label_207bbc;
    }
    ctx->pc = 0x207BB4u;
    {
        const bool branch_taken_0x207bb4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x207BB8u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 7608), GPR_U32(ctx, 0));
        if (branch_taken_0x207bb4) {
            ctx->pc = 0x20849Cu;
            goto label_20849c;
        }
    }
    ctx->pc = 0x207BBCu;
label_207bbc:
    // 0x207bbc: 0x821024
    ctx->pc = 0x207bbcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_207bc0:
    // 0x207bc0: 0x10400004
label_207bc4:
    if (ctx->pc == 0x207BC4u) {
        ctx->pc = 0x207BC4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
        ctx->pc = 0x207BC8u;
        goto label_207bc8;
    }
    ctx->pc = 0x207BC0u;
    {
        const bool branch_taken_0x207bc0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x207BC4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
        if (branch_taken_0x207bc0) {
            ctx->pc = 0x207BD4u;
            goto label_207bd4;
        }
    }
    ctx->pc = 0x207BC8u;
label_207bc8:
    // 0x207bc8: 0x821024
    ctx->pc = 0x207bc8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_207bcc:
    // 0x207bcc: 0x10400233
label_207bd0:
    if (ctx->pc == 0x207BD0u) {
        ctx->pc = 0x207BD4u;
        goto label_207bd4;
    }
    ctx->pc = 0x207BCCu;
    {
        const bool branch_taken_0x207bcc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x207bcc) {
            ctx->pc = 0x20849Cu;
            goto label_20849c;
        }
    }
    ctx->pc = 0x207BD4u;
label_207bd4:
    // 0x207bd4: 0x8e421db8
    ctx->pc = 0x207bd4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 7608)));
label_207bd8:
    // 0x207bd8: 0x2c410006
    ctx->pc = 0x207bd8u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 2), 6));
label_207bdc:
    // 0x207bdc: 0x1020021f
label_207be0:
    if (ctx->pc == 0x207BE0u) {
        ctx->pc = 0x207BE0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
        ctx->pc = 0x207BE4u;
        goto label_207be4;
    }
    ctx->pc = 0x207BDCu;
    {
        const bool branch_taken_0x207bdc = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x207BE0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
        if (branch_taken_0x207bdc) {
            ctx->pc = 0x20845Cu;
            goto label_20845c;
        }
    }
    ctx->pc = 0x207BE4u;
label_207be4:
    // 0x207be4: 0x21080
    ctx->pc = 0x207be4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_207be8:
    // 0x207be8: 0x246303e0
    ctx->pc = 0x207be8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 992));
label_207bec:
    // 0x207bec: 0x431021
    ctx->pc = 0x207becu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_207bf0:
    // 0x207bf0: 0x8c420000
    ctx->pc = 0x207bf0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_207bf4:
    // 0x207bf4: 0x400008
label_207bf8:
    if (ctx->pc == 0x207BF8u) {
        ctx->pc = 0x207BFCu;
        goto label_207bfc;
    }
    ctx->pc = 0x207BF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x207950u: goto label_207950;
            case 0x207954u: goto label_207954;
            case 0x207958u: goto label_207958;
            case 0x20795Cu: goto label_20795c;
            case 0x207960u: goto label_207960;
            case 0x207964u: goto label_207964;
            case 0x207968u: goto label_207968;
            case 0x20796Cu: goto label_20796c;
            case 0x207970u: goto label_207970;
            case 0x207974u: goto label_207974;
            case 0x207978u: goto label_207978;
            case 0x20797Cu: goto label_20797c;
            case 0x207980u: goto label_207980;
            case 0x207984u: goto label_207984;
            case 0x207988u: goto label_207988;
            case 0x20798Cu: goto label_20798c;
            case 0x207990u: goto label_207990;
            case 0x207994u: goto label_207994;
            case 0x207998u: goto label_207998;
            case 0x20799Cu: goto label_20799c;
            case 0x2079A0u: goto label_2079a0;
            case 0x2079A4u: goto label_2079a4;
            case 0x2079A8u: goto label_2079a8;
            case 0x2079ACu: goto label_2079ac;
            case 0x2079B0u: goto label_2079b0;
            case 0x2079B4u: goto label_2079b4;
            case 0x2079B8u: goto label_2079b8;
            case 0x2079BCu: goto label_2079bc;
            case 0x2079C0u: goto label_2079c0;
            case 0x2079C4u: goto label_2079c4;
            case 0x2079C8u: goto label_2079c8;
            case 0x2079CCu: goto label_2079cc;
            case 0x2079D0u: goto label_2079d0;
            case 0x2079D4u: goto label_2079d4;
            case 0x2079D8u: goto label_2079d8;
            case 0x2079DCu: goto label_2079dc;
            case 0x2079E0u: goto label_2079e0;
            case 0x2079E4u: goto label_2079e4;
            case 0x2079E8u: goto label_2079e8;
            case 0x2079ECu: goto label_2079ec;
            case 0x2079F0u: goto label_2079f0;
            case 0x2079F4u: goto label_2079f4;
            case 0x2079F8u: goto label_2079f8;
            case 0x2079FCu: goto label_2079fc;
            case 0x207A00u: goto label_207a00;
            case 0x207A04u: goto label_207a04;
            case 0x207A08u: goto label_207a08;
            case 0x207A0Cu: goto label_207a0c;
            case 0x207A10u: goto label_207a10;
            case 0x207A14u: goto label_207a14;
            case 0x207A18u: goto label_207a18;
            case 0x207A1Cu: goto label_207a1c;
            case 0x207A20u: goto label_207a20;
            case 0x207A24u: goto label_207a24;
            case 0x207A28u: goto label_207a28;
            case 0x207A2Cu: goto label_207a2c;
            case 0x207A30u: goto label_207a30;
            case 0x207A34u: goto label_207a34;
            case 0x207A38u: goto label_207a38;
            case 0x207A3Cu: goto label_207a3c;
            case 0x207A40u: goto label_207a40;
            case 0x207A44u: goto label_207a44;
            case 0x207A48u: goto label_207a48;
            case 0x207A4Cu: goto label_207a4c;
            case 0x207A50u: goto label_207a50;
            case 0x207A54u: goto label_207a54;
            case 0x207A58u: goto label_207a58;
            case 0x207A5Cu: goto label_207a5c;
            case 0x207A60u: goto label_207a60;
            case 0x207A64u: goto label_207a64;
            case 0x207A68u: goto label_207a68;
            case 0x207A6Cu: goto label_207a6c;
            case 0x207A70u: goto label_207a70;
            case 0x207A74u: goto label_207a74;
            case 0x207A78u: goto label_207a78;
            case 0x207A7Cu: goto label_207a7c;
            case 0x207A80u: goto label_207a80;
            case 0x207A84u: goto label_207a84;
            case 0x207A88u: goto label_207a88;
            case 0x207A8Cu: goto label_207a8c;
            case 0x207A90u: goto label_207a90;
            case 0x207A94u: goto label_207a94;
            case 0x207A98u: goto label_207a98;
            case 0x207A9Cu: goto label_207a9c;
            case 0x207AA0u: goto label_207aa0;
            case 0x207AA4u: goto label_207aa4;
            case 0x207AA8u: goto label_207aa8;
            case 0x207AACu: goto label_207aac;
            case 0x207AB0u: goto label_207ab0;
            case 0x207AB4u: goto label_207ab4;
            case 0x207AB8u: goto label_207ab8;
            case 0x207ABCu: goto label_207abc;
            case 0x207AC0u: goto label_207ac0;
            case 0x207AC4u: goto label_207ac4;
            case 0x207AC8u: goto label_207ac8;
            case 0x207ACCu: goto label_207acc;
            case 0x207AD0u: goto label_207ad0;
            case 0x207AD4u: goto label_207ad4;
            case 0x207AD8u: goto label_207ad8;
            case 0x207ADCu: goto label_207adc;
            case 0x207AE0u: goto label_207ae0;
            case 0x207AE4u: goto label_207ae4;
            case 0x207AE8u: goto label_207ae8;
            case 0x207AECu: goto label_207aec;
            case 0x207AF0u: goto label_207af0;
            case 0x207AF4u: goto label_207af4;
            case 0x207AF8u: goto label_207af8;
            case 0x207AFCu: goto label_207afc;
            case 0x207B00u: goto label_207b00;
            case 0x207B04u: goto label_207b04;
            case 0x207B08u: goto label_207b08;
            case 0x207B0Cu: goto label_207b0c;
            case 0x207B10u: goto label_207b10;
            case 0x207B14u: goto label_207b14;
            case 0x207B18u: goto label_207b18;
            case 0x207B1Cu: goto label_207b1c;
            case 0x207B20u: goto label_207b20;
            case 0x207B24u: goto label_207b24;
            case 0x207B28u: goto label_207b28;
            case 0x207B2Cu: goto label_207b2c;
            case 0x207B30u: goto label_207b30;
            case 0x207B34u: goto label_207b34;
            case 0x207B38u: goto label_207b38;
            case 0x207B3Cu: goto label_207b3c;
            case 0x207B40u: goto label_207b40;
            case 0x207B44u: goto label_207b44;
            case 0x207B48u: goto label_207b48;
            case 0x207B4Cu: goto label_207b4c;
            case 0x207B50u: goto label_207b50;
            case 0x207B54u: goto label_207b54;
            case 0x207B58u: goto label_207b58;
            case 0x207B5Cu: goto label_207b5c;
            case 0x207B60u: goto label_207b60;
            case 0x207B64u: goto label_207b64;
            case 0x207B68u: goto label_207b68;
            case 0x207B6Cu: goto label_207b6c;
            case 0x207B70u: goto label_207b70;
            case 0x207B74u: goto label_207b74;
            case 0x207B78u: goto label_207b78;
            case 0x207B7Cu: goto label_207b7c;
            case 0x207B80u: goto label_207b80;
            case 0x207B84u: goto label_207b84;
            case 0x207B88u: goto label_207b88;
            case 0x207B8Cu: goto label_207b8c;
            case 0x207B90u: goto label_207b90;
            case 0x207B94u: goto label_207b94;
            case 0x207B98u: goto label_207b98;
            case 0x207B9Cu: goto label_207b9c;
            case 0x207BA0u: goto label_207ba0;
            case 0x207BA4u: goto label_207ba4;
            case 0x207BA8u: goto label_207ba8;
            case 0x207BACu: goto label_207bac;
            case 0x207BB0u: goto label_207bb0;
            case 0x207BB4u: goto label_207bb4;
            case 0x207BB8u: goto label_207bb8;
            case 0x207BBCu: goto label_207bbc;
            case 0x207BC0u: goto label_207bc0;
            case 0x207BC4u: goto label_207bc4;
            case 0x207BC8u: goto label_207bc8;
            case 0x207BCCu: goto label_207bcc;
            case 0x207BD0u: goto label_207bd0;
            case 0x207BD4u: goto label_207bd4;
            case 0x207BD8u: goto label_207bd8;
            case 0x207BDCu: goto label_207bdc;
            case 0x207BE0u: goto label_207be0;
            case 0x207BE4u: goto label_207be4;
            case 0x207BE8u: goto label_207be8;
            case 0x207BECu: goto label_207bec;
            case 0x207BF0u: goto label_207bf0;
            case 0x207BF4u: goto label_207bf4;
            case 0x207BF8u: goto label_207bf8;
            case 0x207BFCu: goto label_207bfc;
            case 0x207C00u: goto label_207c00;
            case 0x207C04u: goto label_207c04;
            case 0x207C08u: goto label_207c08;
            case 0x207C0Cu: goto label_207c0c;
            case 0x207C10u: goto label_207c10;
            case 0x207C14u: goto label_207c14;
            case 0x207C18u: goto label_207c18;
            case 0x207C1Cu: goto label_207c1c;
            case 0x207C20u: goto label_207c20;
            case 0x207C24u: goto label_207c24;
            case 0x207C28u: goto label_207c28;
            case 0x207C2Cu: goto label_207c2c;
            case 0x207C30u: goto label_207c30;
            case 0x207C34u: goto label_207c34;
            case 0x207C38u: goto label_207c38;
            case 0x207C3Cu: goto label_207c3c;
            case 0x207C40u: goto label_207c40;
            case 0x207C44u: goto label_207c44;
            case 0x207C48u: goto label_207c48;
            case 0x207C4Cu: goto label_207c4c;
            case 0x207C50u: goto label_207c50;
            case 0x207C54u: goto label_207c54;
            case 0x207C58u: goto label_207c58;
            case 0x207C5Cu: goto label_207c5c;
            case 0x207C60u: goto label_207c60;
            case 0x207C64u: goto label_207c64;
            case 0x207C68u: goto label_207c68;
            case 0x207C6Cu: goto label_207c6c;
            case 0x207C70u: goto label_207c70;
            case 0x207C74u: goto label_207c74;
            case 0x207C78u: goto label_207c78;
            case 0x207C7Cu: goto label_207c7c;
            case 0x207C80u: goto label_207c80;
            case 0x207C84u: goto label_207c84;
            case 0x207C88u: goto label_207c88;
            case 0x207C8Cu: goto label_207c8c;
            case 0x207C90u: goto label_207c90;
            case 0x207C94u: goto label_207c94;
            case 0x207C98u: goto label_207c98;
            case 0x207C9Cu: goto label_207c9c;
            case 0x207CA0u: goto label_207ca0;
            case 0x207CA4u: goto label_207ca4;
            case 0x207CA8u: goto label_207ca8;
            case 0x207CACu: goto label_207cac;
            case 0x207CB0u: goto label_207cb0;
            case 0x207CB4u: goto label_207cb4;
            case 0x207CB8u: goto label_207cb8;
            case 0x207CBCu: goto label_207cbc;
            case 0x207CC0u: goto label_207cc0;
            case 0x207CC4u: goto label_207cc4;
            case 0x207CC8u: goto label_207cc8;
            case 0x207CCCu: goto label_207ccc;
            case 0x207CD0u: goto label_207cd0;
            case 0x207CD4u: goto label_207cd4;
            case 0x207CD8u: goto label_207cd8;
            case 0x207CDCu: goto label_207cdc;
            case 0x207CE0u: goto label_207ce0;
            case 0x207CE4u: goto label_207ce4;
            case 0x207CE8u: goto label_207ce8;
            case 0x207CECu: goto label_207cec;
            case 0x207CF0u: goto label_207cf0;
            case 0x207CF4u: goto label_207cf4;
            case 0x207CF8u: goto label_207cf8;
            case 0x207CFCu: goto label_207cfc;
            case 0x207D00u: goto label_207d00;
            case 0x207D04u: goto label_207d04;
            case 0x207D08u: goto label_207d08;
            case 0x207D0Cu: goto label_207d0c;
            case 0x207D10u: goto label_207d10;
            case 0x207D14u: goto label_207d14;
            case 0x207D18u: goto label_207d18;
            case 0x207D1Cu: goto label_207d1c;
            case 0x207D20u: goto label_207d20;
            case 0x207D24u: goto label_207d24;
            case 0x207D28u: goto label_207d28;
            case 0x207D2Cu: goto label_207d2c;
            case 0x207D30u: goto label_207d30;
            case 0x207D34u: goto label_207d34;
            case 0x207D38u: goto label_207d38;
            case 0x207D3Cu: goto label_207d3c;
            case 0x207D40u: goto label_207d40;
            case 0x207D44u: goto label_207d44;
            case 0x207D48u: goto label_207d48;
            case 0x207D4Cu: goto label_207d4c;
            case 0x207D50u: goto label_207d50;
            case 0x207D54u: goto label_207d54;
            case 0x207D58u: goto label_207d58;
            case 0x207D5Cu: goto label_207d5c;
            case 0x207D60u: goto label_207d60;
            case 0x207D64u: goto label_207d64;
            case 0x207D68u: goto label_207d68;
            case 0x207D6Cu: goto label_207d6c;
            case 0x207D70u: goto label_207d70;
            case 0x207D74u: goto label_207d74;
            case 0x207D78u: goto label_207d78;
            case 0x207D7Cu: goto label_207d7c;
            case 0x207D80u: goto label_207d80;
            case 0x207D84u: goto label_207d84;
            case 0x207D88u: goto label_207d88;
            case 0x207D8Cu: goto label_207d8c;
            case 0x207D90u: goto label_207d90;
            case 0x207D94u: goto label_207d94;
            case 0x207D98u: goto label_207d98;
            case 0x207D9Cu: goto label_207d9c;
            case 0x207DA0u: goto label_207da0;
            case 0x207DA4u: goto label_207da4;
            case 0x207DA8u: goto label_207da8;
            case 0x207DACu: goto label_207dac;
            case 0x207DB0u: goto label_207db0;
            case 0x207DB4u: goto label_207db4;
            case 0x207DB8u: goto label_207db8;
            case 0x207DBCu: goto label_207dbc;
            case 0x207DC0u: goto label_207dc0;
            case 0x207DC4u: goto label_207dc4;
            case 0x207DC8u: goto label_207dc8;
            case 0x207DCCu: goto label_207dcc;
            case 0x207DD0u: goto label_207dd0;
            case 0x207DD4u: goto label_207dd4;
            case 0x207DD8u: goto label_207dd8;
            case 0x207DDCu: goto label_207ddc;
            case 0x207DE0u: goto label_207de0;
            case 0x207DE4u: goto label_207de4;
            case 0x207DE8u: goto label_207de8;
            case 0x207DECu: goto label_207dec;
            case 0x207DF0u: goto label_207df0;
            case 0x207DF4u: goto label_207df4;
            case 0x207DF8u: goto label_207df8;
            case 0x207DFCu: goto label_207dfc;
            case 0x207E00u: goto label_207e00;
            case 0x207E04u: goto label_207e04;
            case 0x207E08u: goto label_207e08;
            case 0x207E0Cu: goto label_207e0c;
            case 0x207E10u: goto label_207e10;
            case 0x207E14u: goto label_207e14;
            case 0x207E18u: goto label_207e18;
            case 0x207E1Cu: goto label_207e1c;
            case 0x207E20u: goto label_207e20;
            case 0x207E24u: goto label_207e24;
            case 0x207E28u: goto label_207e28;
            case 0x207E2Cu: goto label_207e2c;
            case 0x207E30u: goto label_207e30;
            case 0x207E34u: goto label_207e34;
            case 0x207E38u: goto label_207e38;
            case 0x207E3Cu: goto label_207e3c;
            case 0x207E40u: goto label_207e40;
            case 0x207E44u: goto label_207e44;
            case 0x207E48u: goto label_207e48;
            case 0x207E4Cu: goto label_207e4c;
            case 0x207E50u: goto label_207e50;
            case 0x207E54u: goto label_207e54;
            case 0x207E58u: goto label_207e58;
            case 0x207E5Cu: goto label_207e5c;
            case 0x207E60u: goto label_207e60;
            case 0x207E64u: goto label_207e64;
            case 0x207E68u: goto label_207e68;
            case 0x207E6Cu: goto label_207e6c;
            case 0x207E70u: goto label_207e70;
            case 0x207E74u: goto label_207e74;
            case 0x207E78u: goto label_207e78;
            case 0x207E7Cu: goto label_207e7c;
            case 0x207E80u: goto label_207e80;
            case 0x207E84u: goto label_207e84;
            case 0x207E88u: goto label_207e88;
            case 0x207E8Cu: goto label_207e8c;
            case 0x207E90u: goto label_207e90;
            case 0x207E94u: goto label_207e94;
            case 0x207E98u: goto label_207e98;
            case 0x207E9Cu: goto label_207e9c;
            case 0x207EA0u: goto label_207ea0;
            case 0x207EA4u: goto label_207ea4;
            case 0x207EA8u: goto label_207ea8;
            case 0x207EACu: goto label_207eac;
            case 0x207EB0u: goto label_207eb0;
            case 0x207EB4u: goto label_207eb4;
            case 0x207EB8u: goto label_207eb8;
            case 0x207EBCu: goto label_207ebc;
            case 0x207EC0u: goto label_207ec0;
            case 0x207EC4u: goto label_207ec4;
            case 0x207EC8u: goto label_207ec8;
            case 0x207ECCu: goto label_207ecc;
            case 0x207ED0u: goto label_207ed0;
            case 0x207ED4u: goto label_207ed4;
            case 0x207ED8u: goto label_207ed8;
            case 0x207EDCu: goto label_207edc;
            case 0x207EE0u: goto label_207ee0;
            case 0x207EE4u: goto label_207ee4;
            case 0x207EE8u: goto label_207ee8;
            case 0x207EECu: goto label_207eec;
            case 0x207EF0u: goto label_207ef0;
            case 0x207EF4u: goto label_207ef4;
            case 0x207EF8u: goto label_207ef8;
            case 0x207EFCu: goto label_207efc;
            case 0x207F00u: goto label_207f00;
            case 0x207F04u: goto label_207f04;
            case 0x207F08u: goto label_207f08;
            case 0x207F0Cu: goto label_207f0c;
            case 0x207F10u: goto label_207f10;
            case 0x207F14u: goto label_207f14;
            case 0x207F18u: goto label_207f18;
            case 0x207F1Cu: goto label_207f1c;
            case 0x207F20u: goto label_207f20;
            case 0x207F24u: goto label_207f24;
            case 0x207F28u: goto label_207f28;
            case 0x207F2Cu: goto label_207f2c;
            case 0x207F30u: goto label_207f30;
            case 0x207F34u: goto label_207f34;
            case 0x207F38u: goto label_207f38;
            case 0x207F3Cu: goto label_207f3c;
            case 0x207F40u: goto label_207f40;
            case 0x207F44u: goto label_207f44;
            case 0x207F48u: goto label_207f48;
            case 0x207F4Cu: goto label_207f4c;
            case 0x207F50u: goto label_207f50;
            case 0x207F54u: goto label_207f54;
            case 0x207F58u: goto label_207f58;
            case 0x207F5Cu: goto label_207f5c;
            case 0x207F60u: goto label_207f60;
            case 0x207F64u: goto label_207f64;
            case 0x207F68u: goto label_207f68;
            case 0x207F6Cu: goto label_207f6c;
            case 0x207F70u: goto label_207f70;
            case 0x207F74u: goto label_207f74;
            case 0x207F78u: goto label_207f78;
            case 0x207F7Cu: goto label_207f7c;
            case 0x207F80u: goto label_207f80;
            case 0x207F84u: goto label_207f84;
            case 0x207F88u: goto label_207f88;
            case 0x207F8Cu: goto label_207f8c;
            case 0x207F90u: goto label_207f90;
            case 0x207F94u: goto label_207f94;
            case 0x207F98u: goto label_207f98;
            case 0x207F9Cu: goto label_207f9c;
            case 0x207FA0u: goto label_207fa0;
            case 0x207FA4u: goto label_207fa4;
            case 0x207FA8u: goto label_207fa8;
            case 0x207FACu: goto label_207fac;
            case 0x207FB0u: goto label_207fb0;
            case 0x207FB4u: goto label_207fb4;
            case 0x207FB8u: goto label_207fb8;
            case 0x207FBCu: goto label_207fbc;
            case 0x207FC0u: goto label_207fc0;
            case 0x207FC4u: goto label_207fc4;
            case 0x207FC8u: goto label_207fc8;
            case 0x207FCCu: goto label_207fcc;
            case 0x207FD0u: goto label_207fd0;
            case 0x207FD4u: goto label_207fd4;
            case 0x207FD8u: goto label_207fd8;
            case 0x207FDCu: goto label_207fdc;
            case 0x207FE0u: goto label_207fe0;
            case 0x207FE4u: goto label_207fe4;
            case 0x207FE8u: goto label_207fe8;
            case 0x207FECu: goto label_207fec;
            case 0x207FF0u: goto label_207ff0;
            case 0x207FF4u: goto label_207ff4;
            case 0x207FF8u: goto label_207ff8;
            case 0x207FFCu: goto label_207ffc;
            case 0x208000u: goto label_208000;
            case 0x208004u: goto label_208004;
            case 0x208008u: goto label_208008;
            case 0x20800Cu: goto label_20800c;
            case 0x208010u: goto label_208010;
            case 0x208014u: goto label_208014;
            case 0x208018u: goto label_208018;
            case 0x20801Cu: goto label_20801c;
            case 0x208020u: goto label_208020;
            case 0x208024u: goto label_208024;
            case 0x208028u: goto label_208028;
            case 0x20802Cu: goto label_20802c;
            case 0x208030u: goto label_208030;
            case 0x208034u: goto label_208034;
            case 0x208038u: goto label_208038;
            case 0x20803Cu: goto label_20803c;
            case 0x208040u: goto label_208040;
            case 0x208044u: goto label_208044;
            case 0x208048u: goto label_208048;
            case 0x20804Cu: goto label_20804c;
            case 0x208050u: goto label_208050;
            case 0x208054u: goto label_208054;
            case 0x208058u: goto label_208058;
            case 0x20805Cu: goto label_20805c;
            case 0x208060u: goto label_208060;
            case 0x208064u: goto label_208064;
            case 0x208068u: goto label_208068;
            case 0x20806Cu: goto label_20806c;
            case 0x208070u: goto label_208070;
            case 0x208074u: goto label_208074;
            case 0x208078u: goto label_208078;
            case 0x20807Cu: goto label_20807c;
            case 0x208080u: goto label_208080;
            case 0x208084u: goto label_208084;
            case 0x208088u: goto label_208088;
            case 0x20808Cu: goto label_20808c;
            case 0x208090u: goto label_208090;
            case 0x208094u: goto label_208094;
            case 0x208098u: goto label_208098;
            case 0x20809Cu: goto label_20809c;
            case 0x2080A0u: goto label_2080a0;
            case 0x2080A4u: goto label_2080a4;
            case 0x2080A8u: goto label_2080a8;
            case 0x2080ACu: goto label_2080ac;
            case 0x2080B0u: goto label_2080b0;
            case 0x2080B4u: goto label_2080b4;
            case 0x2080B8u: goto label_2080b8;
            case 0x2080BCu: goto label_2080bc;
            case 0x2080C0u: goto label_2080c0;
            case 0x2080C4u: goto label_2080c4;
            case 0x2080C8u: goto label_2080c8;
            case 0x2080CCu: goto label_2080cc;
            case 0x2080D0u: goto label_2080d0;
            case 0x2080D4u: goto label_2080d4;
            case 0x2080D8u: goto label_2080d8;
            case 0x2080DCu: goto label_2080dc;
            case 0x2080E0u: goto label_2080e0;
            case 0x2080E4u: goto label_2080e4;
            case 0x2080E8u: goto label_2080e8;
            case 0x2080ECu: goto label_2080ec;
            case 0x2080F0u: goto label_2080f0;
            case 0x2080F4u: goto label_2080f4;
            case 0x2080F8u: goto label_2080f8;
            case 0x2080FCu: goto label_2080fc;
            case 0x208100u: goto label_208100;
            case 0x208104u: goto label_208104;
            case 0x208108u: goto label_208108;
            case 0x20810Cu: goto label_20810c;
            case 0x208110u: goto label_208110;
            case 0x208114u: goto label_208114;
            case 0x208118u: goto label_208118;
            case 0x20811Cu: goto label_20811c;
            case 0x208120u: goto label_208120;
            case 0x208124u: goto label_208124;
            case 0x208128u: goto label_208128;
            case 0x20812Cu: goto label_20812c;
            case 0x208130u: goto label_208130;
            case 0x208134u: goto label_208134;
            case 0x208138u: goto label_208138;
            case 0x20813Cu: goto label_20813c;
            case 0x208140u: goto label_208140;
            case 0x208144u: goto label_208144;
            case 0x208148u: goto label_208148;
            case 0x20814Cu: goto label_20814c;
            case 0x208150u: goto label_208150;
            case 0x208154u: goto label_208154;
            case 0x208158u: goto label_208158;
            case 0x20815Cu: goto label_20815c;
            case 0x208160u: goto label_208160;
            case 0x208164u: goto label_208164;
            case 0x208168u: goto label_208168;
            case 0x20816Cu: goto label_20816c;
            case 0x208170u: goto label_208170;
            case 0x208174u: goto label_208174;
            case 0x208178u: goto label_208178;
            case 0x20817Cu: goto label_20817c;
            case 0x208180u: goto label_208180;
            case 0x208184u: goto label_208184;
            case 0x208188u: goto label_208188;
            case 0x20818Cu: goto label_20818c;
            case 0x208190u: goto label_208190;
            case 0x208194u: goto label_208194;
            case 0x208198u: goto label_208198;
            case 0x20819Cu: goto label_20819c;
            case 0x2081A0u: goto label_2081a0;
            case 0x2081A4u: goto label_2081a4;
            case 0x2081A8u: goto label_2081a8;
            case 0x2081ACu: goto label_2081ac;
            case 0x2081B0u: goto label_2081b0;
            case 0x2081B4u: goto label_2081b4;
            case 0x2081B8u: goto label_2081b8;
            case 0x2081BCu: goto label_2081bc;
            case 0x2081C0u: goto label_2081c0;
            case 0x2081C4u: goto label_2081c4;
            case 0x2081C8u: goto label_2081c8;
            case 0x2081CCu: goto label_2081cc;
            case 0x2081D0u: goto label_2081d0;
            case 0x2081D4u: goto label_2081d4;
            case 0x2081D8u: goto label_2081d8;
            case 0x2081DCu: goto label_2081dc;
            case 0x2081E0u: goto label_2081e0;
            case 0x2081E4u: goto label_2081e4;
            case 0x2081E8u: goto label_2081e8;
            case 0x2081ECu: goto label_2081ec;
            case 0x2081F0u: goto label_2081f0;
            case 0x2081F4u: goto label_2081f4;
            case 0x2081F8u: goto label_2081f8;
            case 0x2081FCu: goto label_2081fc;
            case 0x208200u: goto label_208200;
            case 0x208204u: goto label_208204;
            case 0x208208u: goto label_208208;
            case 0x20820Cu: goto label_20820c;
            case 0x208210u: goto label_208210;
            case 0x208214u: goto label_208214;
            case 0x208218u: goto label_208218;
            case 0x20821Cu: goto label_20821c;
            case 0x208220u: goto label_208220;
            case 0x208224u: goto label_208224;
            case 0x208228u: goto label_208228;
            case 0x20822Cu: goto label_20822c;
            case 0x208230u: goto label_208230;
            case 0x208234u: goto label_208234;
            case 0x208238u: goto label_208238;
            case 0x20823Cu: goto label_20823c;
            case 0x208240u: goto label_208240;
            case 0x208244u: goto label_208244;
            case 0x208248u: goto label_208248;
            case 0x20824Cu: goto label_20824c;
            case 0x208250u: goto label_208250;
            case 0x208254u: goto label_208254;
            case 0x208258u: goto label_208258;
            case 0x20825Cu: goto label_20825c;
            case 0x208260u: goto label_208260;
            case 0x208264u: goto label_208264;
            case 0x208268u: goto label_208268;
            case 0x20826Cu: goto label_20826c;
            case 0x208270u: goto label_208270;
            case 0x208274u: goto label_208274;
            case 0x208278u: goto label_208278;
            case 0x20827Cu: goto label_20827c;
            case 0x208280u: goto label_208280;
            case 0x208284u: goto label_208284;
            case 0x208288u: goto label_208288;
            case 0x20828Cu: goto label_20828c;
            case 0x208290u: goto label_208290;
            case 0x208294u: goto label_208294;
            case 0x208298u: goto label_208298;
            case 0x20829Cu: goto label_20829c;
            case 0x2082A0u: goto label_2082a0;
            case 0x2082A4u: goto label_2082a4;
            case 0x2082A8u: goto label_2082a8;
            case 0x2082ACu: goto label_2082ac;
            case 0x2082B0u: goto label_2082b0;
            case 0x2082B4u: goto label_2082b4;
            case 0x2082B8u: goto label_2082b8;
            case 0x2082BCu: goto label_2082bc;
            case 0x2082C0u: goto label_2082c0;
            case 0x2082C4u: goto label_2082c4;
            case 0x2082C8u: goto label_2082c8;
            case 0x2082CCu: goto label_2082cc;
            case 0x2082D0u: goto label_2082d0;
            case 0x2082D4u: goto label_2082d4;
            case 0x2082D8u: goto label_2082d8;
            case 0x2082DCu: goto label_2082dc;
            case 0x2082E0u: goto label_2082e0;
            case 0x2082E4u: goto label_2082e4;
            case 0x2082E8u: goto label_2082e8;
            case 0x2082ECu: goto label_2082ec;
            case 0x2082F0u: goto label_2082f0;
            case 0x2082F4u: goto label_2082f4;
            case 0x2082F8u: goto label_2082f8;
            case 0x2082FCu: goto label_2082fc;
            case 0x208300u: goto label_208300;
            case 0x208304u: goto label_208304;
            case 0x208308u: goto label_208308;
            case 0x20830Cu: goto label_20830c;
            case 0x208310u: goto label_208310;
            case 0x208314u: goto label_208314;
            case 0x208318u: goto label_208318;
            case 0x20831Cu: goto label_20831c;
            case 0x208320u: goto label_208320;
            case 0x208324u: goto label_208324;
            case 0x208328u: goto label_208328;
            case 0x20832Cu: goto label_20832c;
            case 0x208330u: goto label_208330;
            case 0x208334u: goto label_208334;
            case 0x208338u: goto label_208338;
            case 0x20833Cu: goto label_20833c;
            case 0x208340u: goto label_208340;
            case 0x208344u: goto label_208344;
            case 0x208348u: goto label_208348;
            case 0x20834Cu: goto label_20834c;
            case 0x208350u: goto label_208350;
            case 0x208354u: goto label_208354;
            case 0x208358u: goto label_208358;
            case 0x20835Cu: goto label_20835c;
            case 0x208360u: goto label_208360;
            case 0x208364u: goto label_208364;
            case 0x208368u: goto label_208368;
            case 0x20836Cu: goto label_20836c;
            case 0x208370u: goto label_208370;
            case 0x208374u: goto label_208374;
            case 0x208378u: goto label_208378;
            case 0x20837Cu: goto label_20837c;
            case 0x208380u: goto label_208380;
            case 0x208384u: goto label_208384;
            case 0x208388u: goto label_208388;
            case 0x20838Cu: goto label_20838c;
            case 0x208390u: goto label_208390;
            case 0x208394u: goto label_208394;
            case 0x208398u: goto label_208398;
            case 0x20839Cu: goto label_20839c;
            case 0x2083A0u: goto label_2083a0;
            case 0x2083A4u: goto label_2083a4;
            case 0x2083A8u: goto label_2083a8;
            case 0x2083ACu: goto label_2083ac;
            case 0x2083B0u: goto label_2083b0;
            case 0x2083B4u: goto label_2083b4;
            case 0x2083B8u: goto label_2083b8;
            case 0x2083BCu: goto label_2083bc;
            case 0x2083C0u: goto label_2083c0;
            case 0x2083C4u: goto label_2083c4;
            case 0x2083C8u: goto label_2083c8;
            case 0x2083CCu: goto label_2083cc;
            case 0x2083D0u: goto label_2083d0;
            case 0x2083D4u: goto label_2083d4;
            case 0x2083D8u: goto label_2083d8;
            case 0x2083DCu: goto label_2083dc;
            case 0x2083E0u: goto label_2083e0;
            case 0x2083E4u: goto label_2083e4;
            case 0x2083E8u: goto label_2083e8;
            case 0x2083ECu: goto label_2083ec;
            case 0x2083F0u: goto label_2083f0;
            case 0x2083F4u: goto label_2083f4;
            case 0x2083F8u: goto label_2083f8;
            case 0x2083FCu: goto label_2083fc;
            case 0x208400u: goto label_208400;
            case 0x208404u: goto label_208404;
            case 0x208408u: goto label_208408;
            case 0x20840Cu: goto label_20840c;
            case 0x208410u: goto label_208410;
            case 0x208414u: goto label_208414;
            case 0x208418u: goto label_208418;
            case 0x20841Cu: goto label_20841c;
            case 0x208420u: goto label_208420;
            case 0x208424u: goto label_208424;
            case 0x208428u: goto label_208428;
            case 0x20842Cu: goto label_20842c;
            case 0x208430u: goto label_208430;
            case 0x208434u: goto label_208434;
            case 0x208438u: goto label_208438;
            case 0x20843Cu: goto label_20843c;
            case 0x208440u: goto label_208440;
            case 0x208444u: goto label_208444;
            case 0x208448u: goto label_208448;
            case 0x20844Cu: goto label_20844c;
            case 0x208450u: goto label_208450;
            case 0x208454u: goto label_208454;
            case 0x208458u: goto label_208458;
            case 0x20845Cu: goto label_20845c;
            case 0x208460u: goto label_208460;
            case 0x208464u: goto label_208464;
            case 0x208468u: goto label_208468;
            case 0x20846Cu: goto label_20846c;
            case 0x208470u: goto label_208470;
            case 0x208474u: goto label_208474;
            case 0x208478u: goto label_208478;
            case 0x20847Cu: goto label_20847c;
            case 0x208480u: goto label_208480;
            case 0x208484u: goto label_208484;
            case 0x208488u: goto label_208488;
            case 0x20848Cu: goto label_20848c;
            case 0x208490u: goto label_208490;
            case 0x208494u: goto label_208494;
            case 0x208498u: goto label_208498;
            case 0x20849Cu: goto label_20849c;
            case 0x2084A0u: goto label_2084a0;
            case 0x2084A4u: goto label_2084a4;
            case 0x2084A8u: goto label_2084a8;
            case 0x2084ACu: goto label_2084ac;
            case 0x2084B0u: goto label_2084b0;
            case 0x2084B4u: goto label_2084b4;
            case 0x2084B8u: goto label_2084b8;
            case 0x2084BCu: goto label_2084bc;
            case 0x2084C0u: goto label_2084c0;
            case 0x2084C4u: goto label_2084c4;
            case 0x2084C8u: goto label_2084c8;
            case 0x2084CCu: goto label_2084cc;
            case 0x2084D0u: goto label_2084d0;
            case 0x2084D4u: goto label_2084d4;
            case 0x2084D8u: goto label_2084d8;
            case 0x2084DCu: goto label_2084dc;
            case 0x2084E0u: goto label_2084e0;
            case 0x2084E4u: goto label_2084e4;
            case 0x2084E8u: goto label_2084e8;
            case 0x2084ECu: goto label_2084ec;
            case 0x2084F0u: goto label_2084f0;
            case 0x2084F4u: goto label_2084f4;
            case 0x2084F8u: goto label_2084f8;
            case 0x2084FCu: goto label_2084fc;
            case 0x208500u: goto label_208500;
            case 0x208504u: goto label_208504;
            case 0x208508u: goto label_208508;
            case 0x20850Cu: goto label_20850c;
            case 0x208510u: goto label_208510;
            case 0x208514u: goto label_208514;
            case 0x208518u: goto label_208518;
            case 0x20851Cu: goto label_20851c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x207BFCu;
label_207bfc:
    // 0x207bfc: 0x83838ba8
    ctx->pc = 0x207bfcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937512)));
label_207c00:
    // 0x207c00: 0x24020006
    ctx->pc = 0x207c00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
label_207c04:
    // 0x207c04: 0x14620005
label_207c08:
    if (ctx->pc == 0x207C08u) {
        ctx->pc = 0x207C08u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x207C0Cu;
        goto label_207c0c;
    }
    ctx->pc = 0x207C04u;
    {
        const bool branch_taken_0x207c04 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x207C08u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x207c04) {
            ctx->pc = 0x207C1Cu;
            goto label_207c1c;
        }
    }
    ctx->pc = 0x207C0Cu;
label_207c0c:
    // 0x207c0c: 0x3c010050
    ctx->pc = 0x207c0cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_207c10:
    // 0x207c10: 0xa022e422
    ctx->pc = 0x207c10u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294960162), (uint8_t)GPR_U32(ctx, 2));
label_207c14:
    // 0x207c14: 0x3c010050
    ctx->pc = 0x207c14u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_207c18:
    // 0x207c18: 0xa022e424
    ctx->pc = 0x207c18u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294960164), (uint8_t)GPR_U32(ctx, 2));
label_207c1c:
    // 0x207c1c: 0xc6421d78
    ctx->pc = 0x207c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 7544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_207c20:
    // 0x207c20: 0x3c023f80
    ctx->pc = 0x207c20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
label_207c24:
    // 0x207c24: 0x44820800
    ctx->pc = 0x207c24u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
label_207c28:
    // 0x207c28: 0x44800000
    ctx->pc = 0x207c28u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_207c2c:
    // 0x207c2c: 0x0
    ctx->pc = 0x207c2cu;
    // NOP
label_207c30:
    // 0x207c30: 0x46011041
    ctx->pc = 0x207c30u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_207c34:
    // 0x207c34: 0x46000836
    ctx->pc = 0x207c34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_207c38:
    // 0x207c38: 0x0
    ctx->pc = 0x207c38u;
    // NOP
label_207c3c:
    // 0x207c3c: 0x45010004
label_207c40:
    if (ctx->pc == 0x207C40u) {
        ctx->pc = 0x207C40u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 7544), bits); }
        ctx->pc = 0x207C44u;
        goto label_207c44;
    }
    ctx->pc = 0x207C3Cu;
    {
        const bool branch_taken_0x207c3c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x207C40u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 7544), bits); }
        if (branch_taken_0x207c3c) {
            ctx->pc = 0x207C50u;
            goto label_207c50;
        }
    }
    ctx->pc = 0x207C44u;
label_207c44:
    // 0x207c44: 0x8242006d
    ctx->pc = 0x207c44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 109)));
label_207c48:
    // 0x207c48: 0x10400204
label_207c4c:
    if (ctx->pc == 0x207C4Cu) {
        ctx->pc = 0x207C50u;
        goto label_207c50;
    }
    ctx->pc = 0x207C48u;
    {
        const bool branch_taken_0x207c48 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x207c48) {
            ctx->pc = 0x20845Cu;
            goto label_20845c;
        }
    }
    ctx->pc = 0x207C50u;
label_207c50:
    // 0x207c50: 0x8e431db0
    ctx->pc = 0x207c50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 7600)));
label_207c54:
    // 0x207c54: 0x3c020027
    ctx->pc = 0x207c54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
label_207c58:
    // 0x207c58: 0x24422a80
    ctx->pc = 0x207c58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10880));
label_207c5c:
    // 0x207c5c: 0x72402628
    ctx->pc = 0x207c5cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_207c60:
    // 0x207c60: 0x318c0
    ctx->pc = 0x207c60u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
label_207c64:
    // 0x207c64: 0xc082938
label_207c68:
    if (ctx->pc == 0x207C68u) {
        ctx->pc = 0x207C68u;
        SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x207C6Cu;
        goto label_207c6c;
    }
    ctx->pc = 0x207C64u;
    SET_GPR_U32(ctx, 31, 0x207C6Cu);
    ctx->pc = 0x207C68u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x20A4E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setAtcPlID__10PeopleTaskFPi_0x20a4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207C6Cu; }
        else if (ctx->pc != 0x207C6Cu) { ctx->pc = 0x207C6Cu; }
    }
    if (ctx->pc != 0x207C6Cu) { return; }
    ctx->pc = 0x207C6Cu;
label_207c6c:
    // 0x207c6c: 0x82431e00
    ctx->pc = 0x207c6cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 7680)));
label_207c70:
    // 0x207c70: 0x2402ffff
    ctx->pc = 0x207c70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_207c74:
    // 0x207c74: 0x10620019
label_207c78:
    if (ctx->pc == 0x207C78u) {
        ctx->pc = 0x207C78u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
        ctx->pc = 0x207C7Cu;
        goto label_207c7c;
    }
    ctx->pc = 0x207C74u;
    {
        const bool branch_taken_0x207c74 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x207C78u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
        if (branch_taken_0x207c74) {
            ctx->pc = 0x207CDCu;
            goto label_207cdc;
        }
    }
    ctx->pc = 0x207C7Cu;
label_207c7c:
    // 0x207c7c: 0x8e431db0
    ctx->pc = 0x207c7cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 7600)));
label_207c80:
    // 0x207c80: 0x3c020027
    ctx->pc = 0x207c80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
label_207c84:
    // 0x207c84: 0x244229e8
    ctx->pc = 0x207c84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10728));
label_207c88:
    // 0x207c88: 0x72402628
    ctx->pc = 0x207c88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_207c8c:
    // 0x207c8c: 0x31880
    ctx->pc = 0x207c8cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_207c90:
    // 0x207c90: 0x431021
    ctx->pc = 0x207c90u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_207c94:
    // 0x207c94: 0x8c420000
    ctx->pc = 0x207c94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_207c98:
    // 0x207c98: 0xc0829ac
label_207c9c:
    if (ctx->pc == 0x207C9Cu) {
        ctx->pc = 0x207C9Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 8));
        ctx->pc = 0x207CA0u;
        goto label_207ca0;
    }
    ctx->pc = 0x207C98u;
    SET_GPR_U32(ctx, 31, 0x207CA0u);
    ctx->pc = 0x207C9Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 8));
    ctx->pc = 0x20A6B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        motionSelect__10PeopleTaskFPi_0x20a6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207CA0u; }
        else if (ctx->pc != 0x207CA0u) { ctx->pc = 0x207CA0u; }
    }
    if (ctx->pc != 0x207CA0u) { return; }
    ctx->pc = 0x207CA0u;
label_207ca0:
    // 0x207ca0: 0x2143c
    ctx->pc = 0x207ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_207ca4:
    // 0x207ca4: 0x2143f
    ctx->pc = 0x207ca4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_207ca8:
    // 0x207ca8: 0xae421dcc
    ctx->pc = 0x207ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7628), GPR_U32(ctx, 2));
label_207cac:
    // 0x207cac: 0x12400002
label_207cb0:
    if (ctx->pc == 0x207CB0u) {
        ctx->pc = 0x207CB0u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        ctx->pc = 0x207CB4u;
        goto label_207cb4;
    }
    ctx->pc = 0x207CACu;
    {
        const bool branch_taken_0x207cac = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x207CB0u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        if (branch_taken_0x207cac) {
            ctx->pc = 0x207CB8u;
            goto label_207cb8;
        }
    }
    ctx->pc = 0x207CB4u;
label_207cb4:
    // 0x207cb4: 0x24a50030
    ctx->pc = 0x207cb4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 48));
label_207cb8:
    // 0x207cb8: 0x8e461dcc
    ctx->pc = 0x207cb8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 7628)));
label_207cbc:
    // 0x207cbc: 0x3c02004a
    ctx->pc = 0x207cbcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
label_207cc0:
    // 0x207cc0: 0x2444e8e0
    ctx->pc = 0x207cc0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294961376));
label_207cc4:
    // 0x207cc4: 0x70003e28
    ctx->pc = 0x207cc4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_207cc8:
    // 0x207cc8: 0xc07eabc
label_207ccc:
    if (ctx->pc == 0x207CCCu) {
        ctx->pc = 0x207CCCu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x207CD0u;
        goto label_207cd0;
    }
    ctx->pc = 0x207CC8u;
    SET_GPR_U32(ctx, 31, 0x207CD0u);
    ctx->pc = 0x207CCCu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x1FAAF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        motSupplement__12BodyMgrClassFP10MotObjTaskiii_0x1faaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207CD0u; }
        else if (ctx->pc != 0x207CD0u) { ctx->pc = 0x207CD0u; }
    }
    if (ctx->pc != 0x207CD0u) { return; }
    ctx->pc = 0x207CD0u;
label_207cd0:
    // 0x207cd0: 0x24020001
    ctx->pc = 0x207cd0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_207cd4:
    // 0x207cd4: 0x10000015
label_207cd8:
    if (ctx->pc == 0x207CD8u) {
        ctx->pc = 0x207CD8u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 7608), GPR_U32(ctx, 2));
        ctx->pc = 0x207CDCu;
        goto label_207cdc;
    }
    ctx->pc = 0x207CD4u;
    {
        const bool branch_taken_0x207cd4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x207CD8u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 7608), GPR_U32(ctx, 2));
        if (branch_taken_0x207cd4) {
            ctx->pc = 0x207D2Cu;
            goto label_207d2c;
        }
    }
    ctx->pc = 0x207CDCu;
label_207cdc:
    // 0x207cdc: 0xae421d78
    ctx->pc = 0x207cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7544), GPR_U32(ctx, 2));
label_207ce0:
    // 0x207ce0: 0x8e43000c
    ctx->pc = 0x207ce0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_207ce4:
    // 0x207ce4: 0x3c02efff
    ctx->pc = 0x207ce4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61439 << 16));
label_207ce8:
    // 0x207ce8: 0x3442ffff
    ctx->pc = 0x207ce8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
label_207cec:
    // 0x207cec: 0x621024
    ctx->pc = 0x207cecu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_207cf0:
    // 0x207cf0: 0xae42000c
    ctx->pc = 0x207cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_207cf4:
    // 0x207cf4: 0x8242006d
    ctx->pc = 0x207cf4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 109)));
label_207cf8:
    // 0x207cf8: 0x104001d8
label_207cfc:
    if (ctx->pc == 0x207CFCu) {
        ctx->pc = 0x207CFCu;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        ctx->pc = 0x207D00u;
        goto label_207d00;
    }
    ctx->pc = 0x207CF8u;
    {
        const bool branch_taken_0x207cf8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x207CFCu;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        if (branch_taken_0x207cf8) {
            ctx->pc = 0x20845Cu;
            goto label_20845c;
        }
    }
    ctx->pc = 0x207D00u;
label_207d00:
    // 0x207d00: 0x12400002
label_207d04:
    if (ctx->pc == 0x207D04u) {
        ctx->pc = 0x207D08u;
        goto label_207d08;
    }
    ctx->pc = 0x207D00u;
    {
        const bool branch_taken_0x207d00 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        if (branch_taken_0x207d00) {
            ctx->pc = 0x207D0Cu;
            goto label_207d0c;
        }
    }
    ctx->pc = 0x207D08u;
label_207d08:
    // 0x207d08: 0x24a50030
    ctx->pc = 0x207d08u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 48));
label_207d0c:
    // 0x207d0c: 0x8e461dcc
    ctx->pc = 0x207d0cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 7628)));
label_207d10:
    // 0x207d10: 0x3c02004a
    ctx->pc = 0x207d10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
label_207d14:
    // 0x207d14: 0x2444e8e0
    ctx->pc = 0x207d14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294961376));
label_207d18:
    // 0x207d18: 0x70003e28
    ctx->pc = 0x207d18u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_207d1c:
    // 0x207d1c: 0xc07eabc
label_207d20:
    if (ctx->pc == 0x207D20u) {
        ctx->pc = 0x207D20u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x207D24u;
        goto label_207d24;
    }
    ctx->pc = 0x207D1Cu;
    SET_GPR_U32(ctx, 31, 0x207D24u);
    ctx->pc = 0x207D20u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x1FAAF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        motSupplement__12BodyMgrClassFP10MotObjTaskiii_0x1faaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207D24u; }
        else if (ctx->pc != 0x207D24u) { ctx->pc = 0x207D24u; }
    }
    if (ctx->pc != 0x207D24u) { return; }
    ctx->pc = 0x207D24u;
label_207d24:
    // 0x207d24: 0x100001ce
label_207d28:
    if (ctx->pc == 0x207D28u) {
        ctx->pc = 0x207D28u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->pc = 0x207D2Cu;
        goto label_207d2c;
    }
    ctx->pc = 0x207D24u;
    {
        const bool branch_taken_0x207d24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x207D28u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 12)));
        if (branch_taken_0x207d24) {
            ctx->pc = 0x208460u;
            goto label_208460;
        }
    }
    ctx->pc = 0x207D2Cu;
label_207d2c:
    // 0x207d2c: 0x8e42000c
    ctx->pc = 0x207d2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_207d30:
    // 0x207d30: 0x30422000
    ctx->pc = 0x207d30u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8192));
label_207d34:
    // 0x207d34: 0x1040000e
label_207d38:
    if (ctx->pc == 0x207D38u) {
        ctx->pc = 0x207D3Cu;
        goto label_207d3c;
    }
    ctx->pc = 0x207D34u;
    {
        const bool branch_taken_0x207d34 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x207d34) {
            ctx->pc = 0x207D70u;
            goto label_207d70;
        }
    }
    ctx->pc = 0x207D3Cu;
label_207d3c:
    // 0x207d3c: 0xc6421d78
    ctx->pc = 0x207d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 7544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_207d40:
    // 0x207d40: 0x44800000
    ctx->pc = 0x207d40u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_207d44:
    // 0x207d44: 0x3c023f80
    ctx->pc = 0x207d44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
label_207d48:
    // 0x207d48: 0x44820800
    ctx->pc = 0x207d48u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
label_207d4c:
    // 0x207d4c: 0x0
    ctx->pc = 0x207d4cu;
    // NOP
label_207d50:
    // 0x207d50: 0x46001036
    ctx->pc = 0x207d50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_207d54:
    // 0x207d54: 0x46011001
    ctx->pc = 0x207d54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_207d58:
    // 0x207d58: 0x45000005
label_207d5c:
    if (ctx->pc == 0x207D5Cu) {
        ctx->pc = 0x207D5Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 7544), bits); }
        ctx->pc = 0x207D60u;
        goto label_207d60;
    }
    ctx->pc = 0x207D58u;
    {
        const bool branch_taken_0x207d58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x207D5Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 7544), bits); }
        if (branch_taken_0x207d58) {
            ctx->pc = 0x207D70u;
            goto label_207d70;
        }
    }
    ctx->pc = 0x207D60u;
label_207d60:
    // 0x207d60: 0x8e43000c
    ctx->pc = 0x207d60u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_207d64:
    // 0x207d64: 0x2402dfff
    ctx->pc = 0x207d64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294959103));
label_207d68:
    // 0x207d68: 0x621024
    ctx->pc = 0x207d68u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_207d6c:
    // 0x207d6c: 0xae42000c
    ctx->pc = 0x207d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_207d70:
    // 0x207d70: 0xc6411df8
    ctx->pc = 0x207d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 7672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_207d74:
    // 0x207d74: 0x3c0241f0
    ctx->pc = 0x207d74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16880 << 16));
label_207d78:
    // 0x207d78: 0x44820000
    ctx->pc = 0x207d78u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_207d7c:
    // 0x207d7c: 0x0
    ctx->pc = 0x207d7cu;
    // NOP
label_207d80:
    // 0x207d80: 0x46000834
    ctx->pc = 0x207d80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_207d84:
    // 0x207d84: 0x0
    ctx->pc = 0x207d84u;
    // NOP
label_207d88:
    // 0x207d88: 0x4500001b
label_207d8c:
    if (ctx->pc == 0x207D8Cu) {
        ctx->pc = 0x207D90u;
        goto label_207d90;
    }
    ctx->pc = 0x207D88u;
    {
        const bool branch_taken_0x207d88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x207d88) {
            ctx->pc = 0x207DF8u;
            goto label_207df8;
        }
    }
    ctx->pc = 0x207D90u;
label_207d90:
    // 0x207d90: 0x8e431db0
    ctx->pc = 0x207d90u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 7600)));
label_207d94:
    // 0x207d94: 0x3c020027
    ctx->pc = 0x207d94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
label_207d98:
    // 0x207d98: 0x244229e8
    ctx->pc = 0x207d98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10728));
label_207d9c:
    // 0x207d9c: 0x72402628
    ctx->pc = 0x207d9cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_207da0:
    // 0x207da0: 0x31880
    ctx->pc = 0x207da0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_207da4:
    // 0x207da4: 0x431021
    ctx->pc = 0x207da4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_207da8:
    // 0x207da8: 0x8c420000
    ctx->pc = 0x207da8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_207dac:
    // 0x207dac: 0xc0829ac
label_207db0:
    if (ctx->pc == 0x207DB0u) {
        ctx->pc = 0x207DB0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x207DB4u;
        goto label_207db4;
    }
    ctx->pc = 0x207DACu;
    SET_GPR_U32(ctx, 31, 0x207DB4u);
    ctx->pc = 0x207DB0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 16));
    ctx->pc = 0x20A6B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        motionSelect__10PeopleTaskFPi_0x20a6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207DB4u; }
        else if (ctx->pc != 0x207DB4u) { ctx->pc = 0x207DB4u; }
    }
    if (ctx->pc != 0x207DB4u) { return; }
    ctx->pc = 0x207DB4u;
label_207db4:
    // 0x207db4: 0x2143c
    ctx->pc = 0x207db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_207db8:
    // 0x207db8: 0x2143f
    ctx->pc = 0x207db8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_207dbc:
    // 0x207dbc: 0xae421dcc
    ctx->pc = 0x207dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7628), GPR_U32(ctx, 2));
label_207dc0:
    // 0x207dc0: 0x12400002
label_207dc4:
    if (ctx->pc == 0x207DC4u) {
        ctx->pc = 0x207DC4u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        ctx->pc = 0x207DC8u;
        goto label_207dc8;
    }
    ctx->pc = 0x207DC0u;
    {
        const bool branch_taken_0x207dc0 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x207DC4u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        if (branch_taken_0x207dc0) {
            ctx->pc = 0x207DCCu;
            goto label_207dcc;
        }
    }
    ctx->pc = 0x207DC8u;
label_207dc8:
    // 0x207dc8: 0x24a50030
    ctx->pc = 0x207dc8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 48));
label_207dcc:
    // 0x207dcc: 0x8e461dcc
    ctx->pc = 0x207dccu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 7628)));
label_207dd0:
    // 0x207dd0: 0x3c02004a
    ctx->pc = 0x207dd0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
label_207dd4:
    // 0x207dd4: 0x2444e8e0
    ctx->pc = 0x207dd4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294961376));
label_207dd8:
    // 0x207dd8: 0x70003e28
    ctx->pc = 0x207dd8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_207ddc:
    // 0x207ddc: 0xc07eabc
label_207de0:
    if (ctx->pc == 0x207DE0u) {
        ctx->pc = 0x207DE0u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x207DE4u;
        goto label_207de4;
    }
    ctx->pc = 0x207DDCu;
    SET_GPR_U32(ctx, 31, 0x207DE4u);
    ctx->pc = 0x207DE0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x1FAAF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        motSupplement__12BodyMgrClassFP10MotObjTaskiii_0x1faaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207DE4u; }
        else if (ctx->pc != 0x207DE4u) { ctx->pc = 0x207DE4u; }
    }
    if (ctx->pc != 0x207DE4u) { return; }
    ctx->pc = 0x207DE4u;
label_207de4:
    // 0x207de4: 0x2402fffe
    ctx->pc = 0x207de4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
label_207de8:
    // 0x207de8: 0xae421dd0
    ctx->pc = 0x207de8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7632), GPR_U32(ctx, 2));
label_207dec:
    // 0x207dec: 0x24020005
    ctx->pc = 0x207decu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
label_207df0:
    // 0x207df0: 0x1000019a
label_207df4:
    if (ctx->pc == 0x207DF4u) {
        ctx->pc = 0x207DF4u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 7608), GPR_U32(ctx, 2));
        ctx->pc = 0x207DF8u;
        goto label_207df8;
    }
    ctx->pc = 0x207DF0u;
    {
        const bool branch_taken_0x207df0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x207DF4u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 7608), GPR_U32(ctx, 2));
        if (branch_taken_0x207df0) {
            ctx->pc = 0x20845Cu;
            goto label_20845c;
        }
    }
    ctx->pc = 0x207DF8u;
label_207df8:
    // 0x207df8: 0x8e421dec
    ctx->pc = 0x207df8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 7660)));
label_207dfc:
    // 0x207dfc: 0xc4400004
    ctx->pc = 0x207dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_207e00:
    // 0x207e00: 0x46000834
    ctx->pc = 0x207e00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_207e04:
    // 0x207e04: 0x0
    ctx->pc = 0x207e04u;
    // NOP
label_207e08:
    // 0x207e08: 0x45000194
label_207e0c:
    if (ctx->pc == 0x207E0Cu) {
        ctx->pc = 0x207E10u;
        goto label_207e10;
    }
    ctx->pc = 0x207E08u;
    {
        const bool branch_taken_0x207e08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x207e08) {
            ctx->pc = 0x20845Cu;
            goto label_20845c;
        }
    }
    ctx->pc = 0x207E10u;
label_207e10:
    // 0x207e10: 0x84460000
    ctx->pc = 0x207e10u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_207e14:
    // 0x207e14: 0x8645005c
    ctx->pc = 0x207e14u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 92)));
label_207e18:
    // 0x207e18: 0x84420002
    ctx->pc = 0x207e18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_207e1c:
    // 0x207e1c: 0x4410003
label_207e20:
    if (ctx->pc == 0x207E20u) {
        ctx->pc = 0x207E20u;
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 1));
        ctx->pc = 0x207E24u;
        goto label_207e24;
    }
    ctx->pc = 0x207E1Cu;
    {
        const bool branch_taken_0x207e1c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x207E20u;
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 1));
        if (branch_taken_0x207e1c) {
            ctx->pc = 0x207E2Cu;
            goto label_207e2c;
        }
    }
    ctx->pc = 0x207E24u;
label_207e24:
    // 0x207e24: 0x24420001
    ctx->pc = 0x207e24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_207e28:
    // 0x207e28: 0x23843
    ctx->pc = 0x207e28u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 1));
label_207e2c:
    // 0x207e2c: 0xc07f1d8
label_207e30:
    if (ctx->pc == 0x207E30u) {
        ctx->pc = 0x207E30u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
        ctx->pc = 0x207E34u;
        goto label_207e34;
    }
    ctx->pc = 0x207E2Cu;
    SET_GPR_U32(ctx, 31, 0x207E34u);
    ctx->pc = 0x207E30u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC760u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdr__11MotMgrClassFiii_0x1fc760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207E34u; }
        else if (ctx->pc != 0x207E34u) { ctx->pc = 0x207E34u; }
    }
    if (ctx->pc != 0x207E34u) { return; }
    ctx->pc = 0x207E34u;
label_207e34:
    // 0x207e34: 0xc4540000
    ctx->pc = 0x207e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_207e38:
    // 0x207e38: 0xc4550008
    ctx->pc = 0x207e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_207e3c:
    // 0x207e3c: 0x70008628
    ctx->pc = 0x207e3cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_207e40:
    // 0x207e40: 0x10000019
label_207e44:
    if (ctx->pc == 0x207E44u) {
        ctx->pc = 0x207E44u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x207E48u;
        goto label_207e48;
    }
    ctx->pc = 0x207E40u;
    {
        const bool branch_taken_0x207e40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x207E44u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x207e40) {
            ctx->pc = 0x207EA8u;
            goto label_207ea8;
        }
    }
    ctx->pc = 0x207E48u;
label_207e48:
    // 0x207e48: 0x84660000
    ctx->pc = 0x207e48u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_207e4c:
    // 0x207e4c: 0x8645005c
    ctx->pc = 0x207e4cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 92)));
label_207e50:
    // 0x207e50: 0x27848d4c
    ctx->pc = 0x207e50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
label_207e54:
    // 0x207e54: 0xc07f1d8
label_207e58:
    if (ctx->pc == 0x207E58u) {
        ctx->pc = 0x207E58u;
        SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        ctx->pc = 0x207E5Cu;
        goto label_207e5c;
    }
    ctx->pc = 0x207E54u;
    SET_GPR_U32(ctx, 31, 0x207E5Cu);
    ctx->pc = 0x207E58u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1FC760u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdr__11MotMgrClassFiii_0x1fc760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207E5Cu; }
        else if (ctx->pc != 0x207E5Cu) { ctx->pc = 0x207E5Cu; }
    }
    if (ctx->pc != 0x207E5Cu) { return; }
    ctx->pc = 0x207E5Cu;
label_207e5c:
    // 0x207e5c: 0xc4410000
    ctx->pc = 0x207e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_207e60:
    // 0x207e60: 0xc4400008
    ctx->pc = 0x207e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_207e64:
    // 0x207e64: 0x4601a041
    ctx->pc = 0x207e64u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_207e68:
    // 0x207e68: 0x4600a801
    ctx->pc = 0x207e68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_207e6c:
    // 0x207e6c: 0x4601081a
    ctx->pc = 0x207e6cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_207e70:
    // 0x207e70: 0xc06c2a8
label_207e74:
    if (ctx->pc == 0x207E74u) {
        ctx->pc = 0x207E74u;
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
        ctx->pc = 0x207E78u;
        goto label_207e78;
    }
    ctx->pc = 0x207E70u;
    SET_GPR_U32(ctx, 31, 0x207E78u);
    ctx->pc = 0x207E74u;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
    ctx->pc = 0x1B0AA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0AA0_0x1b0aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207E78u; }
        else if (ctx->pc != 0x207E78u) { ctx->pc = 0x207E78u; }
    }
    if (ctx->pc != 0x207E78u) { return; }
    ctx->pc = 0x207E78u;
label_207e78:
    // 0x207e78: 0xc6421df8
    ctx->pc = 0x207e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 7672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_207e7c:
    // 0x207e7c: 0x3c0240f0
    ctx->pc = 0x207e7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16624 << 16));
label_207e80:
    // 0x207e80: 0x44820800
    ctx->pc = 0x207e80u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
label_207e84:
    // 0x207e84: 0x0
    ctx->pc = 0x207e84u;
    // NOP
label_207e88:
    // 0x207e88: 0x46001001
    ctx->pc = 0x207e88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_207e8c:
    // 0x207e8c: 0x46010036
    ctx->pc = 0x207e8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_207e90:
    // 0x207e90: 0x0
    ctx->pc = 0x207e90u;
    // NOP
label_207e94:
    // 0x207e94: 0x4500000a
label_207e98:
    if (ctx->pc == 0x207E98u) {
        ctx->pc = 0x207E9Cu;
        goto label_207e9c;
    }
    ctx->pc = 0x207E94u;
    {
        const bool branch_taken_0x207e94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x207e94) {
            ctx->pc = 0x207EC0u;
            goto label_207ec0;
        }
    }
    ctx->pc = 0x207E9Cu;
label_207e9c:
    // 0x207e9c: 0x26310001
    ctx->pc = 0x207e9cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_207ea0:
    // 0x207ea0: 0x26100002
    ctx->pc = 0x207ea0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 2));
label_207ea4:
    // 0x207ea4: 0x0
    ctx->pc = 0x207ea4u;
    // NOP
label_207ea8:
    // 0x207ea8: 0x8e431dec
    ctx->pc = 0x207ea8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 7660)));
label_207eac:
    // 0x207eac: 0x84620002
    ctx->pc = 0x207eacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_207eb0:
    // 0x207eb0: 0x202102a
    ctx->pc = 0x207eb0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
label_207eb4:
    // 0x207eb4: 0x1440ffe4
label_207eb8:
    if (ctx->pc == 0x207EB8u) {
        ctx->pc = 0x207EBCu;
        goto label_207ebc;
    }
    ctx->pc = 0x207EB4u;
    {
        const bool branch_taken_0x207eb4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x207eb4) {
            ctx->pc = 0x207E48u;
            goto label_207e48;
        }
    }
    ctx->pc = 0x207EBCu;
label_207ebc:
    // 0x207ebc: 0x0
    ctx->pc = 0x207ebcu;
    // NOP
label_207ec0:
    // 0x207ec0: 0x8e421dec
    ctx->pc = 0x207ec0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 7660)));
label_207ec4:
    // 0x207ec4: 0x84420002
    ctx->pc = 0x207ec4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_207ec8:
    // 0x207ec8: 0x202082a
    ctx->pc = 0x207ec8u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
label_207ecc:
    // 0x207ecc: 0x10200021
label_207ed0:
    if (ctx->pc == 0x207ED0u) {
        ctx->pc = 0x207ED4u;
        goto label_207ed4;
    }
    ctx->pc = 0x207ECCu;
    {
        const bool branch_taken_0x207ecc = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x207ecc) {
            ctx->pc = 0x207F54u;
            goto label_207f54;
        }
    }
    ctx->pc = 0x207ED4u;
label_207ed4:
    // 0x207ed4: 0x8e44000c
    ctx->pc = 0x207ed4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_207ed8:
    // 0x207ed8: 0x3c031000
    ctx->pc = 0x207ed8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
label_207edc:
    // 0x207edc: 0x2402dfff
    ctx->pc = 0x207edcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294959103));
label_207ee0:
    // 0x207ee0: 0x72402e28
    ctx->pc = 0x207ee0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_207ee4:
    // 0x207ee4: 0x831825
    ctx->pc = 0x207ee4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_207ee8:
    // 0x207ee8: 0xae43000c
    ctx->pc = 0x207ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
label_207eec:
    // 0x207eec: 0x8e43000c
    ctx->pc = 0x207eecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_207ef0:
    // 0x207ef0: 0x621024
    ctx->pc = 0x207ef0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_207ef4:
    // 0x207ef4: 0x12400002
label_207ef8:
    if (ctx->pc == 0x207EF8u) {
        ctx->pc = 0x207EF8u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->pc = 0x207EFCu;
        goto label_207efc;
    }
    ctx->pc = 0x207EF4u;
    {
        const bool branch_taken_0x207ef4 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x207EF8u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x207ef4) {
            ctx->pc = 0x207F00u;
            goto label_207f00;
        }
    }
    ctx->pc = 0x207EFCu;
label_207efc:
    // 0x207efc: 0x24a50030
    ctx->pc = 0x207efcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 48));
label_207f00:
    // 0x207f00: 0x8e431dec
    ctx->pc = 0x207f00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 7660)));
label_207f04:
    // 0x207f04: 0x3c02004a
    ctx->pc = 0x207f04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
label_207f08:
    // 0x207f08: 0x72003e28
    ctx->pc = 0x207f08u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_207f0c:
    // 0x207f0c: 0x2444e8e0
    ctx->pc = 0x207f0cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294961376));
label_207f10:
    // 0x207f10: 0x84660000
    ctx->pc = 0x207f10u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_207f14:
    // 0x207f14: 0xc07eabc
label_207f18:
    if (ctx->pc == 0x207F18u) {
        ctx->pc = 0x207F18u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x207F1Cu;
        goto label_207f1c;
    }
    ctx->pc = 0x207F14u;
    SET_GPR_U32(ctx, 31, 0x207F1Cu);
    ctx->pc = 0x207F18u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x1FAAF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        motSupplement__12BodyMgrClassFP10MotObjTaskiii_0x1faaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207F1Cu; }
        else if (ctx->pc != 0x207F1Cu) { ctx->pc = 0x207F1Cu; }
    }
    if (ctx->pc != 0x207F1Cu) { return; }
    ctx->pc = 0x207F1Cu;
label_207f1c:
    // 0x207f1c: 0x8f848c48
    ctx->pc = 0x207f1cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
label_207f20:
    // 0x207f20: 0x70002e28
    ctx->pc = 0x207f20u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_207f24:
    // 0x207f24: 0xc072658
label_207f28:
    if (ctx->pc == 0x207F28u) {
        ctx->pc = 0x207F28u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x207F2Cu;
        goto label_207f2c;
    }
    ctx->pc = 0x207F24u;
    SET_GPR_U32(ctx, 31, 0x207F2Cu);
    ctx->pc = 0x207F28u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x1C9960u;
    {
        const uint32_t __entryPc = ctx->pc;
        chgCafsIdx__10CameraTaskFii_0x1c9960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207F2Cu; }
        else if (ctx->pc != 0x207F2Cu) { ctx->pc = 0x207F2Cu; }
    }
    if (ctx->pc != 0x207F2Cu) { return; }
    ctx->pc = 0x207F2Cu;
label_207f2c:
    // 0x207f2c: 0x3c023cc4
    ctx->pc = 0x207f2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)15556 << 16));
label_207f30:
    // 0x207f30: 0x34429ba6
    ctx->pc = 0x207f30u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 39846));
label_207f34:
    // 0x207f34: 0xae421e30
    ctx->pc = 0x207f34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7728), GPR_U32(ctx, 2));
label_207f38:
    // 0x207f38: 0x24020001
    ctx->pc = 0x207f38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_207f3c:
    // 0x207f3c: 0xa6421e34
    ctx->pc = 0x207f3cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 7732), (uint16_t)GPR_U32(ctx, 2));
label_207f40:
    // 0x207f40: 0x2402ffff
    ctx->pc = 0x207f40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_207f44:
    // 0x207f44: 0xa6421e36
    ctx->pc = 0x207f44u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 7734), (uint16_t)GPR_U32(ctx, 2));
label_207f48:
    // 0x207f48: 0x24020002
    ctx->pc = 0x207f48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_207f4c:
    // 0x207f4c: 0x10000023
label_207f50:
    if (ctx->pc == 0x207F50u) {
        ctx->pc = 0x207F50u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 7608), GPR_U32(ctx, 2));
        ctx->pc = 0x207F54u;
        goto label_207f54;
    }
    ctx->pc = 0x207F4Cu;
    {
        const bool branch_taken_0x207f4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x207F50u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 7608), GPR_U32(ctx, 2));
        if (branch_taken_0x207f4c) {
            ctx->pc = 0x207FDCu;
            goto label_207fdc;
        }
    }
    ctx->pc = 0x207F54u;
label_207f54:
    // 0x207f54: 0x82421e00
    ctx->pc = 0x207f54u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 7680)));
label_207f58:
    // 0x207f58: 0x2404ffff
    ctx->pc = 0x207f58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
label_207f5c:
    // 0x207f5c: 0x10440005
label_207f60:
    if (ctx->pc == 0x207F60u) {
        ctx->pc = 0x207F60u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x207F64u;
        goto label_207f64;
    }
    ctx->pc = 0x207F5Cu;
    {
        const bool branch_taken_0x207f5c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        ctx->pc = 0x207F60u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
        if (branch_taken_0x207f5c) {
            ctx->pc = 0x207F74u;
            goto label_207f74;
        }
    }
    ctx->pc = 0x207F64u;
label_207f64:
    // 0x207f64: 0x27828b60
    ctx->pc = 0x207f64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 28), 4294937440));
label_207f68:
    // 0x207f68: 0x431021
    ctx->pc = 0x207f68u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_207f6c:
    // 0x207f6c: 0xac400000
    ctx->pc = 0x207f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_207f70:
    // 0x207f70: 0xa2441e00
    ctx->pc = 0x207f70u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 7680), (uint8_t)GPR_U32(ctx, 4));
label_207f74:
    // 0x207f74: 0x8e431db0
    ctx->pc = 0x207f74u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 7600)));
label_207f78:
    // 0x207f78: 0x3c020027
    ctx->pc = 0x207f78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
label_207f7c:
    // 0x207f7c: 0x244229e8
    ctx->pc = 0x207f7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10728));
label_207f80:
    // 0x207f80: 0x72402628
    ctx->pc = 0x207f80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_207f84:
    // 0x207f84: 0x31880
    ctx->pc = 0x207f84u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_207f88:
    // 0x207f88: 0x431021
    ctx->pc = 0x207f88u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_207f8c:
    // 0x207f8c: 0x8c420000
    ctx->pc = 0x207f8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_207f90:
    // 0x207f90: 0xc0829ac
label_207f94:
    if (ctx->pc == 0x207F94u) {
        ctx->pc = 0x207F94u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x207F98u;
        goto label_207f98;
    }
    ctx->pc = 0x207F90u;
    SET_GPR_U32(ctx, 31, 0x207F98u);
    ctx->pc = 0x207F94u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 16));
    ctx->pc = 0x20A6B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        motionSelect__10PeopleTaskFPi_0x20a6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207F98u; }
        else if (ctx->pc != 0x207F98u) { ctx->pc = 0x207F98u; }
    }
    if (ctx->pc != 0x207F98u) { return; }
    ctx->pc = 0x207F98u;
label_207f98:
    // 0x207f98: 0x2143c
    ctx->pc = 0x207f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_207f9c:
    // 0x207f9c: 0x2143f
    ctx->pc = 0x207f9cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_207fa0:
    // 0x207fa0: 0xae421dcc
    ctx->pc = 0x207fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7628), GPR_U32(ctx, 2));
label_207fa4:
    // 0x207fa4: 0x12400002
label_207fa8:
    if (ctx->pc == 0x207FA8u) {
        ctx->pc = 0x207FA8u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        ctx->pc = 0x207FACu;
        goto label_207fac;
    }
    ctx->pc = 0x207FA4u;
    {
        const bool branch_taken_0x207fa4 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x207FA8u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        if (branch_taken_0x207fa4) {
            ctx->pc = 0x207FB0u;
            goto label_207fb0;
        }
    }
    ctx->pc = 0x207FACu;
label_207fac:
    // 0x207fac: 0x24a50030
    ctx->pc = 0x207facu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 48));
label_207fb0:
    // 0x207fb0: 0x8e461dcc
    ctx->pc = 0x207fb0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 7628)));
label_207fb4:
    // 0x207fb4: 0x3c02004a
    ctx->pc = 0x207fb4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
label_207fb8:
    // 0x207fb8: 0x2444e8e0
    ctx->pc = 0x207fb8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294961376));
label_207fbc:
    // 0x207fbc: 0x70003e28
    ctx->pc = 0x207fbcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_207fc0:
    // 0x207fc0: 0xc07eabc
label_207fc4:
    if (ctx->pc == 0x207FC4u) {
        ctx->pc = 0x207FC4u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x207FC8u;
        goto label_207fc8;
    }
    ctx->pc = 0x207FC0u;
    SET_GPR_U32(ctx, 31, 0x207FC8u);
    ctx->pc = 0x207FC4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x1FAAF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        motSupplement__12BodyMgrClassFP10MotObjTaskiii_0x1faaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207FC8u; }
        else if (ctx->pc != 0x207FC8u) { ctx->pc = 0x207FC8u; }
    }
    if (ctx->pc != 0x207FC8u) { return; }
    ctx->pc = 0x207FC8u;
label_207fc8:
    // 0x207fc8: 0x2402fffe
    ctx->pc = 0x207fc8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
label_207fcc:
    // 0x207fcc: 0xae421dd0
    ctx->pc = 0x207fccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7632), GPR_U32(ctx, 2));
label_207fd0:
    // 0x207fd0: 0x24020005
    ctx->pc = 0x207fd0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
label_207fd4:
    // 0x207fd4: 0x10000121
label_207fd8:
    if (ctx->pc == 0x207FD8u) {
        ctx->pc = 0x207FD8u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 7608), GPR_U32(ctx, 2));
        ctx->pc = 0x207FDCu;
        goto label_207fdc;
    }
    ctx->pc = 0x207FD4u;
    {
        const bool branch_taken_0x207fd4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x207FD8u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 7608), GPR_U32(ctx, 2));
        if (branch_taken_0x207fd4) {
            ctx->pc = 0x20845Cu;
            goto label_20845c;
        }
    }
    ctx->pc = 0x207FDCu;
label_207fdc:
    // 0x207fdc: 0x8e421dec
    ctx->pc = 0x207fdcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 7660)));
label_207fe0:
    // 0x207fe0: 0xc6400044
    ctx->pc = 0x207fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_207fe4:
    // 0x207fe4: 0x84420002
    ctx->pc = 0x207fe4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_207fe8:
    // 0x207fe8: 0x2442fff1
    ctx->pc = 0x207fe8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967281));
label_207fec:
    // 0x207fec: 0x44820800
    ctx->pc = 0x207fecu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
label_207ff0:
    // 0x207ff0: 0x0
    ctx->pc = 0x207ff0u;
    // NOP
label_207ff4:
    // 0x207ff4: 0x46800860
    ctx->pc = 0x207ff4u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_207ff8:
    // 0x207ff8: 0x46010034
    ctx->pc = 0x207ff8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_207ffc:
    // 0x207ffc: 0x0
    ctx->pc = 0x207ffcu;
    // NOP
label_208000:
    // 0x208000: 0x45010116
label_208004:
    if (ctx->pc == 0x208004u) {
        ctx->pc = 0x208008u;
        goto label_208008;
    }
    ctx->pc = 0x208000u;
    {
        const bool branch_taken_0x208000 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x208000) {
            ctx->pc = 0x20845Cu;
            goto label_20845c;
        }
    }
    ctx->pc = 0x208008u;
label_208008:
    // 0x208008: 0x8e43000c
    ctx->pc = 0x208008u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_20800c:
    // 0x20800c: 0x3c02fff7
    ctx->pc = 0x20800cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)65527 << 16));
label_208010:
    // 0x208010: 0x3442ffff
    ctx->pc = 0x208010u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
label_208014:
    // 0x208014: 0x34632000
    ctx->pc = 0x208014u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 8192));
label_208018:
    // 0x208018: 0xae43000c
    ctx->pc = 0x208018u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
label_20801c:
    // 0x20801c: 0x8e43000c
    ctx->pc = 0x20801cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_208020:
    // 0x208020: 0x621024
    ctx->pc = 0x208020u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_208024:
    // 0x208024: 0xae42000c
    ctx->pc = 0x208024u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_208028:
    // 0x208028: 0x8e421d74
    ctx->pc = 0x208028u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 7540)));
label_20802c:
    // 0x20802c: 0x30420004
    ctx->pc = 0x20802cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
label_208030:
    // 0x208030: 0x10400019
label_208034:
    if (ctx->pc == 0x208034u) {
        ctx->pc = 0x208034u;
        SET_GPR_U32(ctx, 2, ((uint32_t)15733 << 16));
        ctx->pc = 0x208038u;
        goto label_208038;
    }
    ctx->pc = 0x208030u;
    {
        const bool branch_taken_0x208030 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x208034u;
        SET_GPR_U32(ctx, 2, ((uint32_t)15733 << 16));
        if (branch_taken_0x208030) {
            ctx->pc = 0x208098u;
            goto label_208098;
        }
    }
    ctx->pc = 0x208038u;
label_208038:
    // 0x208038: 0x8e44000c
    ctx->pc = 0x208038u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_20803c:
    // 0x20803c: 0x3c02bfff
    ctx->pc = 0x20803cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49151 << 16));
label_208040:
    // 0x208040: 0x3443ffff
    ctx->pc = 0x208040u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), 65535));
label_208044:
    // 0x208044: 0x2402fffb
    ctx->pc = 0x208044u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967291));
label_208048:
    // 0x208048: 0x72402e28
    ctx->pc = 0x208048u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_20804c:
    // 0x20804c: 0x831824
    ctx->pc = 0x20804cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_208050:
    // 0x208050: 0xae43000c
    ctx->pc = 0x208050u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
label_208054:
    // 0x208054: 0x8e431d74
    ctx->pc = 0x208054u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 7540)));
label_208058:
    // 0x208058: 0x621024
    ctx->pc = 0x208058u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20805c:
    // 0x20805c: 0x12400002
label_208060:
    if (ctx->pc == 0x208060u) {
        ctx->pc = 0x208060u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 7540), GPR_U32(ctx, 2));
        ctx->pc = 0x208064u;
        goto label_208064;
    }
    ctx->pc = 0x20805Cu;
    {
        const bool branch_taken_0x20805c = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x208060u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 7540), GPR_U32(ctx, 2));
        if (branch_taken_0x20805c) {
            ctx->pc = 0x208068u;
            goto label_208068;
        }
    }
    ctx->pc = 0x208064u;
label_208064:
    // 0x208064: 0x24a50030
    ctx->pc = 0x208064u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 48));
label_208068:
    // 0x208068: 0xc6400044
    ctx->pc = 0x208068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20806c:
    // 0x20806c: 0x3c02004a
    ctx->pc = 0x20806cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
label_208070:
    // 0x208070: 0x24060001
    ctx->pc = 0x208070u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_208074:
    // 0x208074: 0x8e470034
    ctx->pc = 0x208074u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_208078:
    // 0x208078: 0x2444e8e0
    ctx->pc = 0x208078u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294961376));
label_20807c:
    // 0x20807c: 0x2409000e
    ctx->pc = 0x20807cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 14));
label_208080:
    // 0x208080: 0x46000024
    ctx->pc = 0x208080u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
label_208084:
    // 0x208084: 0x70c05628
    ctx->pc = 0x208084u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_208088:
    // 0x208088: 0x44020000
    ctx->pc = 0x208088u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
label_20808c:
    // 0x20808c: 0xc07ebc4
label_208090:
    if (ctx->pc == 0x208090u) {
        ctx->pc = 0x208090u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 15));
        ctx->pc = 0x208094u;
        goto label_208094;
    }
    ctx->pc = 0x20808Cu;
    SET_GPR_U32(ctx, 31, 0x208094u);
    ctx->pc = 0x208090u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 15));
    ctx->pc = 0x1FAF10u;
    {
        const uint32_t __entryPc = ctx->pc;
        motDivOnce__12BodyMgrClassFP10MotObjTaskiiiii_0x1faf10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208094u; }
        else if (ctx->pc != 0x208094u) { ctx->pc = 0x208094u; }
    }
    if (ctx->pc != 0x208094u) { return; }
    ctx->pc = 0x208094u;
label_208094:
    // 0x208094: 0x3c023d75
    ctx->pc = 0x208094u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15733 << 16));
label_208098:
    // 0x208098: 0x3442c290
    ctx->pc = 0x208098u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 49808));
label_20809c:
    // 0x20809c: 0xae421e30
    ctx->pc = 0x20809cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7728), GPR_U32(ctx, 2));
label_2080a0:
    // 0x2080a0: 0x24040001
    ctx->pc = 0x2080a0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_2080a4:
    // 0x2080a4: 0xa6441e34
    ctx->pc = 0x2080a4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 7732), (uint16_t)GPR_U32(ctx, 4));
label_2080a8:
    // 0x2080a8: 0x2402ffff
    ctx->pc = 0x2080a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2080ac:
    // 0x2080ac: 0xa6421e36
    ctx->pc = 0x2080acu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 7734), (uint16_t)GPR_U32(ctx, 2));
label_2080b0:
    // 0x2080b0: 0x83838ba8
    ctx->pc = 0x2080b0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937512)));
label_2080b4:
    // 0x2080b4: 0x24020004
    ctx->pc = 0x2080b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_2080b8:
    // 0x2080b8: 0x1062002f
label_2080bc:
    if (ctx->pc == 0x2080BCu) {
        ctx->pc = 0x2080BCu;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x2080C0u;
        goto label_2080c0;
    }
    ctx->pc = 0x2080B8u;
    {
        const bool branch_taken_0x2080b8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2080BCu;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x2080b8) {
            ctx->pc = 0x208178u;
            goto label_208178;
        }
    }
    ctx->pc = 0x2080C0u;
label_2080c0:
    // 0x2080c0: 0x24020003
    ctx->pc = 0x2080c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_2080c4:
    // 0x2080c4: 0x1062001f
label_2080c8:
    if (ctx->pc == 0x2080C8u) {
        ctx->pc = 0x2080C8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2080CCu;
        goto label_2080cc;
    }
    ctx->pc = 0x2080C4u;
    {
        const bool branch_taken_0x2080c4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2080C8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2080c4) {
            ctx->pc = 0x208144u;
            goto label_208144;
        }
    }
    ctx->pc = 0x2080CCu;
label_2080cc:
    // 0x2080cc: 0x10620011
label_2080d0:
    if (ctx->pc == 0x2080D0u) {
        ctx->pc = 0x2080D4u;
        goto label_2080d4;
    }
    ctx->pc = 0x2080CCu;
    {
        const bool branch_taken_0x2080cc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2080cc) {
            ctx->pc = 0x208114u;
            goto label_208114;
        }
    }
    ctx->pc = 0x2080D4u;
label_2080d4:
    // 0x2080d4: 0x10640003
label_2080d8:
    if (ctx->pc == 0x2080D8u) {
        ctx->pc = 0x2080DCu;
        goto label_2080dc;
    }
    ctx->pc = 0x2080D4u;
    {
        const bool branch_taken_0x2080d4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x2080d4) {
            ctx->pc = 0x2080E4u;
            goto label_2080e4;
        }
    }
    ctx->pc = 0x2080DCu;
label_2080dc:
    // 0x2080dc: 0x10000031
label_2080e0:
    if (ctx->pc == 0x2080E0u) {
        ctx->pc = 0x2080E4u;
        goto label_2080e4;
    }
    ctx->pc = 0x2080DCu;
    {
        const bool branch_taken_0x2080dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2080dc) {
            ctx->pc = 0x2081A4u;
            goto label_2081a4;
        }
    }
    ctx->pc = 0x2080E4u;
label_2080e4:
    // 0x2080e4: 0xc069fb8
label_2080e8:
    if (ctx->pc == 0x2080E8u) {
        ctx->pc = 0x2080ECu;
        goto label_2080ec;
    }
    ctx->pc = 0x2080E4u;
    SET_GPR_U32(ctx, 31, 0x2080ECu);
    ctx->pc = 0x1A7EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRand_0x1a7ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2080ECu; }
        else if (ctx->pc != 0x2080ECu) { ctx->pc = 0x2080ECu; }
    }
    if (ctx->pc != 0x2080ECu) { return; }
    ctx->pc = 0x2080ECu;
label_2080ec:
    // 0x2080ec: 0x4410004
label_2080f0:
    if (ctx->pc == 0x2080F0u) {
        ctx->pc = 0x2080F0u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x2080F4u;
        goto label_2080f4;
    }
    ctx->pc = 0x2080ECu;
    {
        const bool branch_taken_0x2080ec = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2080F0u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x2080ec) {
            ctx->pc = 0x208100u;
            goto label_208100;
        }
    }
    ctx->pc = 0x2080F4u;
label_2080f4:
    // 0x2080f4: 0x10600003
label_2080f8:
    if (ctx->pc == 0x2080F8u) {
        ctx->pc = 0x2080F8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)15 << 16));
        ctx->pc = 0x2080FCu;
        goto label_2080fc;
    }
    ctx->pc = 0x2080F4u;
    {
        const bool branch_taken_0x2080f4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2080F8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)15 << 16));
        if (branch_taken_0x2080f4) {
            ctx->pc = 0x208104u;
            goto label_208104;
        }
    }
    ctx->pc = 0x2080FCu;
label_2080fc:
    // 0x2080fc: 0x2463fffe
    ctx->pc = 0x2080fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967294));
label_208100:
    // 0x208100: 0x3c02000f
    ctx->pc = 0x208100u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15 << 16));
label_208104:
    // 0x208104: 0x3445001b
    ctx->pc = 0x208104u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 27));
label_208108:
    // 0x208108: 0x3442001c
    ctx->pc = 0x208108u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 28));
label_20810c:
    // 0x20810c: 0x10000025
label_208110:
    if (ctx->pc == 0x208110u) {
        ctx->pc = 0x208110u;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 2));
        ctx->pc = 0x208114u;
        goto label_208114;
    }
    ctx->pc = 0x20810Cu;
    {
        const bool branch_taken_0x20810c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x208110u;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 2));
        if (branch_taken_0x20810c) {
            ctx->pc = 0x2081A4u;
            goto label_2081a4;
        }
    }
    ctx->pc = 0x208114u;
label_208114:
    // 0x208114: 0xc069fb8
label_208118:
    if (ctx->pc == 0x208118u) {
        ctx->pc = 0x20811Cu;
        goto label_20811c;
    }
    ctx->pc = 0x208114u;
    SET_GPR_U32(ctx, 31, 0x20811Cu);
    ctx->pc = 0x1A7EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRand_0x1a7ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20811Cu; }
        else if (ctx->pc != 0x20811Cu) { ctx->pc = 0x20811Cu; }
    }
    if (ctx->pc != 0x20811Cu) { return; }
    ctx->pc = 0x20811Cu;
label_20811c:
    // 0x20811c: 0x4410004
label_208120:
    if (ctx->pc == 0x208120u) {
        ctx->pc = 0x208120u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x208124u;
        goto label_208124;
    }
    ctx->pc = 0x20811Cu;
    {
        const bool branch_taken_0x20811c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x208120u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x20811c) {
            ctx->pc = 0x208130u;
            goto label_208130;
        }
    }
    ctx->pc = 0x208124u;
label_208124:
    // 0x208124: 0x10600003
label_208128:
    if (ctx->pc == 0x208128u) {
        ctx->pc = 0x208128u;
        SET_GPR_U32(ctx, 2, ((uint32_t)25 << 16));
        ctx->pc = 0x20812Cu;
        goto label_20812c;
    }
    ctx->pc = 0x208124u;
    {
        const bool branch_taken_0x208124 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x208128u;
        SET_GPR_U32(ctx, 2, ((uint32_t)25 << 16));
        if (branch_taken_0x208124) {
            ctx->pc = 0x208134u;
            goto label_208134;
        }
    }
    ctx->pc = 0x20812Cu;
label_20812c:
    // 0x20812c: 0x2463fffe
    ctx->pc = 0x20812cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967294));
label_208130:
    // 0x208130: 0x3c020019
    ctx->pc = 0x208130u;
    SET_GPR_U32(ctx, 2, ((uint32_t)25 << 16));
label_208134:
    // 0x208134: 0x34450010
    ctx->pc = 0x208134u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 16));
label_208138:
    // 0x208138: 0x34420011
    ctx->pc = 0x208138u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 17));
label_20813c:
    // 0x20813c: 0x10000019
label_208140:
    if (ctx->pc == 0x208140u) {
        ctx->pc = 0x208140u;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 2));
        ctx->pc = 0x208144u;
        goto label_208144;
    }
    ctx->pc = 0x20813Cu;
    {
        const bool branch_taken_0x20813c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x208140u;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 2));
        if (branch_taken_0x20813c) {
            ctx->pc = 0x2081A4u;
            goto label_2081a4;
        }
    }
    ctx->pc = 0x208144u;
label_208144:
    // 0x208144: 0xc069fb8
label_208148:
    if (ctx->pc == 0x208148u) {
        ctx->pc = 0x20814Cu;
        goto label_20814c;
    }
    ctx->pc = 0x208144u;
    SET_GPR_U32(ctx, 31, 0x20814Cu);
    ctx->pc = 0x1A7EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRand_0x1a7ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20814Cu; }
        else if (ctx->pc != 0x20814Cu) { ctx->pc = 0x20814Cu; }
    }
    if (ctx->pc != 0x20814Cu) { return; }
    ctx->pc = 0x20814Cu;
label_20814c:
    // 0x20814c: 0x4410004
label_208150:
    if (ctx->pc == 0x208150u) {
        ctx->pc = 0x208150u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x208154u;
        goto label_208154;
    }
    ctx->pc = 0x20814Cu;
    {
        const bool branch_taken_0x20814c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x208150u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x20814c) {
            ctx->pc = 0x208160u;
            goto label_208160;
        }
    }
    ctx->pc = 0x208154u;
label_208154:
    // 0x208154: 0x10600003
label_208158:
    if (ctx->pc == 0x208158u) {
        ctx->pc = 0x208158u;
        SET_GPR_U32(ctx, 2, ((uint32_t)17 << 16));
        ctx->pc = 0x20815Cu;
        goto label_20815c;
    }
    ctx->pc = 0x208154u;
    {
        const bool branch_taken_0x208154 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x208158u;
        SET_GPR_U32(ctx, 2, ((uint32_t)17 << 16));
        if (branch_taken_0x208154) {
            ctx->pc = 0x208164u;
            goto label_208164;
        }
    }
    ctx->pc = 0x20815Cu;
label_20815c:
    // 0x20815c: 0x2463fffe
    ctx->pc = 0x20815cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967294));
label_208160:
    // 0x208160: 0x3c020011
    ctx->pc = 0x208160u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17 << 16));
label_208164:
    // 0x208164: 0x3445002b
    ctx->pc = 0x208164u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 43));
label_208168:
    // 0x208168: 0x3c020010
    ctx->pc = 0x208168u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16 << 16));
label_20816c:
    // 0x20816c: 0x34420033
    ctx->pc = 0x20816cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 51));
label_208170:
    // 0x208170: 0x1000000c
label_208174:
    if (ctx->pc == 0x208174u) {
        ctx->pc = 0x208174u;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 2));
        ctx->pc = 0x208178u;
        goto label_208178;
    }
    ctx->pc = 0x208170u;
    {
        const bool branch_taken_0x208170 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x208174u;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 2));
        if (branch_taken_0x208170) {
            ctx->pc = 0x2081A4u;
            goto label_2081a4;
        }
    }
    ctx->pc = 0x208178u;
label_208178:
    // 0x208178: 0xc069fb8
label_20817c:
    if (ctx->pc == 0x20817Cu) {
        ctx->pc = 0x208180u;
        goto label_208180;
    }
    ctx->pc = 0x208178u;
    SET_GPR_U32(ctx, 31, 0x208180u);
    ctx->pc = 0x1A7EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRand_0x1a7ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208180u; }
        else if (ctx->pc != 0x208180u) { ctx->pc = 0x208180u; }
    }
    if (ctx->pc != 0x208180u) { return; }
    ctx->pc = 0x208180u;
label_208180:
    // 0x208180: 0x4410004
label_208184:
    if (ctx->pc == 0x208184u) {
        ctx->pc = 0x208184u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x208188u;
        goto label_208188;
    }
    ctx->pc = 0x208180u;
    {
        const bool branch_taken_0x208180 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x208184u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x208180) {
            ctx->pc = 0x208194u;
            goto label_208194;
        }
    }
    ctx->pc = 0x208188u;
label_208188:
    // 0x208188: 0x10600003
label_20818c:
    if (ctx->pc == 0x20818Cu) {
        ctx->pc = 0x20818Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)10 << 16));
        ctx->pc = 0x208190u;
        goto label_208190;
    }
    ctx->pc = 0x208188u;
    {
        const bool branch_taken_0x208188 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x20818Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)10 << 16));
        if (branch_taken_0x208188) {
            ctx->pc = 0x208198u;
            goto label_208198;
        }
    }
    ctx->pc = 0x208190u;
label_208190:
    // 0x208190: 0x2463fffe
    ctx->pc = 0x208190u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967294));
label_208194:
    // 0x208194: 0x3c02000a
    ctx->pc = 0x208194u;
    SET_GPR_U32(ctx, 2, ((uint32_t)10 << 16));
label_208198:
    // 0x208198: 0x34450010
    ctx->pc = 0x208198u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 16));
label_20819c:
    // 0x20819c: 0x34420011
    ctx->pc = 0x20819cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 17));
label_2081a0:
    // 0x2081a0: 0x43280a
    ctx->pc = 0x2081a0u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 2));
label_2081a4:
    // 0x2081a4: 0x10a00009
label_2081a8:
    if (ctx->pc == 0x2081A8u) {
        ctx->pc = 0x2081A8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2081ACu;
        goto label_2081ac;
    }
    ctx->pc = 0x2081A4u;
    {
        const bool branch_taken_0x2081a4 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x2081A8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x2081a4) {
            ctx->pc = 0x2081CCu;
            goto label_2081cc;
        }
    }
    ctx->pc = 0x2081ACu;
label_2081ac:
    // 0x2081ac: 0x82430024
    ctx->pc = 0x2081acu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 36)));
label_2081b0:
    // 0x2081b0: 0x3c020051
    ctx->pc = 0x2081b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
label_2081b4:
    // 0x2081b4: 0x244434f0
    ctx->pc = 0x2081b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
label_2081b8:
    // 0x2081b8: 0x70003e28
    ctx->pc = 0x2081b8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2081bc:
    // 0x2081bc: 0x24080040
    ctx->pc = 0x2081bcu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 64));
label_2081c0:
    // 0x2081c0: 0xc086018
label_2081c4:
    if (ctx->pc == 0x2081C4u) {
        ctx->pc = 0x2081C4u;
        SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 3), 12));
        ctx->pc = 0x2081C8u;
        goto label_2081c8;
    }
    ctx->pc = 0x2081C0u;
    SET_GPR_U32(ctx, 31, 0x2081C8u);
    ctx->pc = 0x2081C4u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 3), 12));
    ctx->pc = 0x218060u;
    {
        const uint32_t __entryPc = ctx->pc;
        seqRequest__13SoundMgrClassFiiii_0x218060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2081C8u; }
        else if (ctx->pc != 0x2081C8u) { ctx->pc = 0x2081C8u; }
    }
    if (ctx->pc != 0x2081C8u) { return; }
    ctx->pc = 0x2081C8u;
label_2081c8:
    // 0x2081c8: 0x24020003
    ctx->pc = 0x2081c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_2081cc:
    // 0x2081cc: 0xae421db8
    ctx->pc = 0x2081ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7608), GPR_U32(ctx, 2));
label_2081d0:
    // 0x2081d0: 0x8e431dec
    ctx->pc = 0x2081d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 7660)));
label_2081d4:
    // 0x2081d4: 0x3c023e4c
    ctx->pc = 0x2081d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15948 << 16));
label_2081d8:
    // 0x2081d8: 0x3442cccd
    ctx->pc = 0x2081d8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 52429));
label_2081dc:
    // 0x2081dc: 0x44821800
    ctx->pc = 0x2081dcu;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 2);
label_2081e0:
    // 0x2081e0: 0xc6420044
    ctx->pc = 0x2081e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2081e4:
    // 0x2081e4: 0x84620002
    ctx->pc = 0x2081e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_2081e8:
    // 0x2081e8: 0x44820000
    ctx->pc = 0x2081e8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_2081ec:
    // 0x2081ec: 0x0
    ctx->pc = 0x2081ecu;
    // NOP
label_2081f0:
    // 0x2081f0: 0x46800020
    ctx->pc = 0x2081f0u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_2081f4:
    // 0x2081f4: 0x46030001
    ctx->pc = 0x2081f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_2081f8:
    // 0x2081f8: 0x46001034
    ctx->pc = 0x2081f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2081fc:
    // 0x2081fc: 0x0
    ctx->pc = 0x2081fcu;
    // NOP
label_208200:
    // 0x208200: 0x45000011
label_208204:
    if (ctx->pc == 0x208204u) {
        ctx->pc = 0x208204u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        ctx->pc = 0x208208u;
        goto label_208208;
    }
    ctx->pc = 0x208200u;
    {
        const bool branch_taken_0x208200 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x208204u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        if (branch_taken_0x208200) {
            ctx->pc = 0x208248u;
            goto label_208248;
        }
    }
    ctx->pc = 0x208208u;
label_208208:
    // 0x208208: 0x8e430034
    ctx->pc = 0x208208u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_20820c:
    // 0x20820c: 0x3c023f80
    ctx->pc = 0x20820cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
label_208210:
    // 0x208210: 0x44820000
    ctx->pc = 0x208210u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_208214:
    // 0x208214: 0x3c0101fb
    ctx->pc = 0x208214u;
    SET_GPR_U32(ctx, 1, ((uint32_t)507 << 16));
label_208218:
    // 0x208218: 0x31040
    ctx->pc = 0x208218u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
label_20821c:
    // 0x20821c: 0x410821
    ctx->pc = 0x20821cu;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_208220:
    // 0x208220: 0x842273e4
    ctx->pc = 0x208220u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 29668)));
label_208224:
    // 0x208224: 0x44820800
    ctx->pc = 0x208224u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
label_208228:
    // 0x208228: 0x0
    ctx->pc = 0x208228u;
    // NOP
label_20822c:
    // 0x20822c: 0x46800860
    ctx->pc = 0x20822cu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_208230:
    // 0x208230: 0x46030841
    ctx->pc = 0x208230u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_208234:
    // 0x208234: 0x46000801
    ctx->pc = 0x208234u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_208238:
    // 0x208238: 0x46001034
    ctx->pc = 0x208238u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20823c:
    // 0x20823c: 0x0
    ctx->pc = 0x20823cu;
    // NOP
label_208240:
    // 0x208240: 0x45010086
label_208244:
    if (ctx->pc == 0x208244u) {
        ctx->pc = 0x208248u;
        goto label_208248;
    }
    ctx->pc = 0x208240u;
    {
        const bool branch_taken_0x208240 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x208240) {
            ctx->pc = 0x20845Cu;
            goto label_20845c;
        }
    }
    ctx->pc = 0x208248u;
label_208248:
    // 0x208248: 0xc0829c0
label_20824c:
    if (ctx->pc == 0x20824Cu) {
        ctx->pc = 0x20824Cu;
        WRITE32(ADD32(GPR_U32(ctx, 18), 7596), GPR_U32(ctx, 0));
        ctx->pc = 0x208250u;
        goto label_208250;
    }
    ctx->pc = 0x208248u;
    SET_GPR_U32(ctx, 31, 0x208250u);
    ctx->pc = 0x20824Cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7596), GPR_U32(ctx, 0));
    ctx->pc = 0x20A700u;
    {
        const uint32_t __entryPc = ctx->pc;
        damagePlayer__10PeopleTaskFv_0x20a700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208250u; }
        else if (ctx->pc != 0x208250u) { ctx->pc = 0x208250u; }
    }
    if (ctx->pc != 0x208250u) { return; }
    ctx->pc = 0x208250u;
label_208250:
    // 0x208250: 0x8f848c48
    ctx->pc = 0x208250u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
label_208254:
    // 0x208254: 0x70002e28
    ctx->pc = 0x208254u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_208258:
    // 0x208258: 0xc072658
label_20825c:
    if (ctx->pc == 0x20825Cu) {
        ctx->pc = 0x20825Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x208260u;
        goto label_208260;
    }
    ctx->pc = 0x208258u;
    SET_GPR_U32(ctx, 31, 0x208260u);
    ctx->pc = 0x20825Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1C9960u;
    {
        const uint32_t __entryPc = ctx->pc;
        chgCafsIdx__10CameraTaskFii_0x1c9960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208260u; }
        else if (ctx->pc != 0x208260u) { ctx->pc = 0x208260u; }
    }
    if (ctx->pc != 0x208260u) { return; }
    ctx->pc = 0x208260u;
label_208260:
    // 0x208260: 0x3c024080
    ctx->pc = 0x208260u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16512 << 16));
label_208264:
    // 0x208264: 0xae421d78
    ctx->pc = 0x208264u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7544), GPR_U32(ctx, 2));
label_208268:
    // 0x208268: 0x3c02bdf5
    ctx->pc = 0x208268u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48629 << 16));
label_20826c:
    // 0x20826c: 0x3442c290
    ctx->pc = 0x20826cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 49808));
label_208270:
    // 0x208270: 0xae421e30
    ctx->pc = 0x208270u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7728), GPR_U32(ctx, 2));
label_208274:
    // 0x208274: 0x24020001
    ctx->pc = 0x208274u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_208278:
    // 0x208278: 0xa6421e34
    ctx->pc = 0x208278u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 7732), (uint16_t)GPR_U32(ctx, 2));
label_20827c:
    // 0x20827c: 0x3c023f33
    ctx->pc = 0x20827cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16179 << 16));
label_208280:
    // 0x208280: 0xa6401e36
    ctx->pc = 0x208280u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 7734), (uint16_t)GPR_U32(ctx, 0));
label_208284:
    // 0x208284: 0x34423333
    ctx->pc = 0x208284u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 13107));
label_208288:
    // 0x208288: 0xae421e38
    ctx->pc = 0x208288u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7736), GPR_U32(ctx, 2));
label_20828c:
    // 0x20828c: 0x24020004
    ctx->pc = 0x20828cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_208290:
    // 0x208290: 0x10000072
label_208294:
    if (ctx->pc == 0x208294u) {
        ctx->pc = 0x208294u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 7608), GPR_U32(ctx, 2));
        ctx->pc = 0x208298u;
        goto label_208298;
    }
    ctx->pc = 0x208290u;
    {
        const bool branch_taken_0x208290 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x208294u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 7608), GPR_U32(ctx, 2));
        if (branch_taken_0x208290) {
            ctx->pc = 0x20845Cu;
            goto label_20845c;
        }
    }
    ctx->pc = 0x208298u;
label_208298:
    // 0x208298: 0xc6421d78
    ctx->pc = 0x208298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 7544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20829c:
    // 0x20829c: 0x44800000
    ctx->pc = 0x20829cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_2082a0:
    // 0x2082a0: 0x3c023f80
    ctx->pc = 0x2082a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
label_2082a4:
    // 0x2082a4: 0x44820800
    ctx->pc = 0x2082a4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
label_2082a8:
    // 0x2082a8: 0x0
    ctx->pc = 0x2082a8u;
    // NOP
label_2082ac:
    // 0x2082ac: 0x46001036
    ctx->pc = 0x2082acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2082b0:
    // 0x2082b0: 0x46011001
    ctx->pc = 0x2082b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_2082b4:
    // 0x2082b4: 0x45000069
label_2082b8:
    if (ctx->pc == 0x2082B8u) {
        ctx->pc = 0x2082B8u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 7544), bits); }
        ctx->pc = 0x2082BCu;
        goto label_2082bc;
    }
    ctx->pc = 0x2082B4u;
    {
        const bool branch_taken_0x2082b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2082B8u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 7544), bits); }
        if (branch_taken_0x2082b4) {
            ctx->pc = 0x20845Cu;
            goto label_20845c;
        }
    }
    ctx->pc = 0x2082BCu;
label_2082bc:
    // 0x2082bc: 0x8e45000c
    ctx->pc = 0x2082bcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2082c0:
    // 0x2082c0: 0x3c02efff
    ctx->pc = 0x2082c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61439 << 16));
label_2082c4:
    // 0x2082c4: 0x3443ffff
    ctx->pc = 0x2082c4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), 65535));
label_2082c8:
    // 0x2082c8: 0x3c020027
    ctx->pc = 0x2082c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
label_2082cc:
    // 0x2082cc: 0x244229e8
    ctx->pc = 0x2082ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10728));
label_2082d0:
    // 0x2082d0: 0x72402628
    ctx->pc = 0x2082d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_2082d4:
    // 0x2082d4: 0xa31824
    ctx->pc = 0x2082d4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2082d8:
    // 0x2082d8: 0xae43000c
    ctx->pc = 0x2082d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
label_2082dc:
    // 0x2082dc: 0x8e431db0
    ctx->pc = 0x2082dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 7600)));
label_2082e0:
    // 0x2082e0: 0x31880
    ctx->pc = 0x2082e0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_2082e4:
    // 0x2082e4: 0x431021
    ctx->pc = 0x2082e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2082e8:
    // 0x2082e8: 0x8c420000
    ctx->pc = 0x2082e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2082ec:
    // 0x2082ec: 0xc0829ac
label_2082f0:
    if (ctx->pc == 0x2082F0u) {
        ctx->pc = 0x2082F0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x2082F4u;
        goto label_2082f4;
    }
    ctx->pc = 0x2082ECu;
    SET_GPR_U32(ctx, 31, 0x2082F4u);
    ctx->pc = 0x2082F0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 16));
    ctx->pc = 0x20A6B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        motionSelect__10PeopleTaskFPi_0x20a6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2082F4u; }
        else if (ctx->pc != 0x2082F4u) { ctx->pc = 0x2082F4u; }
    }
    if (ctx->pc != 0x2082F4u) { return; }
    ctx->pc = 0x2082F4u;
label_2082f4:
    // 0x2082f4: 0x2143c
    ctx->pc = 0x2082f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_2082f8:
    // 0x2082f8: 0x2143f
    ctx->pc = 0x2082f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2082fc:
    // 0x2082fc: 0xae421dcc
    ctx->pc = 0x2082fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7628), GPR_U32(ctx, 2));
label_208300:
    // 0x208300: 0x12400002
label_208304:
    if (ctx->pc == 0x208304u) {
        ctx->pc = 0x208304u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        ctx->pc = 0x208308u;
        goto label_208308;
    }
    ctx->pc = 0x208300u;
    {
        const bool branch_taken_0x208300 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x208304u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        if (branch_taken_0x208300) {
            ctx->pc = 0x20830Cu;
            goto label_20830c;
        }
    }
    ctx->pc = 0x208308u;
label_208308:
    // 0x208308: 0x24a50030
    ctx->pc = 0x208308u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 48));
label_20830c:
    // 0x20830c: 0x8e461dcc
    ctx->pc = 0x20830cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 7628)));
label_208310:
    // 0x208310: 0x3c02004a
    ctx->pc = 0x208310u;
    SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
label_208314:
    // 0x208314: 0x2444e8e0
    ctx->pc = 0x208314u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294961376));
label_208318:
    // 0x208318: 0x70003e28
    ctx->pc = 0x208318u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20831c:
    // 0x20831c: 0xc07eabc
label_208320:
    if (ctx->pc == 0x208320u) {
        ctx->pc = 0x208320u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x208324u;
        goto label_208324;
    }
    ctx->pc = 0x20831Cu;
    SET_GPR_U32(ctx, 31, 0x208324u);
    ctx->pc = 0x208320u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x1FAAF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        motSupplement__12BodyMgrClassFP10MotObjTaskiii_0x1faaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208324u; }
        else if (ctx->pc != 0x208324u) { ctx->pc = 0x208324u; }
    }
    if (ctx->pc != 0x208324u) { return; }
    ctx->pc = 0x208324u;
label_208324:
    // 0x208324: 0x2402ffff
    ctx->pc = 0x208324u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_208328:
    // 0x208328: 0xae421dac
    ctx->pc = 0x208328u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7596), GPR_U32(ctx, 2));
label_20832c:
    // 0x20832c: 0xae401dd0
    ctx->pc = 0x20832cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7632), GPR_U32(ctx, 0));
label_208330:
    // 0x208330: 0x24020005
    ctx->pc = 0x208330u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
label_208334:
    // 0x208334: 0xae421db8
    ctx->pc = 0x208334u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7608), GPR_U32(ctx, 2));
label_208338:
    // 0x208338: 0x3c024100
    ctx->pc = 0x208338u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16640 << 16));
label_20833c:
    // 0x20833c: 0x10000047
label_208340:
    if (ctx->pc == 0x208340u) {
        ctx->pc = 0x208340u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 7544), GPR_U32(ctx, 2));
        ctx->pc = 0x208344u;
        goto label_208344;
    }
    ctx->pc = 0x20833Cu;
    {
        const bool branch_taken_0x20833c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x208340u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 7544), GPR_U32(ctx, 2));
        if (branch_taken_0x20833c) {
            ctx->pc = 0x20845Cu;
            goto label_20845c;
        }
    }
    ctx->pc = 0x208344u;
label_208344:
    // 0x208344: 0x34822000
    ctx->pc = 0x208344u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 4), 8192));
label_208348:
    // 0x208348: 0x10400013
label_20834c:
    if (ctx->pc == 0x20834Cu) {
        ctx->pc = 0x20834Cu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        ctx->pc = 0x208350u;
        goto label_208350;
    }
    ctx->pc = 0x208348u;
    {
        const bool branch_taken_0x208348 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20834Cu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        if (branch_taken_0x208348) {
            ctx->pc = 0x208398u;
            goto label_208398;
        }
    }
    ctx->pc = 0x208350u;
label_208350:
    // 0x208350: 0xc6421d78
    ctx->pc = 0x208350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 7544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_208354:
    // 0x208354: 0x44800000
    ctx->pc = 0x208354u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_208358:
    // 0x208358: 0x3c023f80
    ctx->pc = 0x208358u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
label_20835c:
    // 0x20835c: 0x44820800
    ctx->pc = 0x20835cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
label_208360:
    // 0x208360: 0x0
    ctx->pc = 0x208360u;
    // NOP
label_208364:
    // 0x208364: 0x46001036
    ctx->pc = 0x208364u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_208368:
    // 0x208368: 0x46011001
    ctx->pc = 0x208368u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_20836c:
    // 0x20836c: 0x45000009
label_208370:
    if (ctx->pc == 0x208370u) {
        ctx->pc = 0x208370u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 7544), bits); }
        ctx->pc = 0x208374u;
        goto label_208374;
    }
    ctx->pc = 0x20836Cu;
    {
        const bool branch_taken_0x20836c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x208370u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 7544), bits); }
        if (branch_taken_0x20836c) {
            ctx->pc = 0x208394u;
            goto label_208394;
        }
    }
    ctx->pc = 0x208374u;
label_208374:
    // 0x208374: 0x8e44000c
    ctx->pc = 0x208374u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_208378:
    // 0x208378: 0x2403dfff
    ctx->pc = 0x208378u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294959103));
label_20837c:
    // 0x20837c: 0x3c020008
    ctx->pc = 0x20837cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)8 << 16));
label_208380:
    // 0x208380: 0x831824
    ctx->pc = 0x208380u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_208384:
    // 0x208384: 0xae43000c
    ctx->pc = 0x208384u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
label_208388:
    // 0x208388: 0x8e43000c
    ctx->pc = 0x208388u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_20838c:
    // 0x20838c: 0x621025
    ctx->pc = 0x20838cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_208390:
    // 0x208390: 0xae42000c
    ctx->pc = 0x208390u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_208394:
    // 0x208394: 0x72402628
    ctx->pc = 0x208394u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_208398:
    // 0x208398: 0xc082a08
label_20839c:
    if (ctx->pc == 0x20839Cu) {
        ctx->pc = 0x2083A0u;
        goto label_2083a0;
    }
    ctx->pc = 0x208398u;
    SET_GPR_U32(ctx, 31, 0x2083A0u);
    ctx->pc = 0x20A820u;
    {
        const uint32_t __entryPc = ctx->pc;
        backWaitPos__10PeopleTaskFv_0x20a820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2083A0u; }
        else if (ctx->pc != 0x2083A0u) { ctx->pc = 0x2083A0u; }
    }
    if (ctx->pc != 0x2083A0u) { return; }
    ctx->pc = 0x2083A0u;
label_2083a0:
    // 0x2083a0: 0x1040002e
label_2083a4:
    if (ctx->pc == 0x2083A4u) {
        ctx->pc = 0x2083A8u;
        goto label_2083a8;
    }
    ctx->pc = 0x2083A0u;
    {
        const bool branch_taken_0x2083a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2083a0) {
            ctx->pc = 0x20845Cu;
            goto label_20845c;
        }
    }
    ctx->pc = 0x2083A8u;
label_2083a8:
    // 0x2083a8: 0x8e45000c
    ctx->pc = 0x2083a8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2083ac:
    // 0x2083ac: 0x2403dfff
    ctx->pc = 0x2083acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294959103));
label_2083b0:
    // 0x2083b0: 0x3c020027
    ctx->pc = 0x2083b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
label_2083b4:
    // 0x2083b4: 0x244229e8
    ctx->pc = 0x2083b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10728));
label_2083b8:
    // 0x2083b8: 0xa31824
    ctx->pc = 0x2083b8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2083bc:
    // 0x2083bc: 0xae43000c
    ctx->pc = 0x2083bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
label_2083c0:
    // 0x2083c0: 0x8e431db0
    ctx->pc = 0x2083c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 7600)));
label_2083c4:
    // 0x2083c4: 0x31880
    ctx->pc = 0x2083c4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_2083c8:
    // 0x2083c8: 0x431021
    ctx->pc = 0x2083c8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2083cc:
    // 0x2083cc: 0x8c450000
    ctx->pc = 0x2083ccu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2083d0:
    // 0x2083d0: 0xc0829ac
label_2083d4:
    if (ctx->pc == 0x2083D4u) {
        ctx->pc = 0x2083D4u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        ctx->pc = 0x2083D8u;
        goto label_2083d8;
    }
    ctx->pc = 0x2083D0u;
    SET_GPR_U32(ctx, 31, 0x2083D8u);
    ctx->pc = 0x2083D4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x20A6B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        motionSelect__10PeopleTaskFPi_0x20a6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2083D8u; }
        else if (ctx->pc != 0x2083D8u) { ctx->pc = 0x2083D8u; }
    }
    if (ctx->pc != 0x2083D8u) { return; }
    ctx->pc = 0x2083D8u;
label_2083d8:
    // 0x2083d8: 0x2143c
    ctx->pc = 0x2083d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_2083dc:
    // 0x2083dc: 0x2143f
    ctx->pc = 0x2083dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2083e0:
    // 0x2083e0: 0xae421dcc
    ctx->pc = 0x2083e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7628), GPR_U32(ctx, 2));
label_2083e4:
    // 0x2083e4: 0x12400002
label_2083e8:
    if (ctx->pc == 0x2083E8u) {
        ctx->pc = 0x2083E8u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        ctx->pc = 0x2083ECu;
        goto label_2083ec;
    }
    ctx->pc = 0x2083E4u;
    {
        const bool branch_taken_0x2083e4 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x2083E8u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        if (branch_taken_0x2083e4) {
            ctx->pc = 0x2083F0u;
            goto label_2083f0;
        }
    }
    ctx->pc = 0x2083ECu;
label_2083ec:
    // 0x2083ec: 0x24a50030
    ctx->pc = 0x2083ecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 48));
label_2083f0:
    // 0x2083f0: 0x8e461dcc
    ctx->pc = 0x2083f0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 7628)));
label_2083f4:
    // 0x2083f4: 0x3c02004a
    ctx->pc = 0x2083f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
label_2083f8:
    // 0x2083f8: 0x2444e8e0
    ctx->pc = 0x2083f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294961376));
label_2083fc:
    // 0x2083fc: 0x70003e28
    ctx->pc = 0x2083fcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_208400:
    // 0x208400: 0xc07eabc
label_208404:
    if (ctx->pc == 0x208404u) {
        ctx->pc = 0x208404u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x208408u;
        goto label_208408;
    }
    ctx->pc = 0x208400u;
    SET_GPR_U32(ctx, 31, 0x208408u);
    ctx->pc = 0x208404u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x1FAAF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        motSupplement__12BodyMgrClassFP10MotObjTaskiii_0x1faaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208408u; }
        else if (ctx->pc != 0x208408u) { ctx->pc = 0x208408u; }
    }
    if (ctx->pc != 0x208408u) { return; }
    ctx->pc = 0x208408u;
label_208408:
    // 0x208408: 0x2404ffff
    ctx->pc = 0x208408u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
label_20840c:
    // 0x20840c: 0x3c023d2c
    ctx->pc = 0x20840cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)15660 << 16));
label_208410:
    // 0x208410: 0xae441dd0
    ctx->pc = 0x208410u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7632), GPR_U32(ctx, 4));
label_208414:
    // 0x208414: 0x34420832
    ctx->pc = 0x208414u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2098));
label_208418:
    // 0x208418: 0xae421e30
    ctx->pc = 0x208418u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7728), GPR_U32(ctx, 2));
label_20841c:
    // 0x20841c: 0x24020002
    ctx->pc = 0x20841cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_208420:
    // 0x208420: 0xa6421e34
    ctx->pc = 0x208420u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 7732), (uint16_t)GPR_U32(ctx, 2));
label_208424:
    // 0x208424: 0x3c023f33
    ctx->pc = 0x208424u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16179 << 16));
label_208428:
    // 0x208428: 0xa6401e36
    ctx->pc = 0x208428u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 7734), (uint16_t)GPR_U32(ctx, 0));
label_20842c:
    // 0x20842c: 0x34423333
    ctx->pc = 0x20842cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 13107));
label_208430:
    // 0x208430: 0xae421e38
    ctx->pc = 0x208430u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7736), GPR_U32(ctx, 2));
label_208434:
    // 0x208434: 0x3c02428c
    ctx->pc = 0x208434u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17036 << 16));
label_208438:
    // 0x208438: 0xae421d78
    ctx->pc = 0x208438u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7544), GPR_U32(ctx, 2));
label_20843c:
    // 0x20843c: 0xae401db8
    ctx->pc = 0x20843cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7608), GPR_U32(ctx, 0));
label_208440:
    // 0x208440: 0x82421e00
    ctx->pc = 0x208440u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 7680)));
label_208444:
    // 0x208444: 0x10440005
label_208448:
    if (ctx->pc == 0x208448u) {
        ctx->pc = 0x208448u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x20844Cu;
        goto label_20844c;
    }
    ctx->pc = 0x208444u;
    {
        const bool branch_taken_0x208444 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        ctx->pc = 0x208448u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
        if (branch_taken_0x208444) {
            ctx->pc = 0x20845Cu;
            goto label_20845c;
        }
    }
    ctx->pc = 0x20844Cu;
label_20844c:
    // 0x20844c: 0x27828b60
    ctx->pc = 0x20844cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 28), 4294937440));
label_208450:
    // 0x208450: 0x431021
    ctx->pc = 0x208450u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_208454:
    // 0x208454: 0xac400000
    ctx->pc = 0x208454u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_208458:
    // 0x208458: 0xa2441e00
    ctx->pc = 0x208458u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 7680), (uint8_t)GPR_U32(ctx, 4));
label_20845c:
    // 0x20845c: 0x8e43000c
    ctx->pc = 0x20845cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_208460:
    // 0x208460: 0x3c021000
    ctx->pc = 0x208460u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
label_208464:
    // 0x208464: 0x621024
    ctx->pc = 0x208464u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_208468:
    // 0x208468: 0x1440000c
label_20846c:
    if (ctx->pc == 0x20846Cu) {
        ctx->pc = 0x208470u;
        goto label_208470;
    }
    ctx->pc = 0x208468u;
    {
        const bool branch_taken_0x208468 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x208468) {
            ctx->pc = 0x20849Cu;
            goto label_20849c;
        }
    }
    ctx->pc = 0x208470u;
label_208470:
    // 0x208470: 0x8e420034
    ctx->pc = 0x208470u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_208474:
    // 0x208474: 0x8e461dcc
    ctx->pc = 0x208474u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 7628)));
label_208478:
    // 0x208478: 0x10460008
label_20847c:
    if (ctx->pc == 0x20847Cu) {
        ctx->pc = 0x20847Cu;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        ctx->pc = 0x208480u;
        goto label_208480;
    }
    ctx->pc = 0x208478u;
    {
        const bool branch_taken_0x208478 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 6));
        ctx->pc = 0x20847Cu;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        if (branch_taken_0x208478) {
            ctx->pc = 0x20849Cu;
            goto label_20849c;
        }
    }
    ctx->pc = 0x208480u;
label_208480:
    // 0x208480: 0x12400002
label_208484:
    if (ctx->pc == 0x208484u) {
        ctx->pc = 0x208484u;
        SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
        ctx->pc = 0x208488u;
        goto label_208488;
    }
    ctx->pc = 0x208480u;
    {
        const bool branch_taken_0x208480 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x208484u;
        SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
        if (branch_taken_0x208480) {
            ctx->pc = 0x20848Cu;
            goto label_20848c;
        }
    }
    ctx->pc = 0x208488u;
label_208488:
    // 0x208488: 0x24a50030
    ctx->pc = 0x208488u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 48));
label_20848c:
    // 0x20848c: 0x2444e8e0
    ctx->pc = 0x20848cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294961376));
label_208490:
    // 0x208490: 0x70003e28
    ctx->pc = 0x208490u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_208494:
    // 0x208494: 0xc07eabc
label_208498:
    if (ctx->pc == 0x208498u) {
        ctx->pc = 0x208498u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x20849Cu;
        goto label_20849c;
    }
    ctx->pc = 0x208494u;
    SET_GPR_U32(ctx, 31, 0x20849Cu);
    ctx->pc = 0x208498u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x1FAAF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        motSupplement__12BodyMgrClassFP10MotObjTaskiii_0x1faaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20849Cu; }
        else if (ctx->pc != 0x20849Cu) { ctx->pc = 0x20849Cu; }
    }
    if (ctx->pc != 0x20849Cu) { return; }
    ctx->pc = 0x20849Cu;
label_20849c:
    // 0x20849c: 0x4bede37d
    ctx->pc = 0x20849cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
label_2084a0:
    // 0x2084a0: 0x4bedeb7d
    ctx->pc = 0x2084a0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
label_2084a4:
    // 0x2084a4: 0x4bedf37d
    ctx->pc = 0x2084a4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
label_2084a8:
    // 0x2084a8: 0x4bedfb7d
    ctx->pc = 0x2084a8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
label_2084ac:
    // 0x2084ac: 0x8f828c48
    ctx->pc = 0x2084acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
label_2084b0:
    // 0x2084b0: 0xc06c038
label_2084b4:
    if (ctx->pc == 0x2084B4u) {
        ctx->pc = 0x2084B4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 80));
        ctx->pc = 0x2084B8u;
        goto label_2084b8;
    }
    ctx->pc = 0x2084B0u;
    SET_GPR_U32(ctx, 31, 0x2084B8u);
    ctx->pc = 0x2084B4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 80));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2084B8u; }
        else if (ctx->pc != 0x2084B8u) { ctx->pc = 0x2084B8u; }
    }
    if (ctx->pc != 0x2084B8u) { return; }
    ctx->pc = 0x2084B8u;
label_2084b8:
    // 0x2084b8: 0x3c02bf80
    ctx->pc = 0x2084b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
label_2084bc:
    // 0x2084bc: 0xafa20050
    ctx->pc = 0x2084bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_2084c0:
    // 0x2084c0: 0xafa20054
    ctx->pc = 0x2084c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_2084c4:
    // 0x2084c4: 0x3c023f80
    ctx->pc = 0x2084c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
label_2084c8:
    // 0x2084c8: 0xafa20058
    ctx->pc = 0x2084c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
label_2084cc:
    // 0x2084cc: 0x27a40050
    ctx->pc = 0x2084ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
label_2084d0:
    // 0x2084d0: 0xc06bf2b
label_2084d4:
    if (ctx->pc == 0x2084D4u) {
        ctx->pc = 0x2084D4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2084D8u;
        goto label_2084d8;
    }
    ctx->pc = 0x2084D0u;
    SET_GPR_U32(ctx, 31, 0x2084D8u);
    ctx->pc = 0x2084D4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x1AFCACu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFCAC_0x1afcac(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2084D8u; }
        else if (ctx->pc != 0x2084D8u) { ctx->pc = 0x2084D8u; }
    }
    if (ctx->pc != 0x2084D8u) { return; }
    ctx->pc = 0x2084D8u;
label_2084d8:
    // 0x2084d8: 0xc7ac0060
    ctx->pc = 0x2084d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2084dc:
    // 0x2084dc: 0xc7ad0064
    ctx->pc = 0x2084dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2084e0:
    // 0x2084e0: 0xc7ae0068
    ctx->pc = 0x2084e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_2084e4:
    // 0x2084e4: 0x26441d94
    ctx->pc = 0x2084e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 7572));
label_2084e8:
    // 0x2084e8: 0xc072348
label_2084ec:
    if (ctx->pc == 0x2084ECu) {
        ctx->pc = 0x2084ECu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 7576));
        ctx->pc = 0x2084F0u;
        goto label_2084f0;
    }
    ctx->pc = 0x2084E8u;
    SET_GPR_U32(ctx, 31, 0x2084F0u);
    ctx->pc = 0x2084ECu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 7576));
    ctx->pc = 0x1C8D20u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetAngleYX__FfffPiPi_0x1c8d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2084F0u; }
        else if (ctx->pc != 0x2084F0u) { ctx->pc = 0x2084F0u; }
    }
    if (ctx->pc != 0x2084F0u) { return; }
    ctx->pc = 0x2084F0u;
label_2084f0:
    // 0x2084f0: 0x4bff6b7e
    ctx->pc = 0x2084f0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_2084f4:
    // 0x2084f4: 0x4bfe6b7e
    ctx->pc = 0x2084f4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
label_2084f8:
    // 0x2084f8: 0x4bfd6b7e
    ctx->pc = 0x2084f8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_2084fc:
    // 0x2084fc: 0x4bfc6b7e
    ctx->pc = 0x2084fcu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_208500:
    // 0x208500: 0x7bbf0040
    ctx->pc = 0x208500u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_208504:
    // 0x208504: 0x7bb20030
    ctx->pc = 0x208504u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_208508:
    // 0x208508: 0x7bb10020
    ctx->pc = 0x208508u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20850c:
    // 0x20850c: 0x7bb00010
    ctx->pc = 0x20850cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_208510:
    // 0x208510: 0xc7b50004
    ctx->pc = 0x208510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_208514:
    // 0x208514: 0xc7b40000
    ctx->pc = 0x208514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_208518:
    // 0x208518: 0x3e00008
label_20851c:
    if (ctx->pc == 0x20851Cu) {
        ctx->pc = 0x20851Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x208520u;
        goto label_fallthrough_0x208518;
    }
    ctx->pc = 0x208518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20851Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x207950u: goto label_207950;
            case 0x207954u: goto label_207954;
            case 0x207958u: goto label_207958;
            case 0x20795Cu: goto label_20795c;
            case 0x207960u: goto label_207960;
            case 0x207964u: goto label_207964;
            case 0x207968u: goto label_207968;
            case 0x20796Cu: goto label_20796c;
            case 0x207970u: goto label_207970;
            case 0x207974u: goto label_207974;
            case 0x207978u: goto label_207978;
            case 0x20797Cu: goto label_20797c;
            case 0x207980u: goto label_207980;
            case 0x207984u: goto label_207984;
            case 0x207988u: goto label_207988;
            case 0x20798Cu: goto label_20798c;
            case 0x207990u: goto label_207990;
            case 0x207994u: goto label_207994;
            case 0x207998u: goto label_207998;
            case 0x20799Cu: goto label_20799c;
            case 0x2079A0u: goto label_2079a0;
            case 0x2079A4u: goto label_2079a4;
            case 0x2079A8u: goto label_2079a8;
            case 0x2079ACu: goto label_2079ac;
            case 0x2079B0u: goto label_2079b0;
            case 0x2079B4u: goto label_2079b4;
            case 0x2079B8u: goto label_2079b8;
            case 0x2079BCu: goto label_2079bc;
            case 0x2079C0u: goto label_2079c0;
            case 0x2079C4u: goto label_2079c4;
            case 0x2079C8u: goto label_2079c8;
            case 0x2079CCu: goto label_2079cc;
            case 0x2079D0u: goto label_2079d0;
            case 0x2079D4u: goto label_2079d4;
            case 0x2079D8u: goto label_2079d8;
            case 0x2079DCu: goto label_2079dc;
            case 0x2079E0u: goto label_2079e0;
            case 0x2079E4u: goto label_2079e4;
            case 0x2079E8u: goto label_2079e8;
            case 0x2079ECu: goto label_2079ec;
            case 0x2079F0u: goto label_2079f0;
            case 0x2079F4u: goto label_2079f4;
            case 0x2079F8u: goto label_2079f8;
            case 0x2079FCu: goto label_2079fc;
            case 0x207A00u: goto label_207a00;
            case 0x207A04u: goto label_207a04;
            case 0x207A08u: goto label_207a08;
            case 0x207A0Cu: goto label_207a0c;
            case 0x207A10u: goto label_207a10;
            case 0x207A14u: goto label_207a14;
            case 0x207A18u: goto label_207a18;
            case 0x207A1Cu: goto label_207a1c;
            case 0x207A20u: goto label_207a20;
            case 0x207A24u: goto label_207a24;
            case 0x207A28u: goto label_207a28;
            case 0x207A2Cu: goto label_207a2c;
            case 0x207A30u: goto label_207a30;
            case 0x207A34u: goto label_207a34;
            case 0x207A38u: goto label_207a38;
            case 0x207A3Cu: goto label_207a3c;
            case 0x207A40u: goto label_207a40;
            case 0x207A44u: goto label_207a44;
            case 0x207A48u: goto label_207a48;
            case 0x207A4Cu: goto label_207a4c;
            case 0x207A50u: goto label_207a50;
            case 0x207A54u: goto label_207a54;
            case 0x207A58u: goto label_207a58;
            case 0x207A5Cu: goto label_207a5c;
            case 0x207A60u: goto label_207a60;
            case 0x207A64u: goto label_207a64;
            case 0x207A68u: goto label_207a68;
            case 0x207A6Cu: goto label_207a6c;
            case 0x207A70u: goto label_207a70;
            case 0x207A74u: goto label_207a74;
            case 0x207A78u: goto label_207a78;
            case 0x207A7Cu: goto label_207a7c;
            case 0x207A80u: goto label_207a80;
            case 0x207A84u: goto label_207a84;
            case 0x207A88u: goto label_207a88;
            case 0x207A8Cu: goto label_207a8c;
            case 0x207A90u: goto label_207a90;
            case 0x207A94u: goto label_207a94;
            case 0x207A98u: goto label_207a98;
            case 0x207A9Cu: goto label_207a9c;
            case 0x207AA0u: goto label_207aa0;
            case 0x207AA4u: goto label_207aa4;
            case 0x207AA8u: goto label_207aa8;
            case 0x207AACu: goto label_207aac;
            case 0x207AB0u: goto label_207ab0;
            case 0x207AB4u: goto label_207ab4;
            case 0x207AB8u: goto label_207ab8;
            case 0x207ABCu: goto label_207abc;
            case 0x207AC0u: goto label_207ac0;
            case 0x207AC4u: goto label_207ac4;
            case 0x207AC8u: goto label_207ac8;
            case 0x207ACCu: goto label_207acc;
            case 0x207AD0u: goto label_207ad0;
            case 0x207AD4u: goto label_207ad4;
            case 0x207AD8u: goto label_207ad8;
            case 0x207ADCu: goto label_207adc;
            case 0x207AE0u: goto label_207ae0;
            case 0x207AE4u: goto label_207ae4;
            case 0x207AE8u: goto label_207ae8;
            case 0x207AECu: goto label_207aec;
            case 0x207AF0u: goto label_207af0;
            case 0x207AF4u: goto label_207af4;
            case 0x207AF8u: goto label_207af8;
            case 0x207AFCu: goto label_207afc;
            case 0x207B00u: goto label_207b00;
            case 0x207B04u: goto label_207b04;
            case 0x207B08u: goto label_207b08;
            case 0x207B0Cu: goto label_207b0c;
            case 0x207B10u: goto label_207b10;
            case 0x207B14u: goto label_207b14;
            case 0x207B18u: goto label_207b18;
            case 0x207B1Cu: goto label_207b1c;
            case 0x207B20u: goto label_207b20;
            case 0x207B24u: goto label_207b24;
            case 0x207B28u: goto label_207b28;
            case 0x207B2Cu: goto label_207b2c;
            case 0x207B30u: goto label_207b30;
            case 0x207B34u: goto label_207b34;
            case 0x207B38u: goto label_207b38;
            case 0x207B3Cu: goto label_207b3c;
            case 0x207B40u: goto label_207b40;
            case 0x207B44u: goto label_207b44;
            case 0x207B48u: goto label_207b48;
            case 0x207B4Cu: goto label_207b4c;
            case 0x207B50u: goto label_207b50;
            case 0x207B54u: goto label_207b54;
            case 0x207B58u: goto label_207b58;
            case 0x207B5Cu: goto label_207b5c;
            case 0x207B60u: goto label_207b60;
            case 0x207B64u: goto label_207b64;
            case 0x207B68u: goto label_207b68;
            case 0x207B6Cu: goto label_207b6c;
            case 0x207B70u: goto label_207b70;
            case 0x207B74u: goto label_207b74;
            case 0x207B78u: goto label_207b78;
            case 0x207B7Cu: goto label_207b7c;
            case 0x207B80u: goto label_207b80;
            case 0x207B84u: goto label_207b84;
            case 0x207B88u: goto label_207b88;
            case 0x207B8Cu: goto label_207b8c;
            case 0x207B90u: goto label_207b90;
            case 0x207B94u: goto label_207b94;
            case 0x207B98u: goto label_207b98;
            case 0x207B9Cu: goto label_207b9c;
            case 0x207BA0u: goto label_207ba0;
            case 0x207BA4u: goto label_207ba4;
            case 0x207BA8u: goto label_207ba8;
            case 0x207BACu: goto label_207bac;
            case 0x207BB0u: goto label_207bb0;
            case 0x207BB4u: goto label_207bb4;
            case 0x207BB8u: goto label_207bb8;
            case 0x207BBCu: goto label_207bbc;
            case 0x207BC0u: goto label_207bc0;
            case 0x207BC4u: goto label_207bc4;
            case 0x207BC8u: goto label_207bc8;
            case 0x207BCCu: goto label_207bcc;
            case 0x207BD0u: goto label_207bd0;
            case 0x207BD4u: goto label_207bd4;
            case 0x207BD8u: goto label_207bd8;
            case 0x207BDCu: goto label_207bdc;
            case 0x207BE0u: goto label_207be0;
            case 0x207BE4u: goto label_207be4;
            case 0x207BE8u: goto label_207be8;
            case 0x207BECu: goto label_207bec;
            case 0x207BF0u: goto label_207bf0;
            case 0x207BF4u: goto label_207bf4;
            case 0x207BF8u: goto label_207bf8;
            case 0x207BFCu: goto label_207bfc;
            case 0x207C00u: goto label_207c00;
            case 0x207C04u: goto label_207c04;
            case 0x207C08u: goto label_207c08;
            case 0x207C0Cu: goto label_207c0c;
            case 0x207C10u: goto label_207c10;
            case 0x207C14u: goto label_207c14;
            case 0x207C18u: goto label_207c18;
            case 0x207C1Cu: goto label_207c1c;
            case 0x207C20u: goto label_207c20;
            case 0x207C24u: goto label_207c24;
            case 0x207C28u: goto label_207c28;
            case 0x207C2Cu: goto label_207c2c;
            case 0x207C30u: goto label_207c30;
            case 0x207C34u: goto label_207c34;
            case 0x207C38u: goto label_207c38;
            case 0x207C3Cu: goto label_207c3c;
            case 0x207C40u: goto label_207c40;
            case 0x207C44u: goto label_207c44;
            case 0x207C48u: goto label_207c48;
            case 0x207C4Cu: goto label_207c4c;
            case 0x207C50u: goto label_207c50;
            case 0x207C54u: goto label_207c54;
            case 0x207C58u: goto label_207c58;
            case 0x207C5Cu: goto label_207c5c;
            case 0x207C60u: goto label_207c60;
            case 0x207C64u: goto label_207c64;
            case 0x207C68u: goto label_207c68;
            case 0x207C6Cu: goto label_207c6c;
            case 0x207C70u: goto label_207c70;
            case 0x207C74u: goto label_207c74;
            case 0x207C78u: goto label_207c78;
            case 0x207C7Cu: goto label_207c7c;
            case 0x207C80u: goto label_207c80;
            case 0x207C84u: goto label_207c84;
            case 0x207C88u: goto label_207c88;
            case 0x207C8Cu: goto label_207c8c;
            case 0x207C90u: goto label_207c90;
            case 0x207C94u: goto label_207c94;
            case 0x207C98u: goto label_207c98;
            case 0x207C9Cu: goto label_207c9c;
            case 0x207CA0u: goto label_207ca0;
            case 0x207CA4u: goto label_207ca4;
            case 0x207CA8u: goto label_207ca8;
            case 0x207CACu: goto label_207cac;
            case 0x207CB0u: goto label_207cb0;
            case 0x207CB4u: goto label_207cb4;
            case 0x207CB8u: goto label_207cb8;
            case 0x207CBCu: goto label_207cbc;
            case 0x207CC0u: goto label_207cc0;
            case 0x207CC4u: goto label_207cc4;
            case 0x207CC8u: goto label_207cc8;
            case 0x207CCCu: goto label_207ccc;
            case 0x207CD0u: goto label_207cd0;
            case 0x207CD4u: goto label_207cd4;
            case 0x207CD8u: goto label_207cd8;
            case 0x207CDCu: goto label_207cdc;
            case 0x207CE0u: goto label_207ce0;
            case 0x207CE4u: goto label_207ce4;
            case 0x207CE8u: goto label_207ce8;
            case 0x207CECu: goto label_207cec;
            case 0x207CF0u: goto label_207cf0;
            case 0x207CF4u: goto label_207cf4;
            case 0x207CF8u: goto label_207cf8;
            case 0x207CFCu: goto label_207cfc;
            case 0x207D00u: goto label_207d00;
            case 0x207D04u: goto label_207d04;
            case 0x207D08u: goto label_207d08;
            case 0x207D0Cu: goto label_207d0c;
            case 0x207D10u: goto label_207d10;
            case 0x207D14u: goto label_207d14;
            case 0x207D18u: goto label_207d18;
            case 0x207D1Cu: goto label_207d1c;
            case 0x207D20u: goto label_207d20;
            case 0x207D24u: goto label_207d24;
            case 0x207D28u: goto label_207d28;
            case 0x207D2Cu: goto label_207d2c;
            case 0x207D30u: goto label_207d30;
            case 0x207D34u: goto label_207d34;
            case 0x207D38u: goto label_207d38;
            case 0x207D3Cu: goto label_207d3c;
            case 0x207D40u: goto label_207d40;
            case 0x207D44u: goto label_207d44;
            case 0x207D48u: goto label_207d48;
            case 0x207D4Cu: goto label_207d4c;
            case 0x207D50u: goto label_207d50;
            case 0x207D54u: goto label_207d54;
            case 0x207D58u: goto label_207d58;
            case 0x207D5Cu: goto label_207d5c;
            case 0x207D60u: goto label_207d60;
            case 0x207D64u: goto label_207d64;
            case 0x207D68u: goto label_207d68;
            case 0x207D6Cu: goto label_207d6c;
            case 0x207D70u: goto label_207d70;
            case 0x207D74u: goto label_207d74;
            case 0x207D78u: goto label_207d78;
            case 0x207D7Cu: goto label_207d7c;
            case 0x207D80u: goto label_207d80;
            case 0x207D84u: goto label_207d84;
            case 0x207D88u: goto label_207d88;
            case 0x207D8Cu: goto label_207d8c;
            case 0x207D90u: goto label_207d90;
            case 0x207D94u: goto label_207d94;
            case 0x207D98u: goto label_207d98;
            case 0x207D9Cu: goto label_207d9c;
            case 0x207DA0u: goto label_207da0;
            case 0x207DA4u: goto label_207da4;
            case 0x207DA8u: goto label_207da8;
            case 0x207DACu: goto label_207dac;
            case 0x207DB0u: goto label_207db0;
            case 0x207DB4u: goto label_207db4;
            case 0x207DB8u: goto label_207db8;
            case 0x207DBCu: goto label_207dbc;
            case 0x207DC0u: goto label_207dc0;
            case 0x207DC4u: goto label_207dc4;
            case 0x207DC8u: goto label_207dc8;
            case 0x207DCCu: goto label_207dcc;
            case 0x207DD0u: goto label_207dd0;
            case 0x207DD4u: goto label_207dd4;
            case 0x207DD8u: goto label_207dd8;
            case 0x207DDCu: goto label_207ddc;
            case 0x207DE0u: goto label_207de0;
            case 0x207DE4u: goto label_207de4;
            case 0x207DE8u: goto label_207de8;
            case 0x207DECu: goto label_207dec;
            case 0x207DF0u: goto label_207df0;
            case 0x207DF4u: goto label_207df4;
            case 0x207DF8u: goto label_207df8;
            case 0x207DFCu: goto label_207dfc;
            case 0x207E00u: goto label_207e00;
            case 0x207E04u: goto label_207e04;
            case 0x207E08u: goto label_207e08;
            case 0x207E0Cu: goto label_207e0c;
            case 0x207E10u: goto label_207e10;
            case 0x207E14u: goto label_207e14;
            case 0x207E18u: goto label_207e18;
            case 0x207E1Cu: goto label_207e1c;
            case 0x207E20u: goto label_207e20;
            case 0x207E24u: goto label_207e24;
            case 0x207E28u: goto label_207e28;
            case 0x207E2Cu: goto label_207e2c;
            case 0x207E30u: goto label_207e30;
            case 0x207E34u: goto label_207e34;
            case 0x207E38u: goto label_207e38;
            case 0x207E3Cu: goto label_207e3c;
            case 0x207E40u: goto label_207e40;
            case 0x207E44u: goto label_207e44;
            case 0x207E48u: goto label_207e48;
            case 0x207E4Cu: goto label_207e4c;
            case 0x207E50u: goto label_207e50;
            case 0x207E54u: goto label_207e54;
            case 0x207E58u: goto label_207e58;
            case 0x207E5Cu: goto label_207e5c;
            case 0x207E60u: goto label_207e60;
            case 0x207E64u: goto label_207e64;
            case 0x207E68u: goto label_207e68;
            case 0x207E6Cu: goto label_207e6c;
            case 0x207E70u: goto label_207e70;
            case 0x207E74u: goto label_207e74;
            case 0x207E78u: goto label_207e78;
            case 0x207E7Cu: goto label_207e7c;
            case 0x207E80u: goto label_207e80;
            case 0x207E84u: goto label_207e84;
            case 0x207E88u: goto label_207e88;
            case 0x207E8Cu: goto label_207e8c;
            case 0x207E90u: goto label_207e90;
            case 0x207E94u: goto label_207e94;
            case 0x207E98u: goto label_207e98;
            case 0x207E9Cu: goto label_207e9c;
            case 0x207EA0u: goto label_207ea0;
            case 0x207EA4u: goto label_207ea4;
            case 0x207EA8u: goto label_207ea8;
            case 0x207EACu: goto label_207eac;
            case 0x207EB0u: goto label_207eb0;
            case 0x207EB4u: goto label_207eb4;
            case 0x207EB8u: goto label_207eb8;
            case 0x207EBCu: goto label_207ebc;
            case 0x207EC0u: goto label_207ec0;
            case 0x207EC4u: goto label_207ec4;
            case 0x207EC8u: goto label_207ec8;
            case 0x207ECCu: goto label_207ecc;
            case 0x207ED0u: goto label_207ed0;
            case 0x207ED4u: goto label_207ed4;
            case 0x207ED8u: goto label_207ed8;
            case 0x207EDCu: goto label_207edc;
            case 0x207EE0u: goto label_207ee0;
            case 0x207EE4u: goto label_207ee4;
            case 0x207EE8u: goto label_207ee8;
            case 0x207EECu: goto label_207eec;
            case 0x207EF0u: goto label_207ef0;
            case 0x207EF4u: goto label_207ef4;
            case 0x207EF8u: goto label_207ef8;
            case 0x207EFCu: goto label_207efc;
            case 0x207F00u: goto label_207f00;
            case 0x207F04u: goto label_207f04;
            case 0x207F08u: goto label_207f08;
            case 0x207F0Cu: goto label_207f0c;
            case 0x207F10u: goto label_207f10;
            case 0x207F14u: goto label_207f14;
            case 0x207F18u: goto label_207f18;
            case 0x207F1Cu: goto label_207f1c;
            case 0x207F20u: goto label_207f20;
            case 0x207F24u: goto label_207f24;
            case 0x207F28u: goto label_207f28;
            case 0x207F2Cu: goto label_207f2c;
            case 0x207F30u: goto label_207f30;
            case 0x207F34u: goto label_207f34;
            case 0x207F38u: goto label_207f38;
            case 0x207F3Cu: goto label_207f3c;
            case 0x207F40u: goto label_207f40;
            case 0x207F44u: goto label_207f44;
            case 0x207F48u: goto label_207f48;
            case 0x207F4Cu: goto label_207f4c;
            case 0x207F50u: goto label_207f50;
            case 0x207F54u: goto label_207f54;
            case 0x207F58u: goto label_207f58;
            case 0x207F5Cu: goto label_207f5c;
            case 0x207F60u: goto label_207f60;
            case 0x207F64u: goto label_207f64;
            case 0x207F68u: goto label_207f68;
            case 0x207F6Cu: goto label_207f6c;
            case 0x207F70u: goto label_207f70;
            case 0x207F74u: goto label_207f74;
            case 0x207F78u: goto label_207f78;
            case 0x207F7Cu: goto label_207f7c;
            case 0x207F80u: goto label_207f80;
            case 0x207F84u: goto label_207f84;
            case 0x207F88u: goto label_207f88;
            case 0x207F8Cu: goto label_207f8c;
            case 0x207F90u: goto label_207f90;
            case 0x207F94u: goto label_207f94;
            case 0x207F98u: goto label_207f98;
            case 0x207F9Cu: goto label_207f9c;
            case 0x207FA0u: goto label_207fa0;
            case 0x207FA4u: goto label_207fa4;
            case 0x207FA8u: goto label_207fa8;
            case 0x207FACu: goto label_207fac;
            case 0x207FB0u: goto label_207fb0;
            case 0x207FB4u: goto label_207fb4;
            case 0x207FB8u: goto label_207fb8;
            case 0x207FBCu: goto label_207fbc;
            case 0x207FC0u: goto label_207fc0;
            case 0x207FC4u: goto label_207fc4;
            case 0x207FC8u: goto label_207fc8;
            case 0x207FCCu: goto label_207fcc;
            case 0x207FD0u: goto label_207fd0;
            case 0x207FD4u: goto label_207fd4;
            case 0x207FD8u: goto label_207fd8;
            case 0x207FDCu: goto label_207fdc;
            case 0x207FE0u: goto label_207fe0;
            case 0x207FE4u: goto label_207fe4;
            case 0x207FE8u: goto label_207fe8;
            case 0x207FECu: goto label_207fec;
            case 0x207FF0u: goto label_207ff0;
            case 0x207FF4u: goto label_207ff4;
            case 0x207FF8u: goto label_207ff8;
            case 0x207FFCu: goto label_207ffc;
            case 0x208000u: goto label_208000;
            case 0x208004u: goto label_208004;
            case 0x208008u: goto label_208008;
            case 0x20800Cu: goto label_20800c;
            case 0x208010u: goto label_208010;
            case 0x208014u: goto label_208014;
            case 0x208018u: goto label_208018;
            case 0x20801Cu: goto label_20801c;
            case 0x208020u: goto label_208020;
            case 0x208024u: goto label_208024;
            case 0x208028u: goto label_208028;
            case 0x20802Cu: goto label_20802c;
            case 0x208030u: goto label_208030;
            case 0x208034u: goto label_208034;
            case 0x208038u: goto label_208038;
            case 0x20803Cu: goto label_20803c;
            case 0x208040u: goto label_208040;
            case 0x208044u: goto label_208044;
            case 0x208048u: goto label_208048;
            case 0x20804Cu: goto label_20804c;
            case 0x208050u: goto label_208050;
            case 0x208054u: goto label_208054;
            case 0x208058u: goto label_208058;
            case 0x20805Cu: goto label_20805c;
            case 0x208060u: goto label_208060;
            case 0x208064u: goto label_208064;
            case 0x208068u: goto label_208068;
            case 0x20806Cu: goto label_20806c;
            case 0x208070u: goto label_208070;
            case 0x208074u: goto label_208074;
            case 0x208078u: goto label_208078;
            case 0x20807Cu: goto label_20807c;
            case 0x208080u: goto label_208080;
            case 0x208084u: goto label_208084;
            case 0x208088u: goto label_208088;
            case 0x20808Cu: goto label_20808c;
            case 0x208090u: goto label_208090;
            case 0x208094u: goto label_208094;
            case 0x208098u: goto label_208098;
            case 0x20809Cu: goto label_20809c;
            case 0x2080A0u: goto label_2080a0;
            case 0x2080A4u: goto label_2080a4;
            case 0x2080A8u: goto label_2080a8;
            case 0x2080ACu: goto label_2080ac;
            case 0x2080B0u: goto label_2080b0;
            case 0x2080B4u: goto label_2080b4;
            case 0x2080B8u: goto label_2080b8;
            case 0x2080BCu: goto label_2080bc;
            case 0x2080C0u: goto label_2080c0;
            case 0x2080C4u: goto label_2080c4;
            case 0x2080C8u: goto label_2080c8;
            case 0x2080CCu: goto label_2080cc;
            case 0x2080D0u: goto label_2080d0;
            case 0x2080D4u: goto label_2080d4;
            case 0x2080D8u: goto label_2080d8;
            case 0x2080DCu: goto label_2080dc;
            case 0x2080E0u: goto label_2080e0;
            case 0x2080E4u: goto label_2080e4;
            case 0x2080E8u: goto label_2080e8;
            case 0x2080ECu: goto label_2080ec;
            case 0x2080F0u: goto label_2080f0;
            case 0x2080F4u: goto label_2080f4;
            case 0x2080F8u: goto label_2080f8;
            case 0x2080FCu: goto label_2080fc;
            case 0x208100u: goto label_208100;
            case 0x208104u: goto label_208104;
            case 0x208108u: goto label_208108;
            case 0x20810Cu: goto label_20810c;
            case 0x208110u: goto label_208110;
            case 0x208114u: goto label_208114;
            case 0x208118u: goto label_208118;
            case 0x20811Cu: goto label_20811c;
            case 0x208120u: goto label_208120;
            case 0x208124u: goto label_208124;
            case 0x208128u: goto label_208128;
            case 0x20812Cu: goto label_20812c;
            case 0x208130u: goto label_208130;
            case 0x208134u: goto label_208134;
            case 0x208138u: goto label_208138;
            case 0x20813Cu: goto label_20813c;
            case 0x208140u: goto label_208140;
            case 0x208144u: goto label_208144;
            case 0x208148u: goto label_208148;
            case 0x20814Cu: goto label_20814c;
            case 0x208150u: goto label_208150;
            case 0x208154u: goto label_208154;
            case 0x208158u: goto label_208158;
            case 0x20815Cu: goto label_20815c;
            case 0x208160u: goto label_208160;
            case 0x208164u: goto label_208164;
            case 0x208168u: goto label_208168;
            case 0x20816Cu: goto label_20816c;
            case 0x208170u: goto label_208170;
            case 0x208174u: goto label_208174;
            case 0x208178u: goto label_208178;
            case 0x20817Cu: goto label_20817c;
            case 0x208180u: goto label_208180;
            case 0x208184u: goto label_208184;
            case 0x208188u: goto label_208188;
            case 0x20818Cu: goto label_20818c;
            case 0x208190u: goto label_208190;
            case 0x208194u: goto label_208194;
            case 0x208198u: goto label_208198;
            case 0x20819Cu: goto label_20819c;
            case 0x2081A0u: goto label_2081a0;
            case 0x2081A4u: goto label_2081a4;
            case 0x2081A8u: goto label_2081a8;
            case 0x2081ACu: goto label_2081ac;
            case 0x2081B0u: goto label_2081b0;
            case 0x2081B4u: goto label_2081b4;
            case 0x2081B8u: goto label_2081b8;
            case 0x2081BCu: goto label_2081bc;
            case 0x2081C0u: goto label_2081c0;
            case 0x2081C4u: goto label_2081c4;
            case 0x2081C8u: goto label_2081c8;
            case 0x2081CCu: goto label_2081cc;
            case 0x2081D0u: goto label_2081d0;
            case 0x2081D4u: goto label_2081d4;
            case 0x2081D8u: goto label_2081d8;
            case 0x2081DCu: goto label_2081dc;
            case 0x2081E0u: goto label_2081e0;
            case 0x2081E4u: goto label_2081e4;
            case 0x2081E8u: goto label_2081e8;
            case 0x2081ECu: goto label_2081ec;
            case 0x2081F0u: goto label_2081f0;
            case 0x2081F4u: goto label_2081f4;
            case 0x2081F8u: goto label_2081f8;
            case 0x2081FCu: goto label_2081fc;
            case 0x208200u: goto label_208200;
            case 0x208204u: goto label_208204;
            case 0x208208u: goto label_208208;
            case 0x20820Cu: goto label_20820c;
            case 0x208210u: goto label_208210;
            case 0x208214u: goto label_208214;
            case 0x208218u: goto label_208218;
            case 0x20821Cu: goto label_20821c;
            case 0x208220u: goto label_208220;
            case 0x208224u: goto label_208224;
            case 0x208228u: goto label_208228;
            case 0x20822Cu: goto label_20822c;
            case 0x208230u: goto label_208230;
            case 0x208234u: goto label_208234;
            case 0x208238u: goto label_208238;
            case 0x20823Cu: goto label_20823c;
            case 0x208240u: goto label_208240;
            case 0x208244u: goto label_208244;
            case 0x208248u: goto label_208248;
            case 0x20824Cu: goto label_20824c;
            case 0x208250u: goto label_208250;
            case 0x208254u: goto label_208254;
            case 0x208258u: goto label_208258;
            case 0x20825Cu: goto label_20825c;
            case 0x208260u: goto label_208260;
            case 0x208264u: goto label_208264;
            case 0x208268u: goto label_208268;
            case 0x20826Cu: goto label_20826c;
            case 0x208270u: goto label_208270;
            case 0x208274u: goto label_208274;
            case 0x208278u: goto label_208278;
            case 0x20827Cu: goto label_20827c;
            case 0x208280u: goto label_208280;
            case 0x208284u: goto label_208284;
            case 0x208288u: goto label_208288;
            case 0x20828Cu: goto label_20828c;
            case 0x208290u: goto label_208290;
            case 0x208294u: goto label_208294;
            case 0x208298u: goto label_208298;
            case 0x20829Cu: goto label_20829c;
            case 0x2082A0u: goto label_2082a0;
            case 0x2082A4u: goto label_2082a4;
            case 0x2082A8u: goto label_2082a8;
            case 0x2082ACu: goto label_2082ac;
            case 0x2082B0u: goto label_2082b0;
            case 0x2082B4u: goto label_2082b4;
            case 0x2082B8u: goto label_2082b8;
            case 0x2082BCu: goto label_2082bc;
            case 0x2082C0u: goto label_2082c0;
            case 0x2082C4u: goto label_2082c4;
            case 0x2082C8u: goto label_2082c8;
            case 0x2082CCu: goto label_2082cc;
            case 0x2082D0u: goto label_2082d0;
            case 0x2082D4u: goto label_2082d4;
            case 0x2082D8u: goto label_2082d8;
            case 0x2082DCu: goto label_2082dc;
            case 0x2082E0u: goto label_2082e0;
            case 0x2082E4u: goto label_2082e4;
            case 0x2082E8u: goto label_2082e8;
            case 0x2082ECu: goto label_2082ec;
            case 0x2082F0u: goto label_2082f0;
            case 0x2082F4u: goto label_2082f4;
            case 0x2082F8u: goto label_2082f8;
            case 0x2082FCu: goto label_2082fc;
            case 0x208300u: goto label_208300;
            case 0x208304u: goto label_208304;
            case 0x208308u: goto label_208308;
            case 0x20830Cu: goto label_20830c;
            case 0x208310u: goto label_208310;
            case 0x208314u: goto label_208314;
            case 0x208318u: goto label_208318;
            case 0x20831Cu: goto label_20831c;
            case 0x208320u: goto label_208320;
            case 0x208324u: goto label_208324;
            case 0x208328u: goto label_208328;
            case 0x20832Cu: goto label_20832c;
            case 0x208330u: goto label_208330;
            case 0x208334u: goto label_208334;
            case 0x208338u: goto label_208338;
            case 0x20833Cu: goto label_20833c;
            case 0x208340u: goto label_208340;
            case 0x208344u: goto label_208344;
            case 0x208348u: goto label_208348;
            case 0x20834Cu: goto label_20834c;
            case 0x208350u: goto label_208350;
            case 0x208354u: goto label_208354;
            case 0x208358u: goto label_208358;
            case 0x20835Cu: goto label_20835c;
            case 0x208360u: goto label_208360;
            case 0x208364u: goto label_208364;
            case 0x208368u: goto label_208368;
            case 0x20836Cu: goto label_20836c;
            case 0x208370u: goto label_208370;
            case 0x208374u: goto label_208374;
            case 0x208378u: goto label_208378;
            case 0x20837Cu: goto label_20837c;
            case 0x208380u: goto label_208380;
            case 0x208384u: goto label_208384;
            case 0x208388u: goto label_208388;
            case 0x20838Cu: goto label_20838c;
            case 0x208390u: goto label_208390;
            case 0x208394u: goto label_208394;
            case 0x208398u: goto label_208398;
            case 0x20839Cu: goto label_20839c;
            case 0x2083A0u: goto label_2083a0;
            case 0x2083A4u: goto label_2083a4;
            case 0x2083A8u: goto label_2083a8;
            case 0x2083ACu: goto label_2083ac;
            case 0x2083B0u: goto label_2083b0;
            case 0x2083B4u: goto label_2083b4;
            case 0x2083B8u: goto label_2083b8;
            case 0x2083BCu: goto label_2083bc;
            case 0x2083C0u: goto label_2083c0;
            case 0x2083C4u: goto label_2083c4;
            case 0x2083C8u: goto label_2083c8;
            case 0x2083CCu: goto label_2083cc;
            case 0x2083D0u: goto label_2083d0;
            case 0x2083D4u: goto label_2083d4;
            case 0x2083D8u: goto label_2083d8;
            case 0x2083DCu: goto label_2083dc;
            case 0x2083E0u: goto label_2083e0;
            case 0x2083E4u: goto label_2083e4;
            case 0x2083E8u: goto label_2083e8;
            case 0x2083ECu: goto label_2083ec;
            case 0x2083F0u: goto label_2083f0;
            case 0x2083F4u: goto label_2083f4;
            case 0x2083F8u: goto label_2083f8;
            case 0x2083FCu: goto label_2083fc;
            case 0x208400u: goto label_208400;
            case 0x208404u: goto label_208404;
            case 0x208408u: goto label_208408;
            case 0x20840Cu: goto label_20840c;
            case 0x208410u: goto label_208410;
            case 0x208414u: goto label_208414;
            case 0x208418u: goto label_208418;
            case 0x20841Cu: goto label_20841c;
            case 0x208420u: goto label_208420;
            case 0x208424u: goto label_208424;
            case 0x208428u: goto label_208428;
            case 0x20842Cu: goto label_20842c;
            case 0x208430u: goto label_208430;
            case 0x208434u: goto label_208434;
            case 0x208438u: goto label_208438;
            case 0x20843Cu: goto label_20843c;
            case 0x208440u: goto label_208440;
            case 0x208444u: goto label_208444;
            case 0x208448u: goto label_208448;
            case 0x20844Cu: goto label_20844c;
            case 0x208450u: goto label_208450;
            case 0x208454u: goto label_208454;
            case 0x208458u: goto label_208458;
            case 0x20845Cu: goto label_20845c;
            case 0x208460u: goto label_208460;
            case 0x208464u: goto label_208464;
            case 0x208468u: goto label_208468;
            case 0x20846Cu: goto label_20846c;
            case 0x208470u: goto label_208470;
            case 0x208474u: goto label_208474;
            case 0x208478u: goto label_208478;
            case 0x20847Cu: goto label_20847c;
            case 0x208480u: goto label_208480;
            case 0x208484u: goto label_208484;
            case 0x208488u: goto label_208488;
            case 0x20848Cu: goto label_20848c;
            case 0x208490u: goto label_208490;
            case 0x208494u: goto label_208494;
            case 0x208498u: goto label_208498;
            case 0x20849Cu: goto label_20849c;
            case 0x2084A0u: goto label_2084a0;
            case 0x2084A4u: goto label_2084a4;
            case 0x2084A8u: goto label_2084a8;
            case 0x2084ACu: goto label_2084ac;
            case 0x2084B0u: goto label_2084b0;
            case 0x2084B4u: goto label_2084b4;
            case 0x2084B8u: goto label_2084b8;
            case 0x2084BCu: goto label_2084bc;
            case 0x2084C0u: goto label_2084c0;
            case 0x2084C4u: goto label_2084c4;
            case 0x2084C8u: goto label_2084c8;
            case 0x2084CCu: goto label_2084cc;
            case 0x2084D0u: goto label_2084d0;
            case 0x2084D4u: goto label_2084d4;
            case 0x2084D8u: goto label_2084d8;
            case 0x2084DCu: goto label_2084dc;
            case 0x2084E0u: goto label_2084e0;
            case 0x2084E4u: goto label_2084e4;
            case 0x2084E8u: goto label_2084e8;
            case 0x2084ECu: goto label_2084ec;
            case 0x2084F0u: goto label_2084f0;
            case 0x2084F4u: goto label_2084f4;
            case 0x2084F8u: goto label_2084f8;
            case 0x2084FCu: goto label_2084fc;
            case 0x208500u: goto label_208500;
            case 0x208504u: goto label_208504;
            case 0x208508u: goto label_208508;
            case 0x20850Cu: goto label_20850c;
            case 0x208510u: goto label_208510;
            case 0x208514u: goto label_208514;
            case 0x208518u: goto label_208518;
            case 0x20851Cu: goto label_20851c;
            default: break;
        }
        return;
    }
label_fallthrough_0x208518:
    ctx->pc = 0x208520u;
}
