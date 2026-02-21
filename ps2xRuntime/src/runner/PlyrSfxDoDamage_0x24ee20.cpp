#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlyrSfxDoDamage
// Address: 0x24ee20 - 0x24f46c
void PlyrSfxDoDamage_0x24ee20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x24ee20u;

label_24ee20:
    // 0x24ee20: 0x27bdff10
    ctx->pc = 0x24ee20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967056));
label_24ee24:
    // 0x24ee24: 0xffbf00b0
    ctx->pc = 0x24ee24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_24ee28:
    // 0x24ee28: 0xffbe00a0
    ctx->pc = 0x24ee28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
label_24ee2c:
    // 0x24ee2c: 0xffb70090
    ctx->pc = 0x24ee2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
label_24ee30:
    // 0x24ee30: 0xffb60080
    ctx->pc = 0x24ee30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_24ee34:
    // 0x24ee34: 0xffb50070
    ctx->pc = 0x24ee34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
label_24ee38:
    // 0x24ee38: 0xffb40060
    ctx->pc = 0x24ee38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_24ee3c:
    // 0x24ee3c: 0xffb30050
    ctx->pc = 0x24ee3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_24ee40:
    // 0x24ee40: 0xffb20040
    ctx->pc = 0x24ee40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_24ee44:
    // 0x24ee44: 0xffb10030
    ctx->pc = 0x24ee44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_24ee48:
    // 0x24ee48: 0xffb00020
    ctx->pc = 0x24ee48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_24ee4c:
    // 0x24ee4c: 0xe7b900e8
    ctx->pc = 0x24ee4cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_24ee50:
    // 0x24ee50: 0xe7b800e0
    ctx->pc = 0x24ee50u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_24ee54:
    // 0x24ee54: 0xe7b700d8
    ctx->pc = 0x24ee54u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_24ee58:
    // 0x24ee58: 0xe7b600d0
    ctx->pc = 0x24ee58u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_24ee5c:
    // 0x24ee5c: 0xe7b500c8
    ctx->pc = 0x24ee5cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_24ee60:
    // 0x24ee60: 0xe7b400c0
    ctx->pc = 0x24ee60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_24ee64:
    // 0x24ee64: 0x80982d
    ctx->pc = 0x24ee64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24ee68:
    // 0x24ee68: 0x46006646
    ctx->pc = 0x24ee68u;
    ctx->f[25] = FPU_MOV_S(ctx->f[12]);
label_24ee6c:
    // 0x24ee6c: 0x46006dc6
    ctx->pc = 0x24ee6cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[13]);
label_24ee70:
    // 0x24ee70: 0xc0a82d
    ctx->pc = 0x24ee70u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_24ee74:
    // 0x24ee74: 0x4a0016b
label_24ee78:
    if (ctx->pc == 0x24EE78u) {
        ctx->pc = 0x24EE78u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
        ctx->pc = 0x24EE7Cu;
        goto label_24ee7c;
    }
    ctx->pc = 0x24EE74u;
    {
        const bool branch_taken_0x24ee74 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x24EE78u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
        if (branch_taken_0x24ee74) {
            ctx->pc = 0x24F424u;
            goto label_24f424;
        }
    }
    ctx->pc = 0x24EE7Cu;
label_24ee7c:
    // 0x24ee7c: 0x3c030033
    ctx->pc = 0x24ee7cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
label_24ee80:
    // 0x24ee80: 0x24634910
    ctx->pc = 0x24ee80u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 18704));
label_24ee84:
    // 0x24ee84: 0x8e620000
    ctx->pc = 0x24ee84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_24ee88:
    // 0x24ee88: 0x21080
    ctx->pc = 0x24ee88u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_24ee8c:
    // 0x24ee8c: 0x431021
    ctx->pc = 0x24ee8cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24ee90:
    // 0x24ee90: 0x8c430000
    ctx->pc = 0x24ee90u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24ee94:
    // 0x24ee94: 0x24020058
    ctx->pc = 0x24ee94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 88));
label_24ee98:
    // 0x24ee98: 0xa21018
    ctx->pc = 0x24ee98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_24ee9c:
    // 0x24ee9c: 0x8c630008
    ctx->pc = 0x24ee9cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_24eea0:
    // 0x24eea0: 0x439021
    ctx->pc = 0x24eea0u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24eea4:
    // 0x24eea4: 0x86420050
    ctx->pc = 0x24eea4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 80)));
label_24eea8:
    // 0x24eea8: 0x4482b000
    ctx->pc = 0x24eea8u;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 2);
label_24eeac:
    // 0x24eeac: 0x4680b5a0
    ctx->pc = 0x24eeacu;
    ctx->f[22] = FPU_CVT_S_W(*(int32_t*)&ctx->f[22]);
label_24eeb0:
    // 0x24eeb0: 0x86420052
    ctx->pc = 0x24eeb0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 82)));
label_24eeb4:
    // 0x24eeb4: 0x4482a800
    ctx->pc = 0x24eeb4u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 2);
label_24eeb8:
    // 0x24eeb8: 0x4680ad60
    ctx->pc = 0x24eeb8u;
    ctx->f[21] = FPU_CVT_S_W(*(int32_t*)&ctx->f[21]);
label_24eebc:
    // 0x24eebc: 0x4617b036
    ctx->pc = 0x24eebcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24eec0:
    // 0x24eec0: 0x45000030
label_24eec4:
    if (ctx->pc == 0x24EEC4u) {
        ctx->pc = 0x24EEC8u;
        goto label_24eec8;
    }
    ctx->pc = 0x24EEC0u;
    {
        const bool branch_taken_0x24eec0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24eec0) {
            ctx->pc = 0x24EF84u;
            goto label_24ef84;
        }
    }
    ctx->pc = 0x24EEC8u;
label_24eec8:
    // 0x24eec8: 0x44800000
    ctx->pc = 0x24eec8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_24eecc:
    // 0x24eecc: 0x4600a834
    ctx->pc = 0x24eeccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24eed0:
    // 0x24eed0: 0x0
    ctx->pc = 0x24eed0u;
    // NOP
label_24eed4:
    // 0x24eed4: 0x45030005
label_24eed8:
    if (ctx->pc == 0x24EED8u) {
        ctx->pc = 0x24EED8u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->pc = 0x24EEDCu;
        goto label_24eedc;
    }
    ctx->pc = 0x24EED4u;
    {
        const bool branch_taken_0x24eed4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24eed4) {
            ctx->pc = 0x24EED8u;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
            ctx->pc = 0x24EEECu;
            goto label_24eeec;
        }
    }
    ctx->pc = 0x24EEDCu;
label_24eedc:
    // 0x24eedc: 0x4615c834
    ctx->pc = 0x24eedcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24eee0:
    // 0x24eee0: 0x45000029
label_24eee4:
    if (ctx->pc == 0x24EEE4u) {
        ctx->pc = 0x24EEE8u;
        goto label_24eee8;
    }
    ctx->pc = 0x24EEE0u;
    {
        const bool branch_taken_0x24eee0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24eee0) {
            ctx->pc = 0x24EF88u;
            goto label_24ef88;
        }
    }
    ctx->pc = 0x24EEE8u;
label_24eee8:
    // 0x24eee8: 0x96420002
    ctx->pc = 0x24eee8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_24eeec:
    // 0x24eeec: 0x30422000
    ctx->pc = 0x24eeecu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8192));
label_24eef0:
    // 0x24eef0: 0x50400009
label_24eef4:
    if (ctx->pc == 0x24EEF4u) {
        ctx->pc = 0x24EEF4u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->pc = 0x24EEF8u;
        goto label_24eef8;
    }
    ctx->pc = 0x24EEF0u;
    {
        const bool branch_taken_0x24eef0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x24eef0) {
            ctx->pc = 0x24EEF4u;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
            ctx->pc = 0x24EF18u;
            goto label_24ef18;
        }
    }
    ctx->pc = 0x24EEF8u;
label_24eef8:
    // 0x24eef8: 0x3c013d08
    ctx->pc = 0x24eef8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15624 << 16));
label_24eefc:
    // 0x24eefc: 0x34218889
    ctx->pc = 0x24eefcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 34953));
label_24ef00:
    // 0x24ef00: 0x44816000
    ctx->pc = 0x24ef00u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_24ef04:
    // 0x24ef04: 0x3c01bf4c
    ctx->pc = 0x24ef04u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48972 << 16));
label_24ef08:
    // 0x24ef08: 0x3421cccd
    ctx->pc = 0x24ef08u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
label_24ef0c:
    // 0x24ef0c: 0x44816800
    ctx->pc = 0x24ef0cu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
label_24ef10:
    // 0x24ef10: 0x10000015
label_24ef14:
    if (ctx->pc == 0x24EF14u) {
        ctx->pc = 0x24EF18u;
        goto label_24ef18;
    }
    ctx->pc = 0x24EF10u;
    {
        const bool branch_taken_0x24ef10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x24ef10) {
            ctx->pc = 0x24EF68u;
            goto label_24ef68;
        }
    }
    ctx->pc = 0x24EF18u;
label_24ef18:
    // 0x24ef18: 0x30420020
    ctx->pc = 0x24ef18u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32));
label_24ef1c:
    // 0x24ef1c: 0x50400009
label_24ef20:
    if (ctx->pc == 0x24EF20u) {
        ctx->pc = 0x24EF20u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->pc = 0x24EF24u;
        goto label_24ef24;
    }
    ctx->pc = 0x24EF1Cu;
    {
        const bool branch_taken_0x24ef1c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x24ef1c) {
            ctx->pc = 0x24EF20u;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
            ctx->pc = 0x24EF44u;
            goto label_24ef44;
        }
    }
    ctx->pc = 0x24EF24u;
label_24ef24:
    // 0x24ef24: 0x3c013d08
    ctx->pc = 0x24ef24u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15624 << 16));
label_24ef28:
    // 0x24ef28: 0x34218889
    ctx->pc = 0x24ef28u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 34953));
label_24ef2c:
    // 0x24ef2c: 0x44816000
    ctx->pc = 0x24ef2cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_24ef30:
    // 0x24ef30: 0x3c01bf19
    ctx->pc = 0x24ef30u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48921 << 16));
label_24ef34:
    // 0x24ef34: 0x3421999a
    ctx->pc = 0x24ef34u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 39322));
label_24ef38:
    // 0x24ef38: 0x44816800
    ctx->pc = 0x24ef38u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
label_24ef3c:
    // 0x24ef3c: 0x1000000a
label_24ef40:
    if (ctx->pc == 0x24EF40u) {
        ctx->pc = 0x24EF44u;
        goto label_24ef44;
    }
    ctx->pc = 0x24EF3Cu;
    {
        const bool branch_taken_0x24ef3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x24ef3c) {
            ctx->pc = 0x24EF68u;
            goto label_24ef68;
        }
    }
    ctx->pc = 0x24EF44u;
label_24ef44:
    // 0x24ef44: 0x30420010
    ctx->pc = 0x24ef44u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
label_24ef48:
    // 0x24ef48: 0x1040000e
label_24ef4c:
    if (ctx->pc == 0x24EF4Cu) {
        ctx->pc = 0x24EF50u;
        goto label_24ef50;
    }
    ctx->pc = 0x24EF48u;
    {
        const bool branch_taken_0x24ef48 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x24ef48) {
            ctx->pc = 0x24EF84u;
            goto label_24ef84;
        }
    }
    ctx->pc = 0x24EF50u;
label_24ef50:
    // 0x24ef50: 0x3c013d08
    ctx->pc = 0x24ef50u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15624 << 16));
label_24ef54:
    // 0x24ef54: 0x34218889
    ctx->pc = 0x24ef54u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 34953));
label_24ef58:
    // 0x24ef58: 0x44816000
    ctx->pc = 0x24ef58u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_24ef5c:
    // 0x24ef5c: 0x3c01becc
    ctx->pc = 0x24ef5cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48844 << 16));
label_24ef60:
    // 0x24ef60: 0x3421cccd
    ctx->pc = 0x24ef60u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
label_24ef64:
    // 0x24ef64: 0x44816800
    ctx->pc = 0x24ef64u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
label_24ef68:
    // 0x24ef68: 0xc0a01a4
label_24ef6c:
    if (ctx->pc == 0x24EF6Cu) {
        ctx->pc = 0x24EF70u;
        goto label_24ef70;
    }
    ctx->pc = 0x24EF68u;
    SET_GPR_U32(ctx, 31, 0x24EF70u);
    ctx->pc = 0x280690u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetAmbientSpecial_0x280690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EF70u; }
    }
    if (ctx->pc != 0x24EF70u) { return; }
    ctx->pc = 0x24EF70u;
label_24ef70:
    // 0x24ef70: 0x3c014000
    ctx->pc = 0x24ef70u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
label_24ef74:
    // 0x24ef74: 0x44810000
    ctx->pc = 0x24ef74u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_24ef78:
    // 0x24ef78: 0x12a00002
label_24ef7c:
    if (ctx->pc == 0x24EF7Cu) {
        ctx->pc = 0x24EF7Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2004), bits); }
        ctx->pc = 0x24EF80u;
        goto label_24ef80;
    }
    ctx->pc = 0x24EF78u;
    {
        const bool branch_taken_0x24ef78 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        ctx->pc = 0x24EF7Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2004), bits); }
        if (branch_taken_0x24ef78) {
            ctx->pc = 0x24EF84u;
            goto label_24ef84;
        }
    }
    ctx->pc = 0x24EF80u;
