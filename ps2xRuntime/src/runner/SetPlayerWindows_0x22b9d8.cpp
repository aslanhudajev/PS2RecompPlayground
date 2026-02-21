#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SetPlayerWindows
// Address: 0x22b9d8 - 0x22bc1c
void SetPlayerWindows_0x22b9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x22b9d8u;

    // 0x22b9d8: 0x27bdff60
    ctx->pc = 0x22b9d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x22b9dc: 0xffbf0090
    ctx->pc = 0x22b9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x22b9e0: 0xffbe0080
    ctx->pc = 0x22b9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x22b9e4: 0xffb70070
    ctx->pc = 0x22b9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x22b9e8: 0xffb60060
    ctx->pc = 0x22b9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x22b9ec: 0xffb50050
    ctx->pc = 0x22b9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x22b9f0: 0xffb40040
    ctx->pc = 0x22b9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x22b9f4: 0xffb30030
    ctx->pc = 0x22b9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x22b9f8: 0xffb20020
    ctx->pc = 0x22b9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22b9fc: 0xffb10010
    ctx->pc = 0x22b9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22ba00: 0xffb00000
    ctx->pc = 0x22ba00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22ba04: 0x80b02d
    ctx->pc = 0x22ba04u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ba08: 0x240200ff
    ctx->pc = 0x22ba08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
    // 0x22ba0c: 0x40902d
    ctx->pc = 0x22ba0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ba10: 0x16900a
    ctx->pc = 0x22ba10u;
    if (GPR_U32(ctx, 22) == 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 0));
    // 0x22ba14: 0xa02d
    ctx->pc = 0x22ba14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ba18: 0x3c020033
    ctx->pc = 0x22ba18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x22ba1c: 0x2455c908
    ctx->pc = 0x22ba1cu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 4294953224));
    // 0x22ba20: 0x3c02003c
    ctx->pc = 0x22ba20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x22ba24: 0x245e1b20
    ctx->pc = 0x22ba24u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 2), 6944));
    // 0x22ba28: 0x3c02003c
    ctx->pc = 0x22ba28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x22ba2c: 0x24571b30
    ctx->pc = 0x22ba2cu;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 2), 6960));
    // 0x22ba30: 0x802d
    ctx->pc = 0x22ba30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ba34: 0x0
    ctx->pc = 0x22ba34u;
    // NOP
label_22ba38:
    // 0x22ba38: 0x24020018
    ctx->pc = 0x22ba38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
    // 0x22ba3c: 0x2828818
    ctx->pc = 0x22ba3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22ba40: 0x101080
    ctx->pc = 0x22ba40u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x22ba44: 0x0
    ctx->pc = 0x22ba44u;
    // NOP
label_22ba48:
    // 0x22ba48: 0x511021
    ctx->pc = 0x22ba48u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x22ba4c: 0x551021
    ctx->pc = 0x22ba4cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x22ba50: 0x8c440000
    ctx->pc = 0x22ba50u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22ba54: 0x50800004
    ctx->pc = 0x22BA54u;
    {
        const bool branch_taken_0x22ba54 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x22ba54) {
            ctx->pc = 0x22BA58u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x22BA68u;
            goto label_22ba68;
        }
    }
    ctx->pc = 0x22BA5Cu;
    // 0x22ba5c: 0xc0b0f52
    ctx->pc = 0x22BA5Cu;
    SET_GPR_U32(ctx, 31, 0x22BA64u);
    ctx->pc = 0x22BA60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetAlpha_0x2c3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BA64u; }
    }
    if (ctx->pc != 0x22BA64u) { return; }
    ctx->pc = 0x22BA64u;
    // 0x22ba64: 0x26100001
    ctx->pc = 0x22ba64u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_22ba68:
    // 0x22ba68: 0x2a020006
    ctx->pc = 0x22ba68u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 6));
    // 0x22ba6c: 0x1440fff6
    ctx->pc = 0x22BA6Cu;
    {
        const bool branch_taken_0x22ba6c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22BA70u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x22ba6c) {
            ctx->pc = 0x22BA48u;
            goto label_22ba48;
        }
    }
    ctx->pc = 0x22BA74u;
    // 0x22ba74: 0x802d
    ctx->pc = 0x22ba74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ba78: 0x3c020033
    ctx->pc = 0x22ba78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x22ba7c: 0x2453c968
    ctx->pc = 0x22ba7cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294953320));
    // 0x22ba80: 0x24020030
    ctx->pc = 0x22ba80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 48));
    // 0x22ba84: 0x2828818
    ctx->pc = 0x22ba84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22ba88: 0x101080
    ctx->pc = 0x22ba88u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x22ba8c: 0x0
    ctx->pc = 0x22ba8cu;
    // NOP
