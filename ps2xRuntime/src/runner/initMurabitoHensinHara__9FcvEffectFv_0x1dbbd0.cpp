#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initMurabitoHensinHara__9FcvEffectFv
// Address: 0x1dbbd0 - 0x1dbd48
void initMurabitoHensinHara__9FcvEffectFv_0x1dbbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initMurabitoHensinHara__9FcvEffectFv");


    ctx->pc = 0x1dbbd0u;

    // 0x1dbbd0: 0x27bdffc0
    ctx->pc = 0x1dbbd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1dbbd4: 0x7fbf0030
    ctx->pc = 0x1dbbd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1dbbd8: 0x7fb20020
    ctx->pc = 0x1dbbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dbbdc: 0x7fb10010
    ctx->pc = 0x1dbbdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dbbe0: 0x70809628
    ctx->pc = 0x1dbbe0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1dbbe4: 0x240500b1
    ctx->pc = 0x1dbbe4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 177));
    // 0x1dbbe8: 0xc0761c4
    ctx->pc = 0x1DBBE8u;
    SET_GPR_U32(ctx, 31, 0x1DBBF0u);
    ctx->pc = 0x1DBBECu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBBF0u; }
        else if (ctx->pc != 0x1DBBF0u) { ctx->pc = 0x1DBBF0u; }
    }
    if (ctx->pc != 0x1DBBF0u) { return; }
    ctx->pc = 0x1DBBF0u;
    // 0x1dbbf0: 0xae420054
    ctx->pc = 0x1dbbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
    // 0x1dbbf4: 0x3c034320
    ctx->pc = 0x1dbbf4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)17184 << 16));
    // 0x1dbbf8: 0xae430028
    ctx->pc = 0x1dbbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
    // 0x1dbbfc: 0x3c033f80
    ctx->pc = 0x1dbbfcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1dbc00: 0xae430020
    ctx->pc = 0x1dbc00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
    // 0x1dbc04: 0x70008628
    ctx->pc = 0x1dbc04u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dbc08: 0x1000003d
    ctx->pc = 0x1DBC08u;
    {
        const bool branch_taken_0x1dbc08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DBC0Cu;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1dbc08) {
            ctx->pc = 0x1DBD00u;
            goto label_1dbd00;
        }
    }
    ctx->pc = 0x1DBC10u;
label_1dbc10:
    // 0x1dbc10: 0xc07f208
    ctx->pc = 0x1DBC10u;
    SET_GPR_U32(ctx, 31, 0x1DBC18u);
    ctx->pc = 0x1DBC14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBC18u; }
        else if (ctx->pc != 0x1DBC18u) { ctx->pc = 0x1DBC18u; }
    }
    if (ctx->pc != 0x1DBC18u) { return; }
    ctx->pc = 0x1DBC18u;
    // 0x1dbc18: 0x2a010009
    ctx->pc = 0x1dbc18u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 9));
    // 0x1dbc1c: 0x1020000b
    ctx->pc = 0x1DBC1Cu;
    {
        const bool branch_taken_0x1dbc1c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DBC20u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 167));
        if (branch_taken_0x1dbc1c) {
            ctx->pc = 0x1DBC4Cu;
            goto label_1dbc4c;
        }
    }
    ctx->pc = 0x1DBC24u;
    // 0x1dbc24: 0x8e440054
    ctx->pc = 0x1dbc24u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1dbc28: 0x3c030024
    ctx->pc = 0x1dbc28u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
    // 0x1dbc2c: 0x34650006
    ctx->pc = 0x1dbc2cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 6));
    // 0x1dbc30: 0x70403628
    ctx->pc = 0x1dbc30u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dbc34: 0x70003e28
    ctx->pc = 0x1dbc34u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dbc38: 0xc079e80
    ctx->pc = 0x1DBC38u;
    SET_GPR_U32(ctx, 31, 0x1DBC40u);
    ctx->pc = 0x1DBC3Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBC40u; }
        else if (ctx->pc != 0x1DBC40u) { ctx->pc = 0x1DBC40u; }
    }
    if (ctx->pc != 0x1DBC40u) { return; }
    ctx->pc = 0x1DBC40u;
    // 0x1dbc40: 0x1000002e
    ctx->pc = 0x1DBC40u;
    {
        const bool branch_taken_0x1dbc40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DBC44u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 240));
        if (branch_taken_0x1dbc40) {
            ctx->pc = 0x1DBCFCu;
            goto label_1dbcfc;
        }
    }
    ctx->pc = 0x1DBC48u;
    // 0x1dbc48: 0x2a0100a7
    ctx->pc = 0x1dbc48u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 167));