label_24ef80:
    // 0x24ef80: 0xe6a007d4
    ctx->pc = 0x24ef80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 2004), bits); }
label_24ef84:
    // 0x24ef84: 0x44800000
    ctx->pc = 0x24ef84u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_24ef88:
    // 0x24ef88: 0x4600a834
    ctx->pc = 0x24ef88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24ef8c:
    // 0x24ef8c: 0x45000003
label_24ef90:
    if (ctx->pc == 0x24EF90u) {
        ctx->pc = 0x24EF94u;
        goto label_24ef94;
    }
    ctx->pc = 0x24EF8Cu;
    {
        const bool branch_taken_0x24ef8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24ef8c) {
            ctx->pc = 0x24EF9Cu;
            goto label_24ef9c;
        }
    }
    ctx->pc = 0x24EF94u;
label_24ef94:
    // 0x24ef94: 0x10000004
label_24ef98:
    if (ctx->pc == 0x24EF98u) {
        ctx->pc = 0x24EF98u;
        ctx->f[21] = FPU_MOV_S(ctx->f[22]);
        ctx->pc = 0x24EF9Cu;
        goto label_24ef9c;
    }
    ctx->pc = 0x24EF94u;
    {
        const bool branch_taken_0x24ef94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24EF98u;
        ctx->f[21] = FPU_MOV_S(ctx->f[22]);
        if (branch_taken_0x24ef94) {
            ctx->pc = 0x24EFA8u;
            goto label_24efa8;
        }
    }
    ctx->pc = 0x24EF9Cu;
label_24ef9c:
    // 0x24ef9c: 0x3c013f80
    ctx->pc = 0x24ef9cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_24efa0:
    // 0x24efa0: 0x44810000
    ctx->pc = 0x24efa0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_24efa4:
    // 0x24efa4: 0x4600ad40
    ctx->pc = 0x24efa4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_24efa8:
    // 0x24efa8: 0x3c013f80
    ctx->pc = 0x24efa8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_24efac:
    // 0x24efac: 0x44810000
    ctx->pc = 0x24efacu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_24efb0:
    // 0x24efb0: 0x4600c834
    ctx->pc = 0x24efb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24efb4:
    // 0x24efb4: 0x0
    ctx->pc = 0x24efb4u;
    // NOP
label_24efb8:
    // 0x24efb8: 0x4502000c
label_24efbc:
    if (ctx->pc == 0x24EFBCu) {
        ctx->pc = 0x24EFBCu;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->pc = 0x24EFC0u;
        goto label_24efc0;
    }
    ctx->pc = 0x24EFB8u;
    {
        const bool branch_taken_0x24efb8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24efb8) {
            ctx->pc = 0x24EFBCu;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
            ctx->pc = 0x24EFECu;
            goto label_24efec;
        }
    }
    ctx->pc = 0x24EFC0u;
label_24efc0:
    // 0x24efc0: 0x46170036
    ctx->pc = 0x24efc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24efc4:
    // 0x24efc4: 0x0
    ctx->pc = 0x24efc4u;
    // NOP
label_24efc8:
    // 0x24efc8: 0x45020008
label_24efcc:
    if (ctx->pc == 0x24EFCCu) {
        ctx->pc = 0x24EFCCu;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->pc = 0x24EFD0u;
        goto label_24efd0;
    }
    ctx->pc = 0x24EFC8u;
    {
        const bool branch_taken_0x24efc8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24efc8) {
            ctx->pc = 0x24EFCCu;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
            ctx->pc = 0x24EFECu;
            goto label_24efec;
        }
    }
    ctx->pc = 0x24EFD0u;
label_24efd0:
    // 0x24efd0: 0x86440054
    ctx->pc = 0x24efd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 84)));
label_24efd4:
    // 0x24efd4: 0x4820005
label_24efd8:
    if (ctx->pc == 0x24EFD8u) {
        ctx->pc = 0x24EFD8u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->pc = 0x24EFDCu;
        goto label_24efdc;
    }
    ctx->pc = 0x24EFD4u;
    {
        const bool branch_taken_0x24efd4 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x24efd4) {
            ctx->pc = 0x24EFD8u;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
            ctx->pc = 0x24EFECu;
            goto label_24efec;
        }
    }
    ctx->pc = 0x24EFDCu;
label_24efdc:
    // 0x24efdc: 0x8e650000
    ctx->pc = 0x24efdcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_24efe0:
    // 0x24efe0: 0xc0a3a1c
label_24efe4:
    if (ctx->pc == 0x24EFE4u) {
        ctx->pc = 0x24EFE4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 19), 96));
        ctx->pc = 0x24EFE8u;
        goto label_24efe8;
    }
    ctx->pc = 0x24EFE0u;
    SET_GPR_U32(ctx, 31, 0x24EFE8u);
    ctx->pc = 0x24EFE4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 19), 96));
    ctx->pc = 0x28E870u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewHelp_0x28e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EFE8u; }
    }
    if (ctx->pc != 0x24EFE8u) { return; }
    ctx->pc = 0x24EFE8u;
label_24efe8:
    // 0x24efe8: 0x96420002
    ctx->pc = 0x24efe8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_24efec:
    // 0x24efec: 0x30420400
    ctx->pc = 0x24efecu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1024));
label_24eff0:
    // 0x24eff0: 0x50400013
label_24eff4:
    if (ctx->pc == 0x24EFF4u) {
        ctx->pc = 0x24EFF4u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->pc = 0x24EFF8u;
        goto label_24eff8;
    }
    ctx->pc = 0x24EFF0u;
    {
        const bool branch_taken_0x24eff0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x24eff0) {
            ctx->pc = 0x24EFF4u;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
            ctx->pc = 0x24F040u;
            goto label_24f040;
        }
    }
    ctx->pc = 0x24EFF8u;
label_24eff8:
    // 0x24eff8: 0x4617b036
    ctx->pc = 0x24eff8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24effc:
    // 0x24effc: 0x0
    ctx->pc = 0x24effcu;
    // NOP
label_24f000:
    // 0x24f000: 0x4500000a
label_24f004:
    if (ctx->pc == 0x24F004u) {
        ctx->pc = 0x24F004u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 1720)));
        ctx->pc = 0x24F008u;
        goto label_24f008;
    }
    ctx->pc = 0x24F000u;
    {
        const bool branch_taken_0x24f000 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24F004u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 1720)));
        if (branch_taken_0x24f000) {
            ctx->pc = 0x24F02Cu;
            goto label_24f02c;
        }
    }
    ctx->pc = 0x24F008u;
label_24f008:
    // 0x24f008: 0x4615b834
    ctx->pc = 0x24f008u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24f00c:
    // 0x24f00c: 0x45000007
label_24f010:
    if (ctx->pc == 0x24F010u) {
        ctx->pc = 0x24F014u;
        goto label_24f014;
    }
    ctx->pc = 0x24F00Cu;
    {
        const bool branch_taken_0x24f00c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24f00c) {
            ctx->pc = 0x24F02Cu;
            goto label_24f02c;
        }
    }
    ctx->pc = 0x24F014u;
label_24f014:
    // 0x24f014: 0x10800009
label_24f018:
    if (ctx->pc == 0x24F018u) {
        ctx->pc = 0x24F018u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x24F01Cu;
        goto label_24f01c;
    }
    ctx->pc = 0x24F014u;
    {
        const bool branch_taken_0x24f014 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x24F018u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x24f014) {
            ctx->pc = 0x24F03Cu;
            goto label_24f03c;
        }
    }
    ctx->pc = 0x24F01Cu;
label_24f01c:
    // 0x24f01c: 0xc0b41b8
label_24f020:
    if (ctx->pc == 0x24F020u) {
        ctx->pc = 0x24F020u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24F024u;
        goto label_24f024;
    }
    ctx->pc = 0x24F01Cu;
    SET_GPR_U32(ctx, 31, 0x24F024u);
    ctx->pc = 0x24F020u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F024u; }
    }
    if (ctx->pc != 0x24F024u) { return; }
    ctx->pc = 0x24F024u;
label_24f024:
    // 0x24f024: 0x10000006
label_24f028:
    if (ctx->pc == 0x24F028u) {
        ctx->pc = 0x24F028u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->pc = 0x24F02Cu;
        goto label_24f02c;
    }
    ctx->pc = 0x24F024u;
    {
        const bool branch_taken_0x24f024 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24F028u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
        if (branch_taken_0x24f024) {
            ctx->pc = 0x24F040u;
            goto label_24f040;
        }
    }
    ctx->pc = 0x24F02Cu;
label_24f02c:
    // 0x24f02c: 0x10800003
label_24f030:
    if (ctx->pc == 0x24F030u) {
        ctx->pc = 0x24F030u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x24F034u;
        goto label_24f034;
    }
    ctx->pc = 0x24F02Cu;
    {
        const bool branch_taken_0x24f02c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x24F030u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x24f02c) {
            ctx->pc = 0x24F03Cu;
            goto label_24f03c;
        }
    }
    ctx->pc = 0x24F034u;
label_24f034:
    // 0x24f034: 0xc0b41e4
label_24f038:
    if (ctx->pc == 0x24F038u) {
        ctx->pc = 0x24F038u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24F03Cu;
        goto label_24f03c;
    }
    ctx->pc = 0x24F034u;
    SET_GPR_U32(ctx, 31, 0x24F03Cu);
    ctx->pc = 0x24F038u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0790u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeClearFlags_0x2d0790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F03Cu; }
    }
    if (ctx->pc != 0x24F03Cu) { return; }
    ctx->pc = 0x24F03Cu;
label_24f03c:
    // 0x24f03c: 0x96420002
    ctx->pc = 0x24f03cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_24f040:
    // 0x24f040: 0x30420080
    ctx->pc = 0x24f040u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 128));
label_24f044:
    // 0x24f044: 0x54400001
label_24f048:
    if (ctx->pc == 0x24F048u) {
        ctx->pc = 0x24F048u;
        ctx->f[21] = FPU_MOV_S(ctx->f[22]);
        ctx->pc = 0x24F04Cu;
        goto label_24f04c;
    }
    ctx->pc = 0x24F044u;
    {
        const bool branch_taken_0x24f044 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x24f044) {
            ctx->pc = 0x24F048u;
            ctx->f[21] = FPU_MOV_S(ctx->f[22]);
            ctx->pc = 0x24F04Cu;
            goto label_24f04c;
        }
    }
    ctx->pc = 0x24F04Cu;
label_24f04c:
    // 0x24f04c: 0x4617b036
    ctx->pc = 0x24f04cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24f050:
    // 0x24f050: 0x0
    ctx->pc = 0x24f050u;
    // NOP
label_24f054:
    // 0x24f054: 0x450200ec
label_24f058:
    if (ctx->pc == 0x24F058u) {
        ctx->pc = 0x24F058u;
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 78)));
        ctx->pc = 0x24F05Cu;
        goto label_24f05c;
    }
    ctx->pc = 0x24F054u;
    {
        const bool branch_taken_0x24f054 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24f054) {
            ctx->pc = 0x24F058u;
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 78)));
            ctx->pc = 0x24F408u;
            goto label_24f408;
        }
    }
    ctx->pc = 0x24F05Cu;
label_24f05c:
    // 0x24f05c: 0x4615c834
    ctx->pc = 0x24f05cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24f060:
    // 0x24f060: 0x0
    ctx->pc = 0x24f060u;
    // NOP
label_24f064:
    // 0x24f064: 0x450200e8
label_24f068:
    if (ctx->pc == 0x24F068u) {
        ctx->pc = 0x24F068u;
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 78)));
        ctx->pc = 0x24F06Cu;
        goto label_24f06c;
    }
    ctx->pc = 0x24F064u;
    {
        const bool branch_taken_0x24f064 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24f064) {
            ctx->pc = 0x24F068u;
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 78)));
            ctx->pc = 0x24F408u;
            goto label_24f408;
        }
    }
    ctx->pc = 0x24F06Cu;
label_24f06c:
    // 0x24f06c: 0xc6400038
    ctx->pc = 0x24f06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24f070:
    // 0x24f070: 0x44801000
    ctx->pc = 0x24f070u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 0);
label_24f074:
    // 0x24f074: 0x46020032
    ctx->pc = 0x24f074u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24f078:
    // 0x24f078: 0x0
    ctx->pc = 0x24f078u;
    // NOP
label_24f07c:
    // 0x24f07c: 0x45010006
label_24f080:
    if (ctx->pc == 0x24F080u) {
        ctx->pc = 0x24F080u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x24F084u;
        goto label_24f084;
    }
    ctx->pc = 0x24F07Cu;
    {
        const bool branch_taken_0x24f07c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24F080u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x24f07c) {
            ctx->pc = 0x24F098u;
            goto label_24f098;
        }
    }
    ctx->pc = 0x24F084u;
label_24f084:
    // 0x24f084: 0xc6600800
    ctx->pc = 0x24f084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24f088:
    // 0x24f088: 0xc66108e8
    ctx->pc = 0x24f088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24f08c:
    // 0x24f08c: 0x46010001
    ctx->pc = 0x24f08cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_24f090:
    // 0x24f090: 0xe6600800
    ctx->pc = 0x24f090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2048), bits); }
label_24f094:
    // 0x24f094: 0xe66208e8
    ctx->pc = 0x24f094u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2280), bits); }
label_24f098:
    // 0x24f098: 0xac551eb8
    ctx->pc = 0x24f098u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7864), GPR_U32(ctx, 21));
