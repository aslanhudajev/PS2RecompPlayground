#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InitThread
// Address: 0x308508 - 0x3085d0
void InitThread_0x308508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x308508u;

    // 0x308508: 0x27bdff80
    ctx->pc = 0x308508u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x30850c: 0xffb00050
    ctx->pc = 0x30850cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x308510: 0x3c10003a
    ctx->pc = 0x308510u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x308514: 0xffbf0070
    ctx->pc = 0x308514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x308518: 0x8e0242a0
    ctx->pc = 0x308518u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 17056)));
    // 0x30851c: 0x1c40001b
    ctx->pc = 0x30851Cu;
    {
        const bool branch_taken_0x30851c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x308520u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
        if (branch_taken_0x30851c) {
            ctx->pc = 0x30858Cu;
            goto label_30858c;
        }
    }
    ctx->pc = 0x308524u;
    // 0x308524: 0x240200ff
    ctx->pc = 0x308524u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
    // 0x308528: 0xafa00038
    ctx->pc = 0x308528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x30852c: 0xafa20034
    ctx->pc = 0x30852cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x308530: 0xc0c0d78
    ctx->pc = 0x308530u;
    SET_GPR_U32(ctx, 31, 0x308538u);
    ctx->pc = 0x308534u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x3035E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateSema_0x3035e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308538u; }
    }
    if (ctx->pc != 0x308538u) { return; }
    ctx->pc = 0x308538u;
    // 0x308538: 0x3c11003e
    ctx->pc = 0x308538u;
    SET_GPR_U32(ctx, 17, ((uint32_t)62 << 16));
    // 0x30853c: 0x4400013
    ctx->pc = 0x30853Cu;
    {
        const bool branch_taken_0x30853c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x308540u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 29816), GPR_U32(ctx, 2));
        if (branch_taken_0x30853c) {
            ctx->pc = 0x30858Cu;
            goto label_30858c;
        }
    }
    ctx->pc = 0x308544u;
    // 0x308544: 0x3c020031
    ctx->pc = 0x308544u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x308548: 0x3c03003e
    ctx->pc = 0x308548u;
    SET_GPR_U32(ctx, 3, ((uint32_t)62 << 16));
    // 0x30854c: 0x3c05003c
    ctx->pc = 0x30854cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)60 << 16));
    // 0x308550: 0x24428458
    ctx->pc = 0x308550u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294935640));
    // 0x308554: 0x24637070
    ctx->pc = 0x308554u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 28784));
    // 0x308558: 0x24a53170
    ctx->pc = 0x308558u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 12656));
    // 0x30855c: 0x24060400
    ctx->pc = 0x30855cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1024));
    // 0x308560: 0xafa20004
    ctx->pc = 0x308560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x308564: 0xafa30008
    ctx->pc = 0x308564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x308568: 0x3a0202d
    ctx->pc = 0x308568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30856c: 0xafa6000c
    ctx->pc = 0x30856cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x308570: 0xafa50010
    ctx->pc = 0x308570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x308574: 0xc0c0cf8
    ctx->pc = 0x308574u;
    SET_GPR_U32(ctx, 31, 0x30857Cu);
    ctx->pc = 0x308578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    ctx->pc = 0x3033E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateThread_0x3033e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30857Cu; }
    }
    if (ctx->pc != 0x30857Cu) { return; }
    ctx->pc = 0x30857Cu;
    // 0x30857c: 0x4410005
    ctx->pc = 0x30857Cu;
    {
        const bool branch_taken_0x30857c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x308580u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 17056), GPR_U32(ctx, 2));
        if (branch_taken_0x30857c) {
            ctx->pc = 0x308594u;
            goto label_308594;
        }
    }
    ctx->pc = 0x308584u;
    // 0x308584: 0xc0c0d7c
    ctx->pc = 0x308584u;
    SET_GPR_U32(ctx, 31, 0x30858Cu);
    ctx->pc = 0x308588u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 29816)));
    ctx->pc = 0x3035F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeleteSema_0x3035f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30858Cu; }
    }
    if (ctx->pc != 0x30858Cu) { return; }
    ctx->pc = 0x30858Cu;
label_30858c:
    // 0x30858c: 0x1000000b
    ctx->pc = 0x30858Cu;
    {
        const bool branch_taken_0x30858c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x308590u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x30858c) {
            ctx->pc = 0x3085BCu;
            goto label_3085bc;
        }
    }
    ctx->pc = 0x308594u;
label_308594:
    // 0x308594: 0x3c05003e
    ctx->pc = 0x308594u;
    SET_GPR_U32(ctx, 5, ((uint32_t)62 << 16));
    // 0x308598: 0x40202d
    ctx->pc = 0x308598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30859c: 0xc0c0d00
    ctx->pc = 0x30859Cu;
    SET_GPR_U32(ctx, 31, 0x3085A4u);
    ctx->pc = 0x3085A0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 29808));
    ctx->pc = 0x303400u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartThread_0x303400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3085A4u; }
    }
    if (ctx->pc != 0x3085A4u) { return; }
    ctx->pc = 0x3085A4u;
    // 0x3085a4: 0xc0c0d34
    ctx->pc = 0x3085A4u;
    SET_GPR_U32(ctx, 31, 0x3085ACu);
    ctx->pc = 0x3034D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetThreadId_0x3034d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3085ACu; }
    }
    if (ctx->pc != 0x3085ACu) { return; }
    ctx->pc = 0x3085ACu;
    // 0x3085ac: 0x40202d
    ctx->pc = 0x3085acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3085b0: 0xc0c0d1c
    ctx->pc = 0x3085B0u;
    SET_GPR_U32(ctx, 31, 0x3085B8u);
    ctx->pc = 0x3085B4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x303470u;
    {
        const uint32_t __entryPc = ctx->pc;
        ChangeThreadPriority_0x303470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3085B8u; }
    }
    if (ctx->pc != 0x3085B8u) { return; }
    ctx->pc = 0x3085B8u;
    // 0x3085b8: 0x8e0242a0
    ctx->pc = 0x3085b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 17056)));
label_3085bc:
    // 0x3085bc: 0xdfbf0070
    ctx->pc = 0x3085bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3085c0: 0xdfb10060
    ctx->pc = 0x3085c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3085c4: 0xdfb00050
    ctx->pc = 0x3085c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3085c8: 0x3e00008
    ctx->pc = 0x3085C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3085CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x30858Cu: goto label_30858c;
            case 0x308594u: goto label_308594;
            case 0x3085BCu: goto label_3085bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3085D0u;
}