label_22ba90:
    // 0x22ba90: 0x511021
    ctx->pc = 0x22ba90u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x22ba94: 0x531021
    ctx->pc = 0x22ba94u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x22ba98: 0x8c440000
    ctx->pc = 0x22ba98u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22ba9c: 0x50800004
    ctx->pc = 0x22BA9Cu;
    {
        const bool branch_taken_0x22ba9c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x22ba9c) {
            ctx->pc = 0x22BAA0u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x22BAB0u;
            goto label_22bab0;
        }
    }
    ctx->pc = 0x22BAA4u;
    // 0x22baa4: 0xc0b0f52
    ctx->pc = 0x22BAA4u;
    SET_GPR_U32(ctx, 31, 0x22BAACu);
    ctx->pc = 0x22BAA8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetAlpha_0x2c3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BAACu; }
    }
    if (ctx->pc != 0x22BAACu) { return; }
    ctx->pc = 0x22BAACu;
    // 0x22baac: 0x26100001
    ctx->pc = 0x22baacu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_22bab0:
    // 0x22bab0: 0x2a02000c
    ctx->pc = 0x22bab0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 12));
    // 0x22bab4: 0x1440fff6
    ctx->pc = 0x22BAB4u;
    {
        const bool branch_taken_0x22bab4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22BAB8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x22bab4) {
            ctx->pc = 0x22BA90u;
            goto label_22ba90;
        }
    }
    ctx->pc = 0x22BABCu;
    // 0x22babc: 0x802d
    ctx->pc = 0x22babcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bac0: 0x3c020033
    ctx->pc = 0x22bac0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x22bac4: 0x2453ca28
    ctx->pc = 0x22bac4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294953512));
    // 0x22bac8: 0x148940
    ctx->pc = 0x22bac8u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 20), 5));
    // 0x22bacc: 0x101080
    ctx->pc = 0x22baccu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
label_22bad0:
    // 0x22bad0: 0x511021
    ctx->pc = 0x22bad0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x22bad4: 0x531021
    ctx->pc = 0x22bad4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x22bad8: 0x8c440000
    ctx->pc = 0x22bad8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22badc: 0x50800004
    ctx->pc = 0x22BADCu;
    {
        const bool branch_taken_0x22badc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x22badc) {
            ctx->pc = 0x22BAE0u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x22BAF0u;
            goto label_22baf0;
        }
    }
    ctx->pc = 0x22BAE4u;
    // 0x22bae4: 0xc0b0f52
    ctx->pc = 0x22BAE4u;
    SET_GPR_U32(ctx, 31, 0x22BAECu);
    ctx->pc = 0x22BAE8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetAlpha_0x2c3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BAECu; }
    }
    if (ctx->pc != 0x22BAECu) { return; }
    ctx->pc = 0x22BAECu;
    // 0x22baec: 0x26100001
    ctx->pc = 0x22baecu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_22baf0:
    // 0x22baf0: 0x2a020008
    ctx->pc = 0x22baf0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 8));
    // 0x22baf4: 0x1440fff6
    ctx->pc = 0x22BAF4u;
    {
        const bool branch_taken_0x22baf4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22BAF8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x22baf4) {
            ctx->pc = 0x22BAD0u;
            goto label_22bad0;
        }
    }
    ctx->pc = 0x22BAFCu;
    // 0x22bafc: 0x802d
    ctx->pc = 0x22bafcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bb00: 0x3c020033
    ctx->pc = 0x22bb00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x22bb04: 0x2453caa8
    ctx->pc = 0x22bb04u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294953640));
    // 0x22bb08: 0x148900
    ctx->pc = 0x22bb08u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 20), 4));
    // 0x22bb0c: 0x101080
    ctx->pc = 0x22bb0cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