label_24f09c:
    // 0x24f09c: 0x86430000
    ctx->pc = 0x24f09cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_24f0a0:
    // 0x24f0a0: 0x2c62000b
    ctx->pc = 0x24f0a0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 11));
label_24f0a4:
    // 0x24f0a4: 0x104000d2
label_24f0a8:
    if (ctx->pc == 0x24F0A8u) {
        ctx->pc = 0x24F0A8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x24F0ACu;
        goto label_24f0ac;
    }
    ctx->pc = 0x24F0A4u;
    {
        const bool branch_taken_0x24f0a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24F0A8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x24f0a4) {
            ctx->pc = 0x24F3F0u;
            goto label_24f3f0;
        }
    }
    ctx->pc = 0x24F0ACu;
label_24f0ac:
    // 0x24f0ac: 0x24428440
    ctx->pc = 0x24f0acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294935616));
label_24f0b0:
    // 0x24f0b0: 0x31880
    ctx->pc = 0x24f0b0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_24f0b4:
    // 0x24f0b4: 0x621821
    ctx->pc = 0x24f0b4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_24f0b8:
    // 0x24f0b8: 0x8c620000
    ctx->pc = 0x24f0b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_24f0bc:
    // 0x24f0bc: 0x400008
label_24f0c0:
    if (ctx->pc == 0x24F0C0u) {
        ctx->pc = 0x24F0C4u;
        goto label_24f0c4;
    }
    ctx->pc = 0x24F0BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24EE20u: goto label_24ee20;
            case 0x24EE24u: goto label_24ee24;
            case 0x24EE28u: goto label_24ee28;
            case 0x24EE2Cu: goto label_24ee2c;
            case 0x24EE30u: goto label_24ee30;
            case 0x24EE34u: goto label_24ee34;
            case 0x24EE38u: goto label_24ee38;
            case 0x24EE3Cu: goto label_24ee3c;
            case 0x24EE40u: goto label_24ee40;
            case 0x24EE44u: goto label_24ee44;
            case 0x24EE48u: goto label_24ee48;
            case 0x24EE4Cu: goto label_24ee4c;
            case 0x24EE50u: goto label_24ee50;
            case 0x24EE54u: goto label_24ee54;
            case 0x24EE58u: goto label_24ee58;
            case 0x24EE5Cu: goto label_24ee5c;
            case 0x24EE60u: goto label_24ee60;
            case 0x24EE64u: goto label_24ee64;
            case 0x24EE68u: goto label_24ee68;
            case 0x24EE6Cu: goto label_24ee6c;
            case 0x24EE70u: goto label_24ee70;
            case 0x24EE74u: goto label_24ee74;
            case 0x24EE78u: goto label_24ee78;
            case 0x24EE7Cu: goto label_24ee7c;
            case 0x24EE80u: goto label_24ee80;
            case 0x24EE84u: goto label_24ee84;
            case 0x24EE88u: goto label_24ee88;
            case 0x24EE8Cu: goto label_24ee8c;
            case 0x24EE90u: goto label_24ee90;
            case 0x24EE94u: goto label_24ee94;
            case 0x24EE98u: goto label_24ee98;
            case 0x24EE9Cu: goto label_24ee9c;
            case 0x24EEA0u: goto label_24eea0;
            case 0x24EEA4u: goto label_24eea4;
            case 0x24EEA8u: goto label_24eea8;
            case 0x24EEACu: goto label_24eeac;
            case 0x24EEB0u: goto label_24eeb0;
            case 0x24EEB4u: goto label_24eeb4;
            case 0x24EEB8u: goto label_24eeb8;
            case 0x24EEBCu: goto label_24eebc;
            case 0x24EEC0u: goto label_24eec0;
            case 0x24EEC4u: goto label_24eec4;
            case 0x24EEC8u: goto label_24eec8;
            case 0x24EECCu: goto label_24eecc;
            case 0x24EED0u: goto label_24eed0;
            case 0x24EED4u: goto label_24eed4;
            case 0x24EED8u: goto label_24eed8;
            case 0x24EEDCu: goto label_24eedc;
            case 0x24EEE0u: goto label_24eee0;
            case 0x24EEE4u: goto label_24eee4;
            case 0x24EEE8u: goto label_24eee8;
            case 0x24EEECu: goto label_24eeec;
            case 0x24EEF0u: goto label_24eef0;
            case 0x24EEF4u: goto label_24eef4;
            case 0x24EEF8u: goto label_24eef8;
            case 0x24EEFCu: goto label_24eefc;
            case 0x24EF00u: goto label_24ef00;
            case 0x24EF04u: goto label_24ef04;
            case 0x24EF08u: goto label_24ef08;
            case 0x24EF0Cu: goto label_24ef0c;
            case 0x24EF10u: goto label_24ef10;
            case 0x24EF14u: goto label_24ef14;
            case 0x24EF18u: goto label_24ef18;
            case 0x24EF1Cu: goto label_24ef1c;
            case 0x24EF20u: goto label_24ef20;
            case 0x24EF24u: goto label_24ef24;
            case 0x24EF28u: goto label_24ef28;
            case 0x24EF2Cu: goto label_24ef2c;
            case 0x24EF30u: goto label_24ef30;
            case 0x24EF34u: goto label_24ef34;
            case 0x24EF38u: goto label_24ef38;
            case 0x24EF3Cu: goto label_24ef3c;
            case 0x24EF40u: goto label_24ef40;
            case 0x24EF44u: goto label_24ef44;
            case 0x24EF48u: goto label_24ef48;
            case 0x24EF4Cu: goto label_24ef4c;
            case 0x24EF50u: goto label_24ef50;
            case 0x24EF54u: goto label_24ef54;
            case 0x24EF58u: goto label_24ef58;
            case 0x24EF5Cu: goto label_24ef5c;
            case 0x24EF60u: goto label_24ef60;
            case 0x24EF64u: goto label_24ef64;
            case 0x24EF68u: goto label_24ef68;
            case 0x24EF6Cu: goto label_24ef6c;
            case 0x24EF70u: goto label_24ef70;
            case 0x24EF74u: goto label_24ef74;
            case 0x24EF78u: goto label_24ef78;
            case 0x24EF7Cu: goto label_24ef7c;
            case 0x24EF80u: goto label_24ef80;
            case 0x24EF84u: goto label_24ef84;
            case 0x24EF88u: goto label_24ef88;
            case 0x24EF8Cu: goto label_24ef8c;
            case 0x24EF90u: goto label_24ef90;
            case 0x24EF94u: goto label_24ef94;
            case 0x24EF98u: goto label_24ef98;
            case 0x24EF9Cu: goto label_24ef9c;
            case 0x24EFA0u: goto label_24efa0;
            case 0x24EFA4u: goto label_24efa4;
            case 0x24EFA8u: goto label_24efa8;
            case 0x24EFACu: goto label_24efac;
            case 0x24EFB0u: goto label_24efb0;
            case 0x24EFB4u: goto label_24efb4;
            case 0x24EFB8u: goto label_24efb8;
            case 0x24EFBCu: goto label_24efbc;
            case 0x24EFC0u: goto label_24efc0;
            case 0x24EFC4u: goto label_24efc4;
            case 0x24EFC8u: goto label_24efc8;
            case 0x24EFCCu: goto label_24efcc;
            case 0x24EFD0u: goto label_24efd0;
            case 0x24EFD4u: goto label_24efd4;
            case 0x24EFD8u: goto label_24efd8;
            case 0x24EFDCu: goto label_24efdc;
            case 0x24EFE0u: goto label_24efe0;
            case 0x24EFE4u: goto label_24efe4;
            case 0x24EFE8u: goto label_24efe8;
            case 0x24EFECu: goto label_24efec;
            case 0x24EFF0u: goto label_24eff0;
            case 0x24EFF4u: goto label_24eff4;
            case 0x24EFF8u: goto label_24eff8;
            case 0x24EFFCu: goto label_24effc;
            case 0x24F000u: goto label_24f000;
            case 0x24F004u: goto label_24f004;
            case 0x24F008u: goto label_24f008;
            case 0x24F00Cu: goto label_24f00c;
            case 0x24F010u: goto label_24f010;
            case 0x24F014u: goto label_24f014;
            case 0x24F018u: goto label_24f018;
            case 0x24F01Cu: goto label_24f01c;
            case 0x24F020u: goto label_24f020;
            case 0x24F024u: goto label_24f024;
            case 0x24F028u: goto label_24f028;
            case 0x24F02Cu: goto label_24f02c;
            case 0x24F030u: goto label_24f030;
            case 0x24F034u: goto label_24f034;
            case 0x24F038u: goto label_24f038;
            case 0x24F03Cu: goto label_24f03c;
            case 0x24F040u: goto label_24f040;
            case 0x24F044u: goto label_24f044;
            case 0x24F048u: goto label_24f048;
            case 0x24F04Cu: goto label_24f04c;
            case 0x24F050u: goto label_24f050;
            case 0x24F054u: goto label_24f054;
            case 0x24F058u: goto label_24f058;
            case 0x24F05Cu: goto label_24f05c;
            case 0x24F060u: goto label_24f060;
            case 0x24F064u: goto label_24f064;
            case 0x24F068u: goto label_24f068;
            case 0x24F06Cu: goto label_24f06c;
            case 0x24F070u: goto label_24f070;
            case 0x24F074u: goto label_24f074;
            case 0x24F078u: goto label_24f078;
            case 0x24F07Cu: goto label_24f07c;
            case 0x24F080u: goto label_24f080;
            case 0x24F084u: goto label_24f084;
            case 0x24F088u: goto label_24f088;
            case 0x24F08Cu: goto label_24f08c;
            case 0x24F090u: goto label_24f090;
            case 0x24F094u: goto label_24f094;
            case 0x24F098u: goto label_24f098;
            case 0x24F09Cu: goto label_24f09c;
            case 0x24F0A0u: goto label_24f0a0;
            case 0x24F0A4u: goto label_24f0a4;
            case 0x24F0A8u: goto label_24f0a8;
            case 0x24F0ACu: goto label_24f0ac;
            case 0x24F0B0u: goto label_24f0b0;
            case 0x24F0B4u: goto label_24f0b4;
            case 0x24F0B8u: goto label_24f0b8;
            case 0x24F0BCu: goto label_24f0bc;
            case 0x24F0C0u: goto label_24f0c0;
            case 0x24F0C4u: goto label_24f0c4;
            case 0x24F0C8u: goto label_24f0c8;
            case 0x24F0CCu: goto label_24f0cc;
            case 0x24F0D0u: goto label_24f0d0;
            case 0x24F0D4u: goto label_24f0d4;
            case 0x24F0D8u: goto label_24f0d8;
            case 0x24F0DCu: goto label_24f0dc;
            case 0x24F0E0u: goto label_24f0e0;
            case 0x24F0E4u: goto label_24f0e4;
            case 0x24F0E8u: goto label_24f0e8;
            case 0x24F0ECu: goto label_24f0ec;
            case 0x24F0F0u: goto label_24f0f0;
            case 0x24F0F4u: goto label_24f0f4;
            case 0x24F0F8u: goto label_24f0f8;
            case 0x24F0FCu: goto label_24f0fc;
            case 0x24F100u: goto label_24f100;
            case 0x24F104u: goto label_24f104;
            case 0x24F108u: goto label_24f108;
            case 0x24F10Cu: goto label_24f10c;
            case 0x24F110u: goto label_24f110;
            case 0x24F114u: goto label_24f114;
            case 0x24F118u: goto label_24f118;
            case 0x24F11Cu: goto label_24f11c;
            case 0x24F120u: goto label_24f120;
            case 0x24F124u: goto label_24f124;
            case 0x24F128u: goto label_24f128;
            case 0x24F12Cu: goto label_24f12c;
            case 0x24F130u: goto label_24f130;
            case 0x24F134u: goto label_24f134;
            case 0x24F138u: goto label_24f138;
            case 0x24F13Cu: goto label_24f13c;
            case 0x24F140u: goto label_24f140;
            case 0x24F144u: goto label_24f144;
            case 0x24F148u: goto label_24f148;
            case 0x24F14Cu: goto label_24f14c;
            case 0x24F150u: goto label_24f150;
            case 0x24F154u: goto label_24f154;
            case 0x24F158u: goto label_24f158;
            case 0x24F15Cu: goto label_24f15c;
            case 0x24F160u: goto label_24f160;
            case 0x24F164u: goto label_24f164;
            case 0x24F168u: goto label_24f168;
            case 0x24F16Cu: goto label_24f16c;
            case 0x24F170u: goto label_24f170;
            case 0x24F174u: goto label_24f174;
            case 0x24F178u: goto label_24f178;
            case 0x24F17Cu: goto label_24f17c;
            case 0x24F180u: goto label_24f180;
            case 0x24F184u: goto label_24f184;
            case 0x24F188u: goto label_24f188;
            case 0x24F18Cu: goto label_24f18c;
            case 0x24F190u: goto label_24f190;
            case 0x24F194u: goto label_24f194;
            case 0x24F198u: goto label_24f198;
            case 0x24F19Cu: goto label_24f19c;
            case 0x24F1A0u: goto label_24f1a0;
            case 0x24F1A4u: goto label_24f1a4;
            case 0x24F1A8u: goto label_24f1a8;
            case 0x24F1ACu: goto label_24f1ac;
            case 0x24F1B0u: goto label_24f1b0;
            case 0x24F1B4u: goto label_24f1b4;
            case 0x24F1B8u: goto label_24f1b8;
            case 0x24F1BCu: goto label_24f1bc;
            case 0x24F1C0u: goto label_24f1c0;
            case 0x24F1C4u: goto label_24f1c4;
            case 0x24F1C8u: goto label_24f1c8;
            case 0x24F1CCu: goto label_24f1cc;
            case 0x24F1D0u: goto label_24f1d0;
            case 0x24F1D4u: goto label_24f1d4;
            case 0x24F1D8u: goto label_24f1d8;
            case 0x24F1DCu: goto label_24f1dc;
            case 0x24F1E0u: goto label_24f1e0;
            case 0x24F1E4u: goto label_24f1e4;
            case 0x24F1E8u: goto label_24f1e8;
            case 0x24F1ECu: goto label_24f1ec;
            case 0x24F1F0u: goto label_24f1f0;
            case 0x24F1F4u: goto label_24f1f4;
            case 0x24F1F8u: goto label_24f1f8;
            case 0x24F1FCu: goto label_24f1fc;
            case 0x24F200u: goto label_24f200;
            case 0x24F204u: goto label_24f204;
            case 0x24F208u: goto label_24f208;
            case 0x24F20Cu: goto label_24f20c;
            case 0x24F210u: goto label_24f210;
            case 0x24F214u: goto label_24f214;
            case 0x24F218u: goto label_24f218;
            case 0x24F21Cu: goto label_24f21c;
            case 0x24F220u: goto label_24f220;
            case 0x24F224u: goto label_24f224;
            case 0x24F228u: goto label_24f228;
            case 0x24F22Cu: goto label_24f22c;
            case 0x24F230u: goto label_24f230;
            case 0x24F234u: goto label_24f234;
            case 0x24F238u: goto label_24f238;
            case 0x24F23Cu: goto label_24f23c;
            case 0x24F240u: goto label_24f240;
            case 0x24F244u: goto label_24f244;
            case 0x24F248u: goto label_24f248;
            case 0x24F24Cu: goto label_24f24c;
            case 0x24F250u: goto label_24f250;
            case 0x24F254u: goto label_24f254;
            case 0x24F258u: goto label_24f258;
            case 0x24F25Cu: goto label_24f25c;
            case 0x24F260u: goto label_24f260;
            case 0x24F264u: goto label_24f264;
            case 0x24F268u: goto label_24f268;
            case 0x24F26Cu: goto label_24f26c;
            case 0x24F270u: goto label_24f270;
            case 0x24F274u: goto label_24f274;
            case 0x24F278u: goto label_24f278;
            case 0x24F27Cu: goto label_24f27c;
            case 0x24F280u: goto label_24f280;
            case 0x24F284u: goto label_24f284;
            case 0x24F288u: goto label_24f288;
            case 0x24F28Cu: goto label_24f28c;
            case 0x24F290u: goto label_24f290;
            case 0x24F294u: goto label_24f294;
            case 0x24F298u: goto label_24f298;
            case 0x24F29Cu: goto label_24f29c;
            case 0x24F2A0u: goto label_24f2a0;
            case 0x24F2A4u: goto label_24f2a4;
            case 0x24F2A8u: goto label_24f2a8;
            case 0x24F2ACu: goto label_24f2ac;
            case 0x24F2B0u: goto label_24f2b0;
            case 0x24F2B4u: goto label_24f2b4;
            case 0x24F2B8u: goto label_24f2b8;
            case 0x24F2BCu: goto label_24f2bc;
            case 0x24F2C0u: goto label_24f2c0;
            case 0x24F2C4u: goto label_24f2c4;
            case 0x24F2C8u: goto label_24f2c8;
            case 0x24F2CCu: goto label_24f2cc;
            case 0x24F2D0u: goto label_24f2d0;
            case 0x24F2D4u: goto label_24f2d4;
            case 0x24F2D8u: goto label_24f2d8;
            case 0x24F2DCu: goto label_24f2dc;
            case 0x24F2E0u: goto label_24f2e0;
            case 0x24F2E4u: goto label_24f2e4;
            case 0x24F2E8u: goto label_24f2e8;
            case 0x24F2ECu: goto label_24f2ec;
            case 0x24F2F0u: goto label_24f2f0;
            case 0x24F2F4u: goto label_24f2f4;
            case 0x24F2F8u: goto label_24f2f8;
            case 0x24F2FCu: goto label_24f2fc;
            case 0x24F300u: goto label_24f300;
            case 0x24F304u: goto label_24f304;
            case 0x24F308u: goto label_24f308;
            case 0x24F30Cu: goto label_24f30c;
            case 0x24F310u: goto label_24f310;
            case 0x24F314u: goto label_24f314;
            case 0x24F318u: goto label_24f318;
            case 0x24F31Cu: goto label_24f31c;
            case 0x24F320u: goto label_24f320;
            case 0x24F324u: goto label_24f324;
            case 0x24F328u: goto label_24f328;
            case 0x24F32Cu: goto label_24f32c;
            case 0x24F330u: goto label_24f330;
            case 0x24F334u: goto label_24f334;
            case 0x24F338u: goto label_24f338;
            case 0x24F33Cu: goto label_24f33c;
            case 0x24F340u: goto label_24f340;
            case 0x24F344u: goto label_24f344;
            case 0x24F348u: goto label_24f348;
            case 0x24F34Cu: goto label_24f34c;
            case 0x24F350u: goto label_24f350;
            case 0x24F354u: goto label_24f354;
            case 0x24F358u: goto label_24f358;
            case 0x24F35Cu: goto label_24f35c;
            case 0x24F360u: goto label_24f360;
            case 0x24F364u: goto label_24f364;
            case 0x24F368u: goto label_24f368;
            case 0x24F36Cu: goto label_24f36c;
            case 0x24F370u: goto label_24f370;
            case 0x24F374u: goto label_24f374;
            case 0x24F378u: goto label_24f378;
            case 0x24F37Cu: goto label_24f37c;
            case 0x24F380u: goto label_24f380;
            case 0x24F384u: goto label_24f384;
            case 0x24F388u: goto label_24f388;
            case 0x24F38Cu: goto label_24f38c;
            case 0x24F390u: goto label_24f390;
            case 0x24F394u: goto label_24f394;
            case 0x24F398u: goto label_24f398;
            case 0x24F39Cu: goto label_24f39c;
            case 0x24F3A0u: goto label_24f3a0;
            case 0x24F3A4u: goto label_24f3a4;
            case 0x24F3A8u: goto label_24f3a8;
            case 0x24F3ACu: goto label_24f3ac;
            case 0x24F3B0u: goto label_24f3b0;
            case 0x24F3B4u: goto label_24f3b4;
            case 0x24F3B8u: goto label_24f3b8;
            case 0x24F3BCu: goto label_24f3bc;
            case 0x24F3C0u: goto label_24f3c0;
            case 0x24F3C4u: goto label_24f3c4;
            case 0x24F3C8u: goto label_24f3c8;
            case 0x24F3CCu: goto label_24f3cc;
            case 0x24F3D0u: goto label_24f3d0;
            case 0x24F3D4u: goto label_24f3d4;
            case 0x24F3D8u: goto label_24f3d8;
            case 0x24F3DCu: goto label_24f3dc;
            case 0x24F3E0u: goto label_24f3e0;
            case 0x24F3E4u: goto label_24f3e4;
            case 0x24F3E8u: goto label_24f3e8;
            case 0x24F3ECu: goto label_24f3ec;
            case 0x24F3F0u: goto label_24f3f0;
            case 0x24F3F4u: goto label_24f3f4;
            case 0x24F3F8u: goto label_24f3f8;
            case 0x24F3FCu: goto label_24f3fc;
            case 0x24F400u: goto label_24f400;
            case 0x24F404u: goto label_24f404;
            case 0x24F408u: goto label_24f408;
            case 0x24F40Cu: goto label_24f40c;
            case 0x24F410u: goto label_24f410;
            case 0x24F414u: goto label_24f414;
            case 0x24F418u: goto label_24f418;
            case 0x24F41Cu: goto label_24f41c;
            case 0x24F420u: goto label_24f420;
            case 0x24F424u: goto label_24f424;
            case 0x24F428u: goto label_24f428;
            case 0x24F42Cu: goto label_24f42c;
            case 0x24F430u: goto label_24f430;
            case 0x24F434u: goto label_24f434;
            case 0x24F438u: goto label_24f438;
            case 0x24F43Cu: goto label_24f43c;
            case 0x24F440u: goto label_24f440;
            case 0x24F444u: goto label_24f444;
            case 0x24F448u: goto label_24f448;
            case 0x24F44Cu: goto label_24f44c;
            case 0x24F450u: goto label_24f450;
            case 0x24F454u: goto label_24f454;
            case 0x24F458u: goto label_24f458;
            case 0x24F45Cu: goto label_24f45c;
            case 0x24F460u: goto label_24f460;
            case 0x24F464u: goto label_24f464;
            case 0x24F468u: goto label_24f468;
            default: break;
        }
        return;
    }
    ctx->pc = 0x24F0C4u;
