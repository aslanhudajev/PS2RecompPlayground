#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfbuf_InitRingSj
// Address: 0x191698 - 0x191754
void sfbuf_InitRingSj_0x191698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfbuf_InitRingSj");


    ctx->pc = 0x191698u;

    // 0x191698: 0xe0482d
    ctx->pc = 0x191698u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19169c: 0x24020388
    ctx->pc = 0x19169cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 904));
    // 0x1916a0: 0x1221818
    ctx->pc = 0x1916a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x1916a4: 0x27bdff90
    ctx->pc = 0x1916a4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1916a8: 0xffb00020
    ctx->pc = 0x1916a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1916ac: 0x100382d
    ctx->pc = 0x1916acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1916b0: 0xffb10030
    ctx->pc = 0x1916b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x1916b4: 0xffbf0060
    ctx->pc = 0x1916b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1916b8: 0x648021
    ctx->pc = 0x1916b8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1916bc: 0xffb30050
    ctx->pc = 0x1916bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x1916c0: 0x91880
    ctx->pc = 0x1916c0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 9), 2));
    // 0x1916c4: 0xffb20040
    ctx->pc = 0x1916c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1916c8: 0xc33021
    ctx->pc = 0x1916c8u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1916cc: 0xa32821
    ctx->pc = 0x1916ccu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1916d0: 0x8cc60000
    ctx->pc = 0x1916d0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1916d4: 0x14c00004
    ctx->pc = 0x1916D4u;
    {
        const bool branch_taken_0x1916d4 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x1916D8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 16));
        if (branch_taken_0x1916d4) {
            ctx->pc = 0x1916E8u;
            goto label_1916e8;
        }
    }
    ctx->pc = 0x1916DCu;
    // 0x1916dc: 0x982d
    ctx->pc = 0x1916dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1916e0: 0x10000010
    ctx->pc = 0x1916E0u;
    {
        const bool branch_taken_0x1916e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1916E4u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x1916e0) {
            ctx->pc = 0x191724u;
            goto label_191724;
        }
    }
    ctx->pc = 0x1916E8u;
label_1916e8:
    // 0x1916e8: 0x8ca50000
    ctx->pc = 0x1916e8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1916ec: 0x120402d
    ctx->pc = 0x1916ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1916f0: 0x24130001
    ctx->pc = 0x1916f0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1916f4: 0x24120005
    ctx->pc = 0x1916f4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1916f8: 0xc0645d6
    ctx->pc = 0x1916F8u;
    SET_GPR_U32(ctx, 31, 0x191700u);
    ctx->pc = 0x1916FCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x191758u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfbuf_CreateSj_0x191758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191700u; }
        else if (ctx->pc != 0x191700u) { ctx->pc = 0x191700u; }
    }
    if (ctx->pc != 0x191700u) { return; }
    ctx->pc = 0x191700u;
    // 0x191700: 0x14400004
    ctx->pc = 0x191700u;
    {
        const bool branch_taken_0x191700 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x191704u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x191700) {
            ctx->pc = 0x191714u;
            goto label_191714;
        }
    }
    ctx->pc = 0x191708u;
    // 0x191708: 0x3c02ffff
    ctx->pc = 0x191708u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x19170c: 0x1000000a
    ctx->pc = 0x19170Cu;
    {
        const bool branch_taken_0x19170c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x191710u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
        if (branch_taken_0x19170c) {
            ctx->pc = 0x191738u;
            goto label_191738;
        }
    }
    ctx->pc = 0x191714u;
label_191714:
    // 0x191714: 0x3a0282d
    ctx->pc = 0x191714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191718: 0x200302d
    ctx->pc = 0x191718u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19171c: 0xc064700
    ctx->pc = 0x19171Cu;
    SET_GPR_U32(ctx, 31, 0x191724u);
    ctx->pc = 0x191720u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x191C00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfbuf_SetSupSj_0x191c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191724u; }
        else if (ctx->pc != 0x191724u) { ctx->pc = 0x191724u; }
    }
    if (ctx->pc != 0x191724u) { return; }
    ctx->pc = 0x191724u;
label_191724:
    // 0x191724: 0x200202d
    ctx->pc = 0x191724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191728: 0x240282d
    ctx->pc = 0x191728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19172c: 0xc064696
    ctx->pc = 0x19172Cu;
    SET_GPR_U32(ctx, 31, 0x191734u);
    ctx->pc = 0x191730u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x191A58u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfbuf_InitBufData_0x191a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191734u; }
        else if (ctx->pc != 0x191734u) { ctx->pc = 0x191734u; }
    }
    if (ctx->pc != 0x191734u) { return; }
    ctx->pc = 0x191734u;
    // 0x191734: 0x102d
    ctx->pc = 0x191734u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191738:
    // 0x191738: 0xdfbf0060
    ctx->pc = 0x191738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19173c: 0xdfb30050
    ctx->pc = 0x19173cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x191740: 0xdfb20040
    ctx->pc = 0x191740u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x191744: 0xdfb10030
    ctx->pc = 0x191744u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x191748: 0xdfb00020
    ctx->pc = 0x191748u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19174c: 0x3e00008
    ctx->pc = 0x19174Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191750u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1916E8u: goto label_1916e8;
            case 0x191714u: goto label_191714;
            case 0x191724u: goto label_191724;
            case 0x191738u: goto label_191738;
            default: break;
        }
        return;
    }
    ctx->pc = 0x191754u;
}