label_1dbc4c:
    // 0x1dbc4c: 0x10200022
    ctx->pc = 0x1DBC4Cu;
    {
        const bool branch_taken_0x1dbc4c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DBC50u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 34));
        if (branch_taken_0x1dbc4c) {
            ctx->pc = 0x1DBCD8u;
            goto label_1dbcd8;
        }
    }
    ctx->pc = 0x1DBC54u;
    // 0x1dbc54: 0x1203000e
    ctx->pc = 0x1DBC54u;
    {
        const bool branch_taken_0x1dbc54 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 3));
        ctx->pc = 0x1DBC58u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 51));
        if (branch_taken_0x1dbc54) {
            ctx->pc = 0x1DBC90u;
            goto label_1dbc90;
        }
    }
    ctx->pc = 0x1DBC5Cu;
    // 0x1dbc5c: 0x1203000c
    ctx->pc = 0x1DBC5Cu;
    {
        const bool branch_taken_0x1dbc5c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 3));
        ctx->pc = 0x1DBC60u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 77));
        if (branch_taken_0x1dbc5c) {
            ctx->pc = 0x1DBC90u;
            goto label_1dbc90;
        }
    }
    ctx->pc = 0x1DBC64u;
    // 0x1dbc64: 0x1203000a
    ctx->pc = 0x1DBC64u;
    {
        const bool branch_taken_0x1dbc64 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 3));
        ctx->pc = 0x1DBC68u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 103));
        if (branch_taken_0x1dbc64) {
            ctx->pc = 0x1DBC90u;
            goto label_1dbc90;
        }
    }
    ctx->pc = 0x1DBC6Cu;
    // 0x1dbc6c: 0x12030008
    ctx->pc = 0x1DBC6Cu;
    {
        const bool branch_taken_0x1dbc6c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 3));
        ctx->pc = 0x1DBC70u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 129));
        if (branch_taken_0x1dbc6c) {
            ctx->pc = 0x1DBC90u;
            goto label_1dbc90;
        }
    }
    ctx->pc = 0x1DBC74u;
    // 0x1dbc74: 0x12030006
    ctx->pc = 0x1DBC74u;
    {
        const bool branch_taken_0x1dbc74 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 3));
        ctx->pc = 0x1DBC78u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 140));
        if (branch_taken_0x1dbc74) {
            ctx->pc = 0x1DBC90u;
            goto label_1dbc90;
        }
    }
    ctx->pc = 0x1DBC7Cu;
    // 0x1dbc7c: 0x12030004
    ctx->pc = 0x1DBC7Cu;
    {
        const bool branch_taken_0x1dbc7c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 3));
        ctx->pc = 0x1DBC80u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 166));
        if (branch_taken_0x1dbc7c) {
            ctx->pc = 0x1DBC90u;
            goto label_1dbc90;
        }
    }
    ctx->pc = 0x1DBC84u;
    // 0x1dbc84: 0x1603000b
    ctx->pc = 0x1DBC84u;
    {
        const bool branch_taken_0x1dbc84 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 3));
        if (branch_taken_0x1dbc84) {
            ctx->pc = 0x1DBCB4u;
            goto label_1dbcb4;
        }
    }
    ctx->pc = 0x1DBC8Cu;
    // 0x1dbc8c: 0x0
    ctx->pc = 0x1dbc8cu;
    // NOP
label_1dbc90:
    // 0x1dbc90: 0x8e440054
    ctx->pc = 0x1dbc90u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1dbc94: 0x3c030024
    ctx->pc = 0x1dbc94u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
    // 0x1dbc98: 0x34650003
    ctx->pc = 0x1dbc98u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 3));
    // 0x1dbc9c: 0x70403628
    ctx->pc = 0x1dbc9cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dbca0: 0x70003e28
    ctx->pc = 0x1dbca0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dbca4: 0xc079e80
    ctx->pc = 0x1DBCA4u;
    SET_GPR_U32(ctx, 31, 0x1DBCACu);
    ctx->pc = 0x1DBCA8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBCACu; }
        else if (ctx->pc != 0x1DBCACu) { ctx->pc = 0x1DBCACu; }
    }
    if (ctx->pc != 0x1DBCACu) { return; }
    ctx->pc = 0x1DBCACu;
    // 0x1dbcac: 0x10000012
    ctx->pc = 0x1DBCACu;
    {
        const bool branch_taken_0x1dbcac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dbcac) {
            ctx->pc = 0x1DBCF8u;
            goto label_1dbcf8;
        }
    }
    ctx->pc = 0x1DBCB4u;