label_24f0c4:
    // 0x24f0c4: 0x260202d
    ctx->pc = 0x24f0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24f0c8:
    // 0x24f0c8: 0x240282d
    ctx->pc = 0x24f0c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24f0cc:
    // 0x24f0cc: 0x10000004
label_24f0d0:
    if (ctx->pc == 0x24F0D0u) {
        ctx->pc = 0x24F0D0u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24F0D4u;
        goto label_24f0d4;
    }
    ctx->pc = 0x24F0CCu;
    {
        const bool branch_taken_0x24f0cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24F0D0u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24f0cc) {
            ctx->pc = 0x24F0E0u;
            goto label_24f0e0;
        }
    }
    ctx->pc = 0x24F0D4u;
label_24f0d4:
    // 0x24f0d4: 0x260202d
    ctx->pc = 0x24f0d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24f0d8:
    // 0x24f0d8: 0x240282d
    ctx->pc = 0x24f0d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24f0dc:
    // 0x24f0dc: 0x24060001
    ctx->pc = 0x24f0dcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_24f0e0:
    // 0x24f0e0: 0xc093a00
label_24f0e4:
    if (ctx->pc == 0x24F0E4u) {
        ctx->pc = 0x24F0E4u;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x24F0E8u;
        goto label_24f0e8;
    }
    ctx->pc = 0x24F0E0u;
    SET_GPR_U32(ctx, 31, 0x24F0E8u);
    ctx->pc = 0x24F0E4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x24E800u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlyrSfxDoDamageSub_0x24e800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F0E8u; }
    }
    if (ctx->pc != 0x24F0E8u) { return; }
    ctx->pc = 0x24F0E8u;
label_24f0e8:
    // 0x24f0e8: 0x100000c7
label_24f0ec:
    if (ctx->pc == 0x24F0ECu) {
        ctx->pc = 0x24F0ECu;
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 78)));
        ctx->pc = 0x24F0F0u;
        goto label_24f0f0;
    }
    ctx->pc = 0x24F0E8u;
    {
        const bool branch_taken_0x24f0e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24F0ECu;
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 78)));
        if (branch_taken_0x24f0e8) {
            ctx->pc = 0x24F408u;
            goto label_24f408;
        }
    }
    ctx->pc = 0x24F0F0u;
label_24f0f0:
    // 0x24f0f0: 0x4619b832
    ctx->pc = 0x24f0f0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[23], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24f0f4:
    // 0x24f0f4: 0x0
    ctx->pc = 0x24f0f4u;
    // NOP
label_24f0f8:
    // 0x24f0f8: 0x450100c2
label_24f0fc:
    if (ctx->pc == 0x24F0FCu) {
        ctx->pc = 0x24F0FCu;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24F100u;
        goto label_24f100;
    }
    ctx->pc = 0x24F0F8u;
    {
        const bool branch_taken_0x24f0f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24F0FCu;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24f0f8) {
            ctx->pc = 0x24F404u;
            goto label_24f404;
        }
    }
    ctx->pc = 0x24F100u;
label_24f100:
    // 0x24f100: 0x8e630130
    ctx->pc = 0x24f100u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 304)));
label_24f104:
    // 0x24f104: 0x3c02ffb7
    ctx->pc = 0x24f104u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65463 << 16));
label_24f108:
    // 0x24f108: 0x3442ffff
    ctx->pc = 0x24f108u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
label_24f10c:
    // 0x24f10c: 0x4615b032
    ctx->pc = 0x24f10cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[22], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24f110:
    // 0x24f110: 0x0
    ctx->pc = 0x24f110u;
    // NOP
label_24f114:
    // 0x24f114: 0x45000040
label_24f118:
    if (ctx->pc == 0x24F118u) {
        ctx->pc = 0x24F118u;
        SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x24F11Cu;
        goto label_24f11c;
    }
    ctx->pc = 0x24F114u;
    {
        const bool branch_taken_0x24f114 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24F118u;
        SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x24f114) {
            ctx->pc = 0x24F218u;
            goto label_24f218;
        }
    }
    ctx->pc = 0x24F11Cu;
label_24f11c:
    // 0x24f11c: 0xc6410014
    ctx->pc = 0x24f11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24f120:
    // 0x24f120: 0x44800000
    ctx->pc = 0x24f120u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_24f124:
    // 0x24f124: 0x46000832
    ctx->pc = 0x24f124u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24f128:
    // 0x24f128: 0x0
    ctx->pc = 0x24f128u;
    // NOP