label_22bb10:
    // 0x22bb10: 0x511021
    ctx->pc = 0x22bb10u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x22bb14: 0x531021
    ctx->pc = 0x22bb14u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x22bb18: 0x8c440000
    ctx->pc = 0x22bb18u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22bb1c: 0x50800004
    ctx->pc = 0x22BB1Cu;
    {
        const bool branch_taken_0x22bb1c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x22bb1c) {
            ctx->pc = 0x22BB20u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x22BB30u;
            goto label_22bb30;
        }
    }
    ctx->pc = 0x22BB24u;
    // 0x22bb24: 0xc0b0f52
    ctx->pc = 0x22BB24u;
    SET_GPR_U32(ctx, 31, 0x22BB2Cu);
    ctx->pc = 0x22BB28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetAlpha_0x2c3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BB2Cu; }
    }
    if (ctx->pc != 0x22BB2Cu) { return; }
    ctx->pc = 0x22BB2Cu;
    // 0x22bb2c: 0x26100001
    ctx->pc = 0x22bb2cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_22bb30:
    // 0x22bb30: 0x2a020004
    ctx->pc = 0x22bb30u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x22bb34: 0x1440fff6
    ctx->pc = 0x22BB34u;
    {
        const bool branch_taken_0x22bb34 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22BB38u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x22bb34) {
            ctx->pc = 0x22BB10u;
            goto label_22bb10;
        }
    }
    ctx->pc = 0x22BB3Cu;
    // 0x22bb3c: 0x141080
    ctx->pc = 0x22bb3cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 2));
    // 0x22bb40: 0x3c030033
    ctx->pc = 0x22bb40u;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
    // 0x22bb44: 0x2463cb58
    ctx->pc = 0x22bb44u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294953816));
    // 0x22bb48: 0x431021
    ctx->pc = 0x22bb48u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22bb4c: 0x8c440000
    ctx->pc = 0x22bb4cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22bb50: 0x10800004
    ctx->pc = 0x22BB50u;
    {
        const bool branch_taken_0x22bb50 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x22BB54u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 2));
        if (branch_taken_0x22bb50) {
            ctx->pc = 0x22BB64u;
            goto label_22bb64;
        }
    }
    ctx->pc = 0x22BB58u;
    // 0x22bb58: 0xc0b0f52
    ctx->pc = 0x22BB58u;
    SET_GPR_U32(ctx, 31, 0x22BB60u);
    ctx->pc = 0x22BB5Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetAlpha_0x2c3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BB60u; }
    }
    if (ctx->pc != 0x22BB60u) { return; }
    ctx->pc = 0x22BB60u;
    // 0x22bb60: 0x141080
    ctx->pc = 0x22bb60u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 2));
label_22bb64:
    // 0x22bb64: 0x5e1021
    ctx->pc = 0x22bb64u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x22bb68: 0x8c440000
    ctx->pc = 0x22bb68u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22bb6c: 0x10800004
    ctx->pc = 0x22BB6Cu;
    {
        const bool branch_taken_0x22bb6c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x22BB70u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 2));
        if (branch_taken_0x22bb6c) {
            ctx->pc = 0x22BB80u;
            goto label_22bb80;
        }
    }
    ctx->pc = 0x22BB74u;
    // 0x22bb74: 0xc0b0f52
    ctx->pc = 0x22BB74u;
    SET_GPR_U32(ctx, 31, 0x22BB7Cu);
    ctx->pc = 0x22BB78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetAlpha_0x2c3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BB7Cu; }
    }
    if (ctx->pc != 0x22BB7Cu) { return; }
    ctx->pc = 0x22BB7Cu;
    // 0x22bb7c: 0x141080
    ctx->pc = 0x22bb7cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 2));