label_1dbcb4:
    // 0x1dbcb4: 0x8e440054
    ctx->pc = 0x1dbcb4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1dbcb8: 0x3c030024
    ctx->pc = 0x1dbcb8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
    // 0x1dbcbc: 0x34650001
    ctx->pc = 0x1dbcbcu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 1));
    // 0x1dbcc0: 0x70403628
    ctx->pc = 0x1dbcc0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dbcc4: 0x70003e28
    ctx->pc = 0x1dbcc4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dbcc8: 0xc079e80
    ctx->pc = 0x1DBCC8u;
    SET_GPR_U32(ctx, 31, 0x1DBCD0u);
    ctx->pc = 0x1DBCCCu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBCD0u; }
        else if (ctx->pc != 0x1DBCD0u) { ctx->pc = 0x1DBCD0u; }
    }
    if (ctx->pc != 0x1DBCD0u) { return; }
    ctx->pc = 0x1DBCD0u;
    // 0x1dbcd0: 0x10000009
    ctx->pc = 0x1DBCD0u;
    {
        const bool branch_taken_0x1dbcd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dbcd0) {
            ctx->pc = 0x1DBCF8u;
            goto label_1dbcf8;
        }
    }
    ctx->pc = 0x1DBCD8u;
label_1dbcd8:
    // 0x1dbcd8: 0x8e440054
    ctx->pc = 0x1dbcd8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1dbcdc: 0x3c030024
    ctx->pc = 0x1dbcdcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
    // 0x1dbce0: 0x34650007
    ctx->pc = 0x1dbce0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 7));
    // 0x1dbce4: 0x70403628
    ctx->pc = 0x1dbce4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dbce8: 0x70003e28
    ctx->pc = 0x1dbce8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dbcec: 0xc079e80
    ctx->pc = 0x1DBCECu;
    SET_GPR_U32(ctx, 31, 0x1DBCF4u);
    ctx->pc = 0x1DBCF0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBCF4u; }
        else if (ctx->pc != 0x1DBCF4u) { ctx->pc = 0x1DBCF4u; }
    }
    if (ctx->pc != 0x1DBCF4u) { return; }
    ctx->pc = 0x1DBCF4u;
    // 0x1dbcf4: 0x0
    ctx->pc = 0x1dbcf4u;
    // NOP
label_1dbcf8:
    // 0x1dbcf8: 0x263100f0
    ctx->pc = 0x1dbcf8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 240));
label_1dbcfc:
    // 0x1dbcfc: 0x26100001
    ctx->pc = 0x1dbcfcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1dbd00:
    // 0x1dbd00: 0x8e430000
    ctx->pc = 0x1dbd00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1dbd04: 0x203182a
    ctx->pc = 0x1dbd04u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x1dbd08: 0x1460ffc1
    ctx->pc = 0x1DBD08u;
    {
        const bool branch_taken_0x1dbd08 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DBD0Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 3987));
        if (branch_taken_0x1dbd08) {
            ctx->pc = 0x1DBC10u;
            goto label_1dbc10;
        }
    }
    ctx->pc = 0x1DBD10u;
    // 0x1dbd10: 0x3c030027
    ctx->pc = 0x1dbd10u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1dbd14: 0x24638cd8
    ctx->pc = 0x1dbd14u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294937816));
    // 0x1dbd18: 0xc4620000
    ctx->pc = 0x1dbd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dbd1c: 0xc4610004
    ctx->pc = 0x1dbd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dbd20: 0xc4600008
    ctx->pc = 0x1dbd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbd24: 0xe6420114
    ctx->pc = 0x1dbd24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 276), bits); }
    // 0x1dbd28: 0xe6410118
    ctx->pc = 0x1dbd28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 280), bits); }
    // 0x1dbd2c: 0xe640011c
    ctx->pc = 0x1dbd2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 284), bits); }
    // 0x1dbd30: 0x7bbf0030
    ctx->pc = 0x1dbd30u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dbd34: 0x7bb20020
    ctx->pc = 0x1dbd34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dbd38: 0x7bb10010
    ctx->pc = 0x1dbd38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dbd3c: 0x7bb00000
    ctx->pc = 0x1dbd3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbd40: 0x3e00008
    ctx->pc = 0x1DBD40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBD44u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DBC10u: goto label_1dbc10;
            case 0x1DBC4Cu: goto label_1dbc4c;
            case 0x1DBC90u: goto label_1dbc90;
            case 0x1DBCB4u: goto label_1dbcb4;
            case 0x1DBCD8u: goto label_1dbcd8;
            case 0x1DBCF8u: goto label_1dbcf8;
            case 0x1DBCFCu: goto label_1dbcfc;
            case 0x1DBD00u: goto label_1dbd00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DBD48u;
}