label_24f12c:
    // 0x24f12c: 0x4500000f
label_24f130:
    if (ctx->pc == 0x24F130u) {
        ctx->pc = 0x24F130u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 64));
        ctx->pc = 0x24F134u;
        goto label_24f134;
    }
    ctx->pc = 0x24F12Cu;
    {
        const bool branch_taken_0x24f12c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24F130u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 64));
        if (branch_taken_0x24f12c) {
            ctx->pc = 0x24F16Cu;
            goto label_24f16c;
        }
    }
    ctx->pc = 0x24F134u;
label_24f134:
    // 0x24f134: 0x3a0282d
    ctx->pc = 0x24f134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24f138:
    // 0x24f138: 0xc0b57e6
label_24f13c:
    if (ctx->pc == 0x24F13Cu) {
        ctx->pc = 0x24F13Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x24F140u;
        goto label_24f140;
    }
    ctx->pc = 0x24F138u;
    SET_GPR_U32(ctx, 31, 0x24F140u);
    ctx->pc = 0x24F13Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2D5F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        YawVec3_0x2d5f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F140u; }
    }
    if (ctx->pc != 0x24F140u) { return; }
    ctx->pc = 0x24F140u;
label_24f140:
    // 0x24f140: 0x260202d
    ctx->pc = 0x24f140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24f144:
    // 0x24f144: 0x3a0282d
    ctx->pc = 0x24f144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24f148:
    // 0x24f148: 0x3c01bf80
    ctx->pc = 0x24f148u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
label_24f14c:
    // 0x24f14c: 0x44816000
    ctx->pc = 0x24f14cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_24f150:
    // 0x24f150: 0x3c014000
    ctx->pc = 0x24f150u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
label_24f154:
    // 0x24f154: 0x44816800
    ctx->pc = 0x24f154u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
label_24f158:
    // 0x24f158: 0x200302d
    ctx->pc = 0x24f158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24f15c:
    // 0x24f15c: 0xc0a3ec2
label_24f160:
    if (ctx->pc == 0x24F160u) {
        ctx->pc = 0x24F160u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24F164u;
        goto label_24f164;
    }
    ctx->pc = 0x24F15Cu;
    SET_GPR_U32(ctx, 31, 0x24F164u);
    ctx->pc = 0x24F160u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x28FB08u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerStartMissile_0x28fb08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F164u; }
    }
    if (ctx->pc != 0x24F164u) { return; }
    ctx->pc = 0x24F164u;
label_24f164:
    // 0x24f164: 0x10000095
label_24f168:
    if (ctx->pc == 0x24F168u) {
        ctx->pc = 0x24F168u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24F16Cu;
        goto label_24f16c;
    }
    ctx->pc = 0x24F164u;
    {
        const bool branch_taken_0x24f164 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24F168u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24f164) {
            ctx->pc = 0x24F3BCu;
            goto label_24f3bc;
        }
    }
    ctx->pc = 0x24F16Cu;
label_24f16c:
    // 0x24f16c: 0x4480a000
    ctx->pc = 0x24f16cu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 0);
label_24f170:
    // 0x24f170: 0x3c013e99
    ctx->pc = 0x24f170u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16025 << 16));
label_24f174:
    // 0x24f174: 0x3421999a
    ctx->pc = 0x24f174u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 39322));
label_24f178:
    // 0x24f178: 0x4481b000
    ctx->pc = 0x24f178u;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 1);
label_24f17c:
    // 0x24f17c: 0x3c013fc0
    ctx->pc = 0x24f17cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16320 << 16));
label_24f180:
    // 0x24f180: 0x4481c000
    ctx->pc = 0x24f180u;
    *(uint32_t*)&ctx->f[24] = GPR_U32(ctx, 1);
label_24f184:
    // 0x24f184: 0x3c013f80
    ctx->pc = 0x24f184u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_24f188:
    // 0x24f188: 0x4481a800
    ctx->pc = 0x24f188u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 1);
label_24f18c:
    // 0x24f18c: 0x0
    ctx->pc = 0x24f18cu;
    // NOP
label_24f190:
    // 0x24f190: 0xc64c0020
    ctx->pc = 0x24f190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_24f194:
    // 0x24f194: 0x26640040
    ctx->pc = 0x24f194u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 64));
label_24f198:
    // 0x24f198: 0x3a0282d
    ctx->pc = 0x24f198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24f19c:
    // 0x24f19c: 0xc0b57e6
label_24f1a0:
    if (ctx->pc == 0x24F1A0u) {
        ctx->pc = 0x24F1A0u;
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
        ctx->pc = 0x24F1A4u;
        goto label_24f1a4;
    }
    ctx->pc = 0x24F19Cu;
    SET_GPR_U32(ctx, 31, 0x24F1A4u);
    ctx->pc = 0x24F1A0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    ctx->pc = 0x2D5F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        YawVec3_0x2d5f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F1A4u; }
    }
    if (ctx->pc != 0x24F1A4u) { return; }
    ctx->pc = 0x24F1A4u;
label_24f1a4:
    // 0x24f1a4: 0xc7a00000
    ctx->pc = 0x24f1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24f1a8:
    // 0x24f1a8: 0x46160002
    ctx->pc = 0x24f1a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_24f1ac:
    // 0x24f1ac: 0xe7a00000
    ctx->pc = 0x24f1acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_24f1b0:
    // 0x24f1b0: 0xc7a00004
    ctx->pc = 0x24f1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24f1b4:
    // 0x24f1b4: 0x46180002
    ctx->pc = 0x24f1b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
label_24f1b8:
    // 0x24f1b8: 0xe7a00004
    ctx->pc = 0x24f1b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_24f1bc:
    // 0x24f1bc: 0xc7a00008
    ctx->pc = 0x24f1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24f1c0:
    // 0x24f1c0: 0x46160002
    ctx->pc = 0x24f1c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_24f1c4:
    // 0x24f1c4: 0xe7a00008
    ctx->pc = 0x24f1c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_24f1c8:
    // 0x24f1c8: 0x260202d
    ctx->pc = 0x24f1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24f1cc:
    // 0x24f1cc: 0x3a0282d
    ctx->pc = 0x24f1ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24f1d0:
    // 0x24f1d0: 0x3c0140a0
    ctx->pc = 0x24f1d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16544 << 16));
label_24f1d4:
    // 0x24f1d4: 0x44816000
    ctx->pc = 0x24f1d4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_24f1d8:
    // 0x24f1d8: 0x3c014000
    ctx->pc = 0x24f1d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
label_24f1dc:
    // 0x24f1dc: 0x44816800
    ctx->pc = 0x24f1dcu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
label_24f1e0:
    // 0x24f1e0: 0x200302d
    ctx->pc = 0x24f1e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24f1e4:
    // 0x24f1e4: 0xc0a3ec2
label_24f1e8:
    if (ctx->pc == 0x24F1E8u) {
        ctx->pc = 0x24F1E8u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24F1ECu;
        goto label_24f1ec;
    }
    ctx->pc = 0x24F1E4u;
    SET_GPR_U32(ctx, 31, 0x24F1ECu);
    ctx->pc = 0x24F1E8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x28FB08u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerStartMissile_0x28fb08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F1ECu; }
    }
    if (ctx->pc != 0x24F1ECu) { return; }
    ctx->pc = 0x24F1ECu;
label_24f1ec:
    // 0x24f1ec: 0xc6400014
    ctx->pc = 0x24f1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24f1f0:
    // 0x24f1f0: 0x0
    ctx->pc = 0x24f1f0u;
    // NOP
label_24f1f4:
    // 0x24f1f4: 0x0
    ctx->pc = 0x24f1f4u;
    // NOP
label_24f1f8:
    // 0x24f1f8: 0x4600a803
    ctx->pc = 0x24f1f8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[0] = ctx->f[21] / ctx->f[0];
label_24f1fc:
    // 0x24f1fc: 0x4600a500
    ctx->pc = 0x24f1fcu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_24f200:
    // 0x24f200: 0x4615a034
    ctx->pc = 0x24f200u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24f204:
    // 0x24f204: 0x0
    ctx->pc = 0x24f204u;
    // NOP
label_24f208:
    // 0x24f208: 0x4501ffe1
label_24f20c:
    if (ctx->pc == 0x24F20Cu) {
        ctx->pc = 0x24F20Cu;
        SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->pc = 0x24F210u;
        goto label_24f210;
    }
    ctx->pc = 0x24F208u;
    {
        const bool branch_taken_0x24f208 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24F20Cu;
        SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        if (branch_taken_0x24f208) {
            ctx->pc = 0x24F190u;
            goto label_24f190;
        }
    }
    ctx->pc = 0x24F210u;
label_24f210:
    // 0x24f210: 0x1000006a
label_24f214:
    if (ctx->pc == 0x24F214u) {
        ctx->pc = 0x24F218u;
        goto label_24f218;
    }
    ctx->pc = 0x24F210u;
    {
        const bool branch_taken_0x24f210 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x24f210) {
            ctx->pc = 0x24F3BCu;
            goto label_24f3bc;
        }
    }
    ctx->pc = 0x24F218u;
label_24f218:
    // 0x24f218: 0xc64d0014
    ctx->pc = 0x24f218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_24f21c:
    // 0x24f21c: 0x44800000
    ctx->pc = 0x24f21cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_24f220:
    // 0x24f220: 0x460d0034
    ctx->pc = 0x24f220u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24f224:
    // 0x24f224: 0x0
    ctx->pc = 0x24f224u;
    // NOP
label_24f228:
    // 0x24f228: 0x45020009
label_24f22c:
    if (ctx->pc == 0x24F22Cu) {
        ctx->pc = 0x24F22Cu;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->pc = 0x24F230u;
        goto label_24f230;
    }
    ctx->pc = 0x24F228u;
    {
        const bool branch_taken_0x24f228 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24f228) {
            ctx->pc = 0x24F22Cu;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
            ctx->pc = 0x24F250u;
            goto label_24f250;
        }
    }
    ctx->pc = 0x24F230u;
label_24f230:
    // 0x24f230: 0xc0ba0f2
label_24f234:
    if (ctx->pc == 0x24F234u) {
        ctx->pc = 0x24F234u;
        ctx->f[12] = FPU_SUB_S(ctx->f[23], ctx->f[22]);
        ctx->pc = 0x24F238u;
        goto label_24f238;
    }
    ctx->pc = 0x24F230u;
    SET_GPR_U32(ctx, 31, 0x24F238u);
    ctx->pc = 0x24F234u;
    ctx->f[12] = FPU_SUB_S(ctx->f[23], ctx->f[22]);
    ctx->pc = 0x2E83C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        fmodf_0x2e83c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F238u; }
    }
    if (ctx->pc != 0x24F238u) { return; }
    ctx->pc = 0x24F238u;
label_24f238:
    // 0x24f238: 0x46000064
    ctx->pc = 0x24f238u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
label_24f23c:
    // 0x24f23c: 0x44020800
    ctx->pc = 0x24f23cu;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
label_24f240:
    // 0x24f240: 0x0
    ctx->pc = 0x24f240u;
    // NOP
label_24f244:
    // 0x24f244: 0x54400070
label_24f248:
    if (ctx->pc == 0x24F248u) {
        ctx->pc = 0x24F248u;
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 78)));
        ctx->pc = 0x24F24Cu;
        goto label_24f24c;
    }
    ctx->pc = 0x24F244u;
    {
        const bool branch_taken_0x24f244 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x24f244) {
            ctx->pc = 0x24F248u;
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 78)));
            ctx->pc = 0x24F408u;
            goto label_24f408;
        }
    }
    ctx->pc = 0x24F24Cu;
label_24f24c:
    // 0x24f24c: 0x96420002
    ctx->pc = 0x24f24cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_24f250:
    // 0x24f250: 0x30420300
    ctx->pc = 0x24f250u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 768));
label_24f254:
    // 0x24f254: 0x10400015
label_24f258:
    if (ctx->pc == 0x24F258u) {
        ctx->pc = 0x24F258u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x24F25Cu;
        goto label_24f25c;
    }
    ctx->pc = 0x24F254u;
    {
        const bool branch_taken_0x24f254 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24F258u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        if (branch_taken_0x24f254) {
            ctx->pc = 0x24F2ACu;
            goto label_24f2ac;
        }
    }
    ctx->pc = 0x24F25Cu;
label_24f25c:
    // 0x24f25c: 0x4615b034
    ctx->pc = 0x24f25cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24f260:
    // 0x24f260: 0x0
    ctx->pc = 0x24f260u;
    // NOP
label_24f264:
    // 0x24f264: 0x45000008
label_24f268:
    if (ctx->pc == 0x24F268u) {
        ctx->pc = 0x24F268u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->pc = 0x24F26Cu;
        goto label_24f26c;
    }
    ctx->pc = 0x24F264u;
    {
        const bool branch_taken_0x24f264 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24F268u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
        if (branch_taken_0x24f264) {
            ctx->pc = 0x24F288u;
            goto label_24f288;
        }
    }
    ctx->pc = 0x24F26Cu;
label_24f26c:
    // 0x24f26c: 0x4616bd01
    ctx->pc = 0x24f26cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[23], ctx->f[22]);
label_24f270:
    // 0x24f270: 0x4616a801
    ctx->pc = 0x24f270u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[22]);
label_24f274:
    // 0x24f274: 0x0
    ctx->pc = 0x24f274u;
    // NOP