label_22bb80:
    // 0x22bb80: 0x571021
    ctx->pc = 0x22bb80u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x22bb84: 0x8c440000
    ctx->pc = 0x22bb84u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22bb88: 0x10800004
    ctx->pc = 0x22BB88u;
    {
        const bool branch_taken_0x22bb88 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x22BB8Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22bb88) {
            ctx->pc = 0x22BB9Cu;
            goto label_22bb9c;
        }
    }
    ctx->pc = 0x22BB90u;
    // 0x22bb90: 0xc0b0f52
    ctx->pc = 0x22BB90u;
    SET_GPR_U32(ctx, 31, 0x22BB98u);
    ctx->pc = 0x22BB94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetAlpha_0x2c3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BB98u; }
    }
    if (ctx->pc != 0x22BB98u) { return; }
    ctx->pc = 0x22BB98u;
    // 0x22bb98: 0x802d
    ctx->pc = 0x22bb98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22bb9c:
    // 0x22bb9c: 0x3c020033
    ctx->pc = 0x22bb9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x22bba0: 0x2453cae8
    ctx->pc = 0x22bba0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294953704));
    // 0x22bba4: 0x2402001c
    ctx->pc = 0x22bba4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 28));
    // 0x22bba8: 0x2828818
    ctx->pc = 0x22bba8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22bbac: 0x101080
    ctx->pc = 0x22bbacu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
label_22bbb0:
    // 0x22bbb0: 0x511021
    ctx->pc = 0x22bbb0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x22bbb4: 0x531021
    ctx->pc = 0x22bbb4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x22bbb8: 0x8c440000
    ctx->pc = 0x22bbb8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22bbbc: 0xc0b0f52
    ctx->pc = 0x22BBBCu;
    SET_GPR_U32(ctx, 31, 0x22BBC4u);
    ctx->pc = 0x22BBC0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetAlpha_0x2c3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BBC4u; }
    }
    if (ctx->pc != 0x22BBC4u) { return; }
    ctx->pc = 0x22BBC4u;
    // 0x22bbc4: 0x26100001
    ctx->pc = 0x22bbc4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x22bbc8: 0x2a020007
    ctx->pc = 0x22bbc8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 7));
    // 0x22bbcc: 0x1440fff8
    ctx->pc = 0x22BBCCu;
    {
        const bool branch_taken_0x22bbcc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22BBD0u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x22bbcc) {
            ctx->pc = 0x22BBB0u;
            goto label_22bbb0;
        }
    }
    ctx->pc = 0x22BBD4u;
    // 0x22bbd4: 0x26940001
    ctx->pc = 0x22bbd4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
    // 0x22bbd8: 0x2a820004
    ctx->pc = 0x22bbd8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 4));
    // 0x22bbdc: 0x1440ff96
    ctx->pc = 0x22BBDCu;
    {
        const bool branch_taken_0x22bbdc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22BBE0u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22bbdc) {
            ctx->pc = 0x22BA38u;
            goto label_22ba38;
        }
    }
    ctx->pc = 0x22BBE4u;
    // 0x22bbe4: 0x3c020032
    ctx->pc = 0x22bbe4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22bbe8: 0xac5613dc
    ctx->pc = 0x22bbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5084), GPR_U32(ctx, 22));
    // 0x22bbec: 0xdfbf0090
    ctx->pc = 0x22bbecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x22bbf0: 0xdfbe0080
    ctx->pc = 0x22bbf0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22bbf4: 0xdfb70070
    ctx->pc = 0x22bbf4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22bbf8: 0xdfb60060
    ctx->pc = 0x22bbf8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22bbfc: 0xdfb50050
    ctx->pc = 0x22bbfcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22bc00: 0xdfb40040
    ctx->pc = 0x22bc00u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22bc04: 0xdfb30030
    ctx->pc = 0x22bc04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22bc08: 0xdfb20020
    ctx->pc = 0x22bc08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22bc0c: 0xdfb10010
    ctx->pc = 0x22bc0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bc10: 0xdfb00000
    ctx->pc = 0x22bc10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22bc14: 0x3e00008
    ctx->pc = 0x22BC14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22BC18u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22BA38u: goto label_22ba38;
            case 0x22BA48u: goto label_22ba48;
            case 0x22BA68u: goto label_22ba68;
            case 0x22BA90u: goto label_22ba90;
            case 0x22BAB0u: goto label_22bab0;
            case 0x22BAD0u: goto label_22bad0;
            case 0x22BAF0u: goto label_22baf0;
            case 0x22BB10u: goto label_22bb10;
            case 0x22BB30u: goto label_22bb30;
            case 0x22BB64u: goto label_22bb64;
            case 0x22BB80u: goto label_22bb80;
            case 0x22BB9Cu: goto label_22bb9c;
            case 0x22BBB0u: goto label_22bbb0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22BC1Cu;
}