label_24f278:
    // 0x24f278: 0x0
    ctx->pc = 0x24f278u;
    // NOP
label_24f27c:
    // 0x24f27c: 0x4600a503
    ctx->pc = 0x24f27cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[0];
label_24f280:
    // 0x24f280: 0x10000004
label_24f284:
    if (ctx->pc == 0x24F284u) {
        ctx->pc = 0x24F284u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 512));
        ctx->pc = 0x24F288u;
        goto label_24f288;
    }
    ctx->pc = 0x24F280u;
    {
        const bool branch_taken_0x24f280 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24F284u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 512));
        if (branch_taken_0x24f280) {
            ctx->pc = 0x24F294u;
            goto label_24f294;
        }
    }
    ctx->pc = 0x24F288u;
label_24f288:
    // 0x24f288: 0x3c013f80
    ctx->pc = 0x24f288u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_24f28c:
    // 0x24f28c: 0x4481a000
    ctx->pc = 0x24f28cu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
label_24f290:
    // 0x24f290: 0x30420200
    ctx->pc = 0x24f290u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 512));
label_24f294:
    // 0x24f294: 0x50400005
label_24f298:
    if (ctx->pc == 0x24F298u) {
        ctx->pc = 0x24F298u;
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
        ctx->pc = 0x24F29Cu;
        goto label_24f29c;
    }
    ctx->pc = 0x24F294u;
    {
        const bool branch_taken_0x24f294 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x24f294) {
            ctx->pc = 0x24F298u;
            ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
            ctx->pc = 0x24F2ACu;
            goto label_24f2ac;
        }
    }
    ctx->pc = 0x24F29Cu;
label_24f29c:
    // 0x24f29c: 0x3c013f80
    ctx->pc = 0x24f29cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_24f2a0:
    // 0x24f2a0: 0x44810000
    ctx->pc = 0x24f2a0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_24f2a4:
    // 0x24f2a4: 0x46140501
    ctx->pc = 0x24f2a4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_24f2a8:
    // 0x24f2a8: 0x46146302
    ctx->pc = 0x24f2a8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
label_24f2ac:
    // 0x24f2ac: 0x26640040
    ctx->pc = 0x24f2acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 64));
label_24f2b0:
    // 0x24f2b0: 0xc0b57e6
label_24f2b4:
    if (ctx->pc == 0x24F2B4u) {
        ctx->pc = 0x24F2B4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24F2B8u;
        goto label_24f2b8;
    }
    ctx->pc = 0x24F2B0u;
    SET_GPR_U32(ctx, 31, 0x24F2B8u);
    ctx->pc = 0x24F2B4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        YawVec3_0x2d5f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F2B8u; }
    }
    if (ctx->pc != 0x24F2B8u) { return; }
    ctx->pc = 0x24F2B8u;
label_24f2b8:
    // 0x24f2b8: 0x3c013f80
    ctx->pc = 0x24f2b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_24f2bc:
    // 0x24f2bc: 0x44810000
    ctx->pc = 0x24f2bcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_24f2c0:
    // 0x24f2c0: 0xe7a00004
    ctx->pc = 0x24f2c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_24f2c4:
    // 0x24f2c4: 0xc7a00000
    ctx->pc = 0x24f2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24f2c8:
    // 0x24f2c8: 0xc641002c
    ctx->pc = 0x24f2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24f2cc:
    // 0x24f2cc: 0x46010002
    ctx->pc = 0x24f2ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_24f2d0:
    // 0x24f2d0: 0xe7a00000
    ctx->pc = 0x24f2d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_24f2d4:
    // 0x24f2d4: 0xc6400030
    ctx->pc = 0x24f2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24f2d8:
    // 0x24f2d8: 0xe7a00004
    ctx->pc = 0x24f2d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_24f2dc:
    // 0x24f2dc: 0xc7a00008
    ctx->pc = 0x24f2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24f2e0:
    // 0x24f2e0: 0xc6410034
    ctx->pc = 0x24f2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24f2e4:
    // 0x24f2e4: 0x46010002
    ctx->pc = 0x24f2e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_24f2e8:
    // 0x24f2e8: 0xe7a00008
    ctx->pc = 0x24f2e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_24f2ec:
    // 0x24f2ec: 0x260202d
    ctx->pc = 0x24f2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24f2f0:
    // 0x24f2f0: 0x3a0282d
    ctx->pc = 0x24f2f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24f2f4:
    // 0x24f2f4: 0x3c01bf80
    ctx->pc = 0x24f2f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
label_24f2f8:
    // 0x24f2f8: 0x44816000
    ctx->pc = 0x24f2f8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_24f2fc:
    // 0x24f2fc: 0x3c014000
    ctx->pc = 0x24f2fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
label_24f300:
    // 0x24f300: 0x44816800
    ctx->pc = 0x24f300u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
label_24f304:
    // 0x24f304: 0x200302d
    ctx->pc = 0x24f304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24f308:
    // 0x24f308: 0xc0a3ec2
label_24f30c:
    if (ctx->pc == 0x24F30Cu) {
        ctx->pc = 0x24F30Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24F310u;
        goto label_24f310;
    }
    ctx->pc = 0x24F308u;
    SET_GPR_U32(ctx, 31, 0x24F310u);
    ctx->pc = 0x24F30Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x28FB08u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerStartMissile_0x28fb08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F310u; }
    }
    if (ctx->pc != 0x24F310u) { return; }
    ctx->pc = 0x24F310u;
label_24f310:
    // 0x24f310: 0x40a02d
    ctx->pc = 0x24f310u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24f314:
    // 0x24f314: 0x1a800022
label_24f318:
    if (ctx->pc == 0x24F318u) {
        ctx->pc = 0x24F318u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24F31Cu;
        goto label_24f31c;
    }
    ctx->pc = 0x24F314u;
    {
        const bool branch_taken_0x24f314 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x24F318u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24f314) {
            ctx->pc = 0x24F3A0u;
            goto label_24f3a0;
        }
    }
    ctx->pc = 0x24F31Cu;
label_24f31c:
    // 0x24f31c: 0x3c020035
    ctx->pc = 0x24f31cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_24f320:
    // 0x24f320: 0x245ef808
    ctx->pc = 0x24f320u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 2), 4294965256));
label_24f324:
    // 0x24f324: 0x241700f0
    ctx->pc = 0x24f324u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 240));
label_24f328:
    // 0x24f328: 0x3c020034
    ctx->pc = 0x24f328u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_24f32c:
    // 0x24f32c: 0x24560eb0
    ctx->pc = 0x24f32cu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 3760));
label_24f330:
    // 0x24f330: 0x4480a000
    ctx->pc = 0x24f330u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 0);
label_24f334:
    // 0x24f334: 0x111080
    ctx->pc = 0x24f334u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
label_24f338:
    // 0x24f338: 0x5e1021
    ctx->pc = 0x24f338u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_24f33c:
    // 0x24f33c: 0x8c420000
    ctx->pc = 0x24f33cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24f340:
    // 0x24f340: 0x4400013
label_24f344:
    if (ctx->pc == 0x24F344u) {
        ctx->pc = 0x24F344u;
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        ctx->pc = 0x24F348u;
        goto label_24f348;
    }
    ctx->pc = 0x24F340u;
    {
        const bool branch_taken_0x24f340 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x24F344u;
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x24f340) {
            ctx->pc = 0x24F390u;
            goto label_24f390;
        }
    }
    ctx->pc = 0x24F348u;
label_24f348:
    // 0x24f348: 0xc6410044
    ctx->pc = 0x24f348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24f34c:
    // 0x24f34c: 0x4601a034
    ctx->pc = 0x24f34cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24f350:
    // 0x24f350: 0x0
    ctx->pc = 0x24f350u;
    // NOP
label_24f354:
    // 0x24f354: 0x45000004
label_24f358:
    if (ctx->pc == 0x24F358u) {
        ctx->pc = 0x24F358u;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
        ctx->pc = 0x24F35Cu;
        goto label_24f35c;
    }
    ctx->pc = 0x24F354u;
    {
        const bool branch_taken_0x24f354 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24F358u;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
        if (branch_taken_0x24f354) {
            ctx->pc = 0x24F368u;
            goto label_24f368;
        }
    }
    ctx->pc = 0x24F35Cu;
label_24f35c:
    // 0x24f35c: 0xc60000a0
    ctx->pc = 0x24f35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24f360:
    // 0x24f360: 0x46010002
    ctx->pc = 0x24f360u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_24f364:
    // 0x24f364: 0xe60000a0
    ctx->pc = 0x24f364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
label_24f368:
    // 0x24f368: 0x96420002
    ctx->pc = 0x24f368u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_24f36c:
    // 0x24f36c: 0x30421000
    ctx->pc = 0x24f36cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4096));
label_24f370:
    // 0x24f370: 0x50400008
label_24f374:
    if (ctx->pc == 0x24F374u) {
        ctx->pc = 0x24F374u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x24F378u;
        goto label_24f378;
    }
    ctx->pc = 0x24F370u;
    {
        const bool branch_taken_0x24f370 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x24f370) {
            ctx->pc = 0x24F374u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x24F394u;
            goto label_24f394;
        }
    }
    ctx->pc = 0x24F378u;
label_24f378:
    // 0x24f378: 0x8e0400d4
    ctx->pc = 0x24f378u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_24f37c:
    // 0x24f37c: 0x50800005
label_24f380:
    if (ctx->pc == 0x24F380u) {
        ctx->pc = 0x24F380u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x24F384u;
        goto label_24f384;
    }
    ctx->pc = 0x24F37Cu;
    {
        const bool branch_taken_0x24f37c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x24f37c) {
            ctx->pc = 0x24F380u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x24F394u;
            goto label_24f394;
        }
    }
    ctx->pc = 0x24F384u;
label_24f384:
    // 0x24f384: 0xc0b3bfa
label_24f388:
    if (ctx->pc == 0x24F388u) {
        ctx->pc = 0x24F38Cu;
        goto label_24f38c;
    }
    ctx->pc = 0x24F384u;
    SET_GPR_U32(ctx, 31, 0x24F38Cu);
    ctx->pc = 0x2CEFE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemovePolyInst_0x2cefe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F38Cu; }
    }
    if (ctx->pc != 0x24F38Cu) { return; }
    ctx->pc = 0x24F38Cu;
label_24f38c:
    // 0x24f38c: 0xae0000d4
    ctx->pc = 0x24f38cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
label_24f390:
    // 0x24f390: 0x26310001
    ctx->pc = 0x24f390u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_24f394:
    // 0x24f394: 0x234102a
    ctx->pc = 0x24f394u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 20)));
label_24f398:
    // 0x24f398: 0x1440ffe7
label_24f39c:
    if (ctx->pc == 0x24F39Cu) {
        ctx->pc = 0x24F39Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        ctx->pc = 0x24F3A0u;
        goto label_24f3a0;
    }
    ctx->pc = 0x24F398u;
    {
        const bool branch_taken_0x24f398 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x24F39Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x24f398) {
            ctx->pc = 0x24F338u;
            goto label_24f338;
        }
    }
    ctx->pc = 0x24F3A0u;
label_24f3a0:
    // 0x24f3a0: 0x3c013f80
    ctx->pc = 0x24f3a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_24f3a4:
    // 0x24f3a4: 0x44810000
    ctx->pc = 0x24f3a4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_24f3a8:
    // 0x24f3a8: 0x4600b000
    ctx->pc = 0x24f3a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_24f3ac:
    // 0x24f3ac: 0x46170034
    ctx->pc = 0x24f3acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24f3b0:
    // 0x24f3b0: 0x0
    ctx->pc = 0x24f3b0u;
    // NOP
label_24f3b4:
    // 0x24f3b4: 0x45030001
label_24f3b8:
    if (ctx->pc == 0x24F3B8u) {
        ctx->pc = 0x24F3B8u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24F3BCu;
        goto label_24f3bc;
    }
    ctx->pc = 0x24F3B4u;
    {
        const bool branch_taken_0x24f3b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24f3b4) {
            ctx->pc = 0x24F3B8u;
            SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x24F3BCu;
            goto label_24f3bc;
        }
    }
    ctx->pc = 0x24F3BCu;
label_24f3bc:
    // 0x24f3bc: 0x1a800011
label_24f3c0:
    if (ctx->pc == 0x24F3C0u) {
        ctx->pc = 0x24F3C0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)16 << 16));
        ctx->pc = 0x24F3C4u;
        goto label_24f3c4;
    }
    ctx->pc = 0x24F3BCu;
    {
        const bool branch_taken_0x24f3bc = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x24F3C0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)16 << 16));
        if (branch_taken_0x24f3bc) {
            ctx->pc = 0x24F404u;
            goto label_24f404;
        }
    }
    ctx->pc = 0x24F3C4u;
label_24f3c4:
    // 0x24f3c4: 0x8e620130
    ctx->pc = 0x24f3c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 304)));
label_24f3c8:
    // 0x24f3c8: 0x431024
    ctx->pc = 0x24f3c8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24f3cc:
    // 0x24f3cc: 0x1040000d
label_24f3d0:
    if (ctx->pc == 0x24F3D0u) {
        ctx->pc = 0x24F3D0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24F3D4u;
        goto label_24f3d4;
    }
    ctx->pc = 0x24F3CCu;
    {
        const bool branch_taken_0x24f3cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24F3D0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24f3cc) {
            ctx->pc = 0x24F404u;
            goto label_24f404;
        }
    }
    ctx->pc = 0x24F3D4u;
label_24f3d4:
    // 0x24f3d4: 0x24050005
    ctx->pc = 0x24f3d4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
label_24f3d8:
    // 0x24f3d8: 0x3c013f80
    ctx->pc = 0x24f3d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_24f3dc:
    // 0x24f3dc: 0x44816000
    ctx->pc = 0x24f3dcu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_24f3e0:
    // 0x24f3e0: 0xc08b114
label_24f3e4:
    if (ctx->pc == 0x24F3E4u) {
        ctx->pc = 0x24F3E4u;
        SET_GPR_U32(ctx, 6, ((uint32_t)16 << 16));
        ctx->pc = 0x24F3E8u;
        goto label_24f3e8;
    }
    ctx->pc = 0x24F3E0u;
    SET_GPR_U32(ctx, 31, 0x24F3E8u);
    ctx->pc = 0x24F3E4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)16 << 16));
    ctx->pc = 0x22C450u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerUsePowerup_0x22c450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F3E8u; }
    }
    if (ctx->pc != 0x24F3E8u) { return; }
    ctx->pc = 0x24F3E8u;
label_24f3e8:
    // 0x24f3e8: 0x10000007
label_24f3ec:
    if (ctx->pc == 0x24F3ECu) {
        ctx->pc = 0x24F3ECu;
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 78)));
        ctx->pc = 0x24F3F0u;
        goto label_24f3f0;
    }
    ctx->pc = 0x24F3E8u;
    {
        const bool branch_taken_0x24f3e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24F3ECu;
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 78)));
        if (branch_taken_0x24f3e8) {
            ctx->pc = 0x24F408u;
            goto label_24f408;
        }
    }
    ctx->pc = 0x24F3F0u;
label_24f3f0:
    // 0x24f3f0: 0x260202d
    ctx->pc = 0x24f3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24f3f4:
    // 0x24f3f4: 0x240282d
    ctx->pc = 0x24f3f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24f3f8:
    // 0x24f3f8: 0x24060001
    ctx->pc = 0x24f3f8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_24f3fc:
    // 0x24f3fc: 0xc093a00
label_24f400:
    if (ctx->pc == 0x24F400u) {
        ctx->pc = 0x24F400u;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x24F404u;
        goto label_24f404;
    }
    ctx->pc = 0x24F3FCu;
    SET_GPR_U32(ctx, 31, 0x24F404u);
    ctx->pc = 0x24F400u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x24E800u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlyrSfxDoDamageSub_0x24e800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F404u; }
    }
    if (ctx->pc != 0x24F404u) { return; }
    ctx->pc = 0x24F404u;
label_24f404:
    // 0x24f404: 0x8645004e
    ctx->pc = 0x24f404u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 78)));
label_24f408:
    // 0x24f408: 0x4a00006
label_24f40c:
    if (ctx->pc == 0x24F40Cu) {
        ctx->pc = 0x24F40Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24F410u;
        goto label_24f410;
    }
    ctx->pc = 0x24F408u;
    {
        const bool branch_taken_0x24f408 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x24F40Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24f408) {
            ctx->pc = 0x24F424u;
            goto label_24f424;
        }
    }
    ctx->pc = 0x24F410u;
label_24f410:
    // 0x24f410: 0x4600cb06
    ctx->pc = 0x24f410u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
label_24f414:
    // 0x24f414: 0x4600bb46
    ctx->pc = 0x24f414u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_24f418:
    // 0x24f418: 0x2a0302d
    ctx->pc = 0x24f418u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_24f41c:
    // 0x24f41c: 0xc093b88
label_24f420:
    if (ctx->pc == 0x24F420u) {
        ctx->pc = 0x24F420u;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x24F424u;
        goto label_24f424;
    }
    ctx->pc = 0x24F41Cu;
    SET_GPR_U32(ctx, 31, 0x24F424u);
    ctx->pc = 0x24F420u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x24EE20u;
    goto label_24ee20;
    ctx->pc = 0x24F424u;
label_24f424:
    // 0x24f424: 0xdfbf00b0
    ctx->pc = 0x24f424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_24f428:
    // 0x24f428: 0xdfbe00a0
    ctx->pc = 0x24f428u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_24f42c:
    // 0x24f42c: 0xdfb70090
    ctx->pc = 0x24f42cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_24f430:
    // 0x24f430: 0xdfb60080
    ctx->pc = 0x24f430u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_24f434:
    // 0x24f434: 0xdfb50070
    ctx->pc = 0x24f434u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_24f438:
    // 0x24f438: 0xdfb40060
    ctx->pc = 0x24f438u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_24f43c:
    // 0x24f43c: 0xdfb30050
    ctx->pc = 0x24f43cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_24f440:
    // 0x24f440: 0xdfb20040
    ctx->pc = 0x24f440u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_24f444:
    // 0x24f444: 0xdfb10030
    ctx->pc = 0x24f444u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_24f448:
    // 0x24f448: 0xdfb00020
    ctx->pc = 0x24f448u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_24f44c:
    // 0x24f44c: 0xc7b900e8
    ctx->pc = 0x24f44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_24f450:
    // 0x24f450: 0xc7b800e0
    ctx->pc = 0x24f450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_24f454:
    // 0x24f454: 0xc7b700d8
    ctx->pc = 0x24f454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_24f458:
    // 0x24f458: 0xc7b600d0
    ctx->pc = 0x24f458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_24f45c:
    // 0x24f45c: 0xc7b500c8
    ctx->pc = 0x24f45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_24f460:
    // 0x24f460: 0xc7b400c0
    ctx->pc = 0x24f460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_24f464:
    // 0x24f464: 0x3e00008
label_24f468:
    if (ctx->pc == 0x24F468u) {
        ctx->pc = 0x24F468u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x24F46Cu;
        goto label_fallthrough_0x24f464;
    }
    ctx->pc = 0x24F464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24F468u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24EE20u: goto label_24ee20;
            case 0x24EE24u: goto label_24ee24;
            case 0x24EE28u: goto label_24ee28;
            case 0x24EE2Cu: goto label_24ee2c;
            case 0x24EE30u: goto label_24ee30;
            case 0x24EE34u: goto label_24ee34;
            case 0x24EE38u: goto label_24ee38;
            case 0x24EE3Cu: goto label_24ee3c;
            case 0x24EE40u: goto label_24ee40;
            case 0x24EE44u: goto label_24ee44;
            case 0x24EE48u: goto label_24ee48;
            case 0x24EE4Cu: goto label_24ee4c;
            case 0x24EE50u: goto label_24ee50;
            case 0x24EE54u: goto label_24ee54;
            case 0x24EE58u: goto label_24ee58;
            case 0x24EE5Cu: goto label_24ee5c;
            case 0x24EE60u: goto label_24ee60;
            case 0x24EE64u: goto label_24ee64;
            case 0x24EE68u: goto label_24ee68;
            case 0x24EE6Cu: goto label_24ee6c;
            case 0x24EE70u: goto label_24ee70;
            case 0x24EE74u: goto label_24ee74;
            case 0x24EE78u: goto label_24ee78;
            case 0x24EE7Cu: goto label_24ee7c;
            case 0x24EE80u: goto label_24ee80;
            case 0x24EE84u: goto label_24ee84;
            case 0x24EE88u: goto label_24ee88;
            case 0x24EE8Cu: goto label_24ee8c;
            case 0x24EE90u: goto label_24ee90;
            case 0x24EE94u: goto label_24ee94;
            case 0x24EE98u: goto label_24ee98;
            case 0x24EE9Cu: goto label_24ee9c;
            case 0x24EEA0u: goto label_24eea0;
            case 0x24EEA4u: goto label_24eea4;
            case 0x24EEA8u: goto label_24eea8;
            case 0x24EEACu: goto label_24eeac;
            case 0x24EEB0u: goto label_24eeb0;
            case 0x24EEB4u: goto label_24eeb4;
            case 0x24EEB8u: goto label_24eeb8;
            case 0x24EEBCu: goto label_24eebc;
            case 0x24EEC0u: goto label_24eec0;
            case 0x24EEC4u: goto label_24eec4;
            case 0x24EEC8u: goto label_24eec8;
            case 0x24EECCu: goto label_24eecc;
            case 0x24EED0u: goto label_24eed0;
            case 0x24EED4u: goto label_24eed4;
            case 0x24EED8u: goto label_24eed8;
            case 0x24EEDCu: goto label_24eedc;
            case 0x24EEE0u: goto label_24eee0;
            case 0x24EEE4u: goto label_24eee4;
            case 0x24EEE8u: goto label_24eee8;
            case 0x24EEECu: goto label_24eeec;
            case 0x24EEF0u: goto label_24eef0;
            case 0x24EEF4u: goto label_24eef4;
            case 0x24EEF8u: goto label_24eef8;
            case 0x24EEFCu: goto label_24eefc;
            case 0x24EF00u: goto label_24ef00;
            case 0x24EF04u: goto label_24ef04;
            case 0x24EF08u: goto label_24ef08;
            case 0x24EF0Cu: goto label_24ef0c;
            case 0x24EF10u: goto label_24ef10;
            case 0x24EF14u: goto label_24ef14;
            case 0x24EF18u: goto label_24ef18;
            case 0x24EF1Cu: goto label_24ef1c;
            case 0x24EF20u: goto label_24ef20;
            case 0x24EF24u: goto label_24ef24;
            case 0x24EF28u: goto label_24ef28;
            case 0x24EF2Cu: goto label_24ef2c;
            case 0x24EF30u: goto label_24ef30;
            case 0x24EF34u: goto label_24ef34;
            case 0x24EF38u: goto label_24ef38;
            case 0x24EF3Cu: goto label_24ef3c;
            case 0x24EF40u: goto label_24ef40;
            case 0x24EF44u: goto label_24ef44;
            case 0x24EF48u: goto label_24ef48;
            case 0x24EF4Cu: goto label_24ef4c;
            case 0x24EF50u: goto label_24ef50;
            case 0x24EF54u: goto label_24ef54;
            case 0x24EF58u: goto label_24ef58;
            case 0x24EF5Cu: goto label_24ef5c;
            case 0x24EF60u: goto label_24ef60;
            case 0x24EF64u: goto label_24ef64;
            case 0x24EF68u: goto label_24ef68;
            case 0x24EF6Cu: goto label_24ef6c;
            case 0x24EF70u: goto label_24ef70;
            case 0x24EF74u: goto label_24ef74;
            case 0x24EF78u: goto label_24ef78;
            case 0x24EF7Cu: goto label_24ef7c;
            case 0x24EF80u: goto label_24ef80;
            case 0x24EF84u: goto label_24ef84;
            case 0x24EF88u: goto label_24ef88;
            case 0x24EF8Cu: goto label_24ef8c;
            case 0x24EF90u: goto label_24ef90;
            case 0x24EF94u: goto label_24ef94;
            case 0x24EF98u: goto label_24ef98;
            case 0x24EF9Cu: goto label_24ef9c;
            case 0x24EFA0u: goto label_24efa0;
            case 0x24EFA4u: goto label_24efa4;
            case 0x24EFA8u: goto label_24efa8;
            case 0x24EFACu: goto label_24efac;
            case 0x24EFB0u: goto label_24efb0;
            case 0x24EFB4u: goto label_24efb4;
            case 0x24EFB8u: goto label_24efb8;
            case 0x24EFBCu: goto label_24efbc;
            case 0x24EFC0u: goto label_24efc0;
            case 0x24EFC4u: goto label_24efc4;
            case 0x24EFC8u: goto label_24efc8;
            case 0x24EFCCu: goto label_24efcc;
            case 0x24EFD0u: goto label_24efd0;
            case 0x24EFD4u: goto label_24efd4;
            case 0x24EFD8u: goto label_24efd8;
            case 0x24EFDCu: goto label_24efdc;
            case 0x24EFE0u: goto label_24efe0;
            case 0x24EFE4u: goto label_24efe4;
            case 0x24EFE8u: goto label_24efe8;
            case 0x24EFECu: goto label_24efec;
            case 0x24EFF0u: goto label_24eff0;
            case 0x24EFF4u: goto label_24eff4;
            case 0x24EFF8u: goto label_24eff8;
            case 0x24EFFCu: goto label_24effc;
            case 0x24F000u: goto label_24f000;
            case 0x24F004u: goto label_24f004;
            case 0x24F008u: goto label_24f008;
            case 0x24F00Cu: goto label_24f00c;
            case 0x24F010u: goto label_24f010;
            case 0x24F014u: goto label_24f014;
            case 0x24F018u: goto label_24f018;
            case 0x24F01Cu: goto label_24f01c;
            case 0x24F020u: goto label_24f020;
            case 0x24F024u: goto label_24f024;
            case 0x24F028u: goto label_24f028;
            case 0x24F02Cu: goto label_24f02c;
            case 0x24F030u: goto label_24f030;
            case 0x24F034u: goto label_24f034;
            case 0x24F038u: goto label_24f038;
            case 0x24F03Cu: goto label_24f03c;
            case 0x24F040u: goto label_24f040;
            case 0x24F044u: goto label_24f044;
            case 0x24F048u: goto label_24f048;
            case 0x24F04Cu: goto label_24f04c;
            case 0x24F050u: goto label_24f050;
            case 0x24F054u: goto label_24f054;
            case 0x24F058u: goto label_24f058;
            case 0x24F05Cu: goto label_24f05c;
            case 0x24F060u: goto label_24f060;
            case 0x24F064u: goto label_24f064;
            case 0x24F068u: goto label_24f068;
            case 0x24F06Cu: goto label_24f06c;
            case 0x24F070u: goto label_24f070;
            case 0x24F074u: goto label_24f074;
            case 0x24F078u: goto label_24f078;
            case 0x24F07Cu: goto label_24f07c;
            case 0x24F080u: goto label_24f080;
            case 0x24F084u: goto label_24f084;
            case 0x24F088u: goto label_24f088;
            case 0x24F08Cu: goto label_24f08c;
            case 0x24F090u: goto label_24f090;
            case 0x24F094u: goto label_24f094;
            case 0x24F098u: goto label_24f098;
            case 0x24F09Cu: goto label_24f09c;
            case 0x24F0A0u: goto label_24f0a0;
            case 0x24F0A4u: goto label_24f0a4;
            case 0x24F0A8u: goto label_24f0a8;
            case 0x24F0ACu: goto label_24f0ac;
            case 0x24F0B0u: goto label_24f0b0;
            case 0x24F0B4u: goto label_24f0b4;
            case 0x24F0B8u: goto label_24f0b8;
            case 0x24F0BCu: goto label_24f0bc;
            case 0x24F0C0u: goto label_24f0c0;
            case 0x24F0C4u: goto label_24f0c4;
            case 0x24F0C8u: goto label_24f0c8;
            case 0x24F0CCu: goto label_24f0cc;
            case 0x24F0D0u: goto label_24f0d0;
            case 0x24F0D4u: goto label_24f0d4;
            case 0x24F0D8u: goto label_24f0d8;
            case 0x24F0DCu: goto label_24f0dc;
            case 0x24F0E0u: goto label_24f0e0;
            case 0x24F0E4u: goto label_24f0e4;
            case 0x24F0E8u: goto label_24f0e8;
            case 0x24F0ECu: goto label_24f0ec;
            case 0x24F0F0u: goto label_24f0f0;
            case 0x24F0F4u: goto label_24f0f4;
            case 0x24F0F8u: goto label_24f0f8;
            case 0x24F0FCu: goto label_24f0fc;
            case 0x24F100u: goto label_24f100;
            case 0x24F104u: goto label_24f104;
            case 0x24F108u: goto label_24f108;
            case 0x24F10Cu: goto label_24f10c;
            case 0x24F110u: goto label_24f110;
            case 0x24F114u: goto label_24f114;
            case 0x24F118u: goto label_24f118;
            case 0x24F11Cu: goto label_24f11c;
            case 0x24F120u: goto label_24f120;
            case 0x24F124u: goto label_24f124;
            case 0x24F128u: goto label_24f128;
            case 0x24F12Cu: goto label_24f12c;
            case 0x24F130u: goto label_24f130;
            case 0x24F134u: goto label_24f134;
            case 0x24F138u: goto label_24f138;
            case 0x24F13Cu: goto label_24f13c;
            case 0x24F140u: goto label_24f140;
            case 0x24F144u: goto label_24f144;
            case 0x24F148u: goto label_24f148;
            case 0x24F14Cu: goto label_24f14c;
            case 0x24F150u: goto label_24f150;
            case 0x24F154u: goto label_24f154;
            case 0x24F158u: goto label_24f158;
            case 0x24F15Cu: goto label_24f15c;
            case 0x24F160u: goto label_24f160;
            case 0x24F164u: goto label_24f164;
            case 0x24F168u: goto label_24f168;
            case 0x24F16Cu: goto label_24f16c;
            case 0x24F170u: goto label_24f170;
            case 0x24F174u: goto label_24f174;
            case 0x24F178u: goto label_24f178;
            case 0x24F17Cu: goto label_24f17c;
            case 0x24F180u: goto label_24f180;
            case 0x24F184u: goto label_24f184;
            case 0x24F188u: goto label_24f188;
            case 0x24F18Cu: goto label_24f18c;
            case 0x24F190u: goto label_24f190;
            case 0x24F194u: goto label_24f194;
            case 0x24F198u: goto label_24f198;
            case 0x24F19Cu: goto label_24f19c;
            case 0x24F1A0u: goto label_24f1a0;
            case 0x24F1A4u: goto label_24f1a4;
            case 0x24F1A8u: goto label_24f1a8;
            case 0x24F1ACu: goto label_24f1ac;
            case 0x24F1B0u: goto label_24f1b0;
            case 0x24F1B4u: goto label_24f1b4;
            case 0x24F1B8u: goto label_24f1b8;
            case 0x24F1BCu: goto label_24f1bc;
            case 0x24F1C0u: goto label_24f1c0;
            case 0x24F1C4u: goto label_24f1c4;
            case 0x24F1C8u: goto label_24f1c8;
            case 0x24F1CCu: goto label_24f1cc;
            case 0x24F1D0u: goto label_24f1d0;
            case 0x24F1D4u: goto label_24f1d4;
            case 0x24F1D8u: goto label_24f1d8;
            case 0x24F1DCu: goto label_24f1dc;
            case 0x24F1E0u: goto label_24f1e0;
            case 0x24F1E4u: goto label_24f1e4;
            case 0x24F1E8u: goto label_24f1e8;
            case 0x24F1ECu: goto label_24f1ec;
            case 0x24F1F0u: goto label_24f1f0;
            case 0x24F1F4u: goto label_24f1f4;
            case 0x24F1F8u: goto label_24f1f8;
            case 0x24F1FCu: goto label_24f1fc;
            case 0x24F200u: goto label_24f200;
            case 0x24F204u: goto label_24f204;
            case 0x24F208u: goto label_24f208;
            case 0x24F20Cu: goto label_24f20c;
            case 0x24F210u: goto label_24f210;
            case 0x24F214u: goto label_24f214;
            case 0x24F218u: goto label_24f218;
            case 0x24F21Cu: goto label_24f21c;
            case 0x24F220u: goto label_24f220;
            case 0x24F224u: goto label_24f224;
            case 0x24F228u: goto label_24f228;
            case 0x24F22Cu: goto label_24f22c;
            case 0x24F230u: goto label_24f230;
            case 0x24F234u: goto label_24f234;
            case 0x24F238u: goto label_24f238;
            case 0x24F23Cu: goto label_24f23c;
            case 0x24F240u: goto label_24f240;
            case 0x24F244u: goto label_24f244;
            case 0x24F248u: goto label_24f248;
            case 0x24F24Cu: goto label_24f24c;
            case 0x24F250u: goto label_24f250;
            case 0x24F254u: goto label_24f254;
            case 0x24F258u: goto label_24f258;
            case 0x24F25Cu: goto label_24f25c;
            case 0x24F260u: goto label_24f260;
            case 0x24F264u: goto label_24f264;
            case 0x24F268u: goto label_24f268;
            case 0x24F26Cu: goto label_24f26c;
            case 0x24F270u: goto label_24f270;
            case 0x24F274u: goto label_24f274;
            case 0x24F278u: goto label_24f278;
            case 0x24F27Cu: goto label_24f27c;
            case 0x24F280u: goto label_24f280;
            case 0x24F284u: goto label_24f284;
            case 0x24F288u: goto label_24f288;
            case 0x24F28Cu: goto label_24f28c;
            case 0x24F290u: goto label_24f290;
            case 0x24F294u: goto label_24f294;
            case 0x24F298u: goto label_24f298;
            case 0x24F29Cu: goto label_24f29c;
            case 0x24F2A0u: goto label_24f2a0;
            case 0x24F2A4u: goto label_24f2a4;
            case 0x24F2A8u: goto label_24f2a8;
            case 0x24F2ACu: goto label_24f2ac;
            case 0x24F2B0u: goto label_24f2b0;
            case 0x24F2B4u: goto label_24f2b4;
            case 0x24F2B8u: goto label_24f2b8;
            case 0x24F2BCu: goto label_24f2bc;
            case 0x24F2C0u: goto label_24f2c0;
            case 0x24F2C4u: goto label_24f2c4;
            case 0x24F2C8u: goto label_24f2c8;
            case 0x24F2CCu: goto label_24f2cc;
            case 0x24F2D0u: goto label_24f2d0;
            case 0x24F2D4u: goto label_24f2d4;
            case 0x24F2D8u: goto label_24f2d8;
            case 0x24F2DCu: goto label_24f2dc;
            case 0x24F2E0u: goto label_24f2e0;
            case 0x24F2E4u: goto label_24f2e4;
            case 0x24F2E8u: goto label_24f2e8;
            case 0x24F2ECu: goto label_24f2ec;
            case 0x24F2F0u: goto label_24f2f0;
            case 0x24F2F4u: goto label_24f2f4;
            case 0x24F2F8u: goto label_24f2f8;
            case 0x24F2FCu: goto label_24f2fc;
            case 0x24F300u: goto label_24f300;
            case 0x24F304u: goto label_24f304;
            case 0x24F308u: goto label_24f308;
            case 0x24F30Cu: goto label_24f30c;
            case 0x24F310u: goto label_24f310;
            case 0x24F314u: goto label_24f314;
            case 0x24F318u: goto label_24f318;
            case 0x24F31Cu: goto label_24f31c;
            case 0x24F320u: goto label_24f320;
            case 0x24F324u: goto label_24f324;
            case 0x24F328u: goto label_24f328;
            case 0x24F32Cu: goto label_24f32c;
            case 0x24F330u: goto label_24f330;
            case 0x24F334u: goto label_24f334;
            case 0x24F338u: goto label_24f338;
            case 0x24F33Cu: goto label_24f33c;
            case 0x24F340u: goto label_24f340;
            case 0x24F344u: goto label_24f344;
            case 0x24F348u: goto label_24f348;
            case 0x24F34Cu: goto label_24f34c;
            case 0x24F350u: goto label_24f350;
            case 0x24F354u: goto label_24f354;
            case 0x24F358u: goto label_24f358;
            case 0x24F35Cu: goto label_24f35c;
            case 0x24F360u: goto label_24f360;
            case 0x24F364u: goto label_24f364;
            case 0x24F368u: goto label_24f368;
            case 0x24F36Cu: goto label_24f36c;
            case 0x24F370u: goto label_24f370;
            case 0x24F374u: goto label_24f374;
            case 0x24F378u: goto label_24f378;
            case 0x24F37Cu: goto label_24f37c;
            case 0x24F380u: goto label_24f380;
            case 0x24F384u: goto label_24f384;
            case 0x24F388u: goto label_24f388;
            case 0x24F38Cu: goto label_24f38c;
            case 0x24F390u: goto label_24f390;
            case 0x24F394u: goto label_24f394;
            case 0x24F398u: goto label_24f398;
            case 0x24F39Cu: goto label_24f39c;
            case 0x24F3A0u: goto label_24f3a0;
            case 0x24F3A4u: goto label_24f3a4;
            case 0x24F3A8u: goto label_24f3a8;
            case 0x24F3ACu: goto label_24f3ac;
            case 0x24F3B0u: goto label_24f3b0;
            case 0x24F3B4u: goto label_24f3b4;
            case 0x24F3B8u: goto label_24f3b8;
            case 0x24F3BCu: goto label_24f3bc;
            case 0x24F3C0u: goto label_24f3c0;
            case 0x24F3C4u: goto label_24f3c4;
            case 0x24F3C8u: goto label_24f3c8;
            case 0x24F3CCu: goto label_24f3cc;
            case 0x24F3D0u: goto label_24f3d0;
            case 0x24F3D4u: goto label_24f3d4;
            case 0x24F3D8u: goto label_24f3d8;
            case 0x24F3DCu: goto label_24f3dc;
            case 0x24F3E0u: goto label_24f3e0;
            case 0x24F3E4u: goto label_24f3e4;
            case 0x24F3E8u: goto label_24f3e8;
            case 0x24F3ECu: goto label_24f3ec;
            case 0x24F3F0u: goto label_24f3f0;
            case 0x24F3F4u: goto label_24f3f4;
            case 0x24F3F8u: goto label_24f3f8;
            case 0x24F3FCu: goto label_24f3fc;
            case 0x24F400u: goto label_24f400;
            case 0x24F404u: goto label_24f404;
            case 0x24F408u: goto label_24f408;
            case 0x24F40Cu: goto label_24f40c;
            case 0x24F410u: goto label_24f410;
            case 0x24F414u: goto label_24f414;
            case 0x24F418u: goto label_24f418;
            case 0x24F41Cu: goto label_24f41c;
            case 0x24F420u: goto label_24f420;
            case 0x24F424u: goto label_24f424;
            case 0x24F428u: goto label_24f428;
            case 0x24F42Cu: goto label_24f42c;
            case 0x24F430u: goto label_24f430;
            case 0x24F434u: goto label_24f434;
            case 0x24F438u: goto label_24f438;
            case 0x24F43Cu: goto label_24f43c;
            case 0x24F440u: goto label_24f440;
            case 0x24F444u: goto label_24f444;
            case 0x24F448u: goto label_24f448;
            case 0x24F44Cu: goto label_24f44c;
            case 0x24F450u: goto label_24f450;
            case 0x24F454u: goto label_24f454;
            case 0x24F458u: goto label_24f458;
            case 0x24F45Cu: goto label_24f45c;
            case 0x24F460u: goto label_24f460;
            case 0x24F464u: goto label_24f464;
            case 0x24F468u: goto label_24f468;
            default: break;
        }
        return;
    }
label_fallthrough_0x24f464:
    ctx->pc = 0x24F46Cu;
}
