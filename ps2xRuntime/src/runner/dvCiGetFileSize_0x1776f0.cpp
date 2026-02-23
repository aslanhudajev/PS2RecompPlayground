#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dvCiGetFileSize
// Address: 0x1776f0 - 0x177794
void dvCiGetFileSize_0x1776f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dvCiGetFileSize");


    ctx->pc = 0x1776f0u;

    // 0x1776f0: 0x27bdffb0
    ctx->pc = 0x1776f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1776f4: 0xffb00030
    ctx->pc = 0x1776f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1776f8: 0x80802d
    ctx->pc = 0x1776f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1776fc: 0x16000005
    ctx->pc = 0x1776FCu;
    {
        const bool branch_taken_0x1776fc = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x177700u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        if (branch_taken_0x1776fc) {
            ctx->pc = 0x177714u;
            goto label_177714;
        }
    }
    ctx->pc = 0x177704u;
    // 0x177704: 0x3c05002c
    ctx->pc = 0x177704u;
    SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
    // 0x177708: 0x202d
    ctx->pc = 0x177708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17770c: 0x1000001a
    ctx->pc = 0x17770Cu;
    {
        const bool branch_taken_0x17770c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x177710u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294947488));
        if (branch_taken_0x17770c) {
            ctx->pc = 0x177778u;
            goto label_177778;
        }
    }
    ctx->pc = 0x177714u;
label_177714:
    // 0x177714: 0x200202d
    ctx->pc = 0x177714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177718: 0xc05e0b6
    ctx->pc = 0x177718u;
    SET_GPR_U32(ctx, 31, 0x177720u);
    ctx->pc = 0x17771Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1782D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        dvci_get_fstate_0x1782d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177720u; }
        else if (ctx->pc != 0x177720u) { ctx->pc = 0x177720u; }
    }
    if (ctx->pc != 0x177720u) { return; }
    ctx->pc = 0x177720u;
    // 0x177720: 0x8fa20004
    ctx->pc = 0x177720u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x177724: 0x14400018
    ctx->pc = 0x177724u;
    {
        const bool branch_taken_0x177724 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x177728u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x177724) {
            ctx->pc = 0x177788u;
            goto label_177788;
        }
    }
    ctx->pc = 0x17772Cu;
    // 0x17772c: 0xc05d82e
    ctx->pc = 0x17772Cu;
    SET_GPR_U32(ctx, 31, 0x177734u);
    ctx->pc = 0x1760B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SRD_WaitComplete_0x1760b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177734u; }
        else if (ctx->pc != 0x177734u) { ctx->pc = 0x177734u; }
    }
    if (ctx->pc != 0x177734u) { return; }
    ctx->pc = 0x177734u;
    // 0x177734: 0x3c020024
    ctx->pc = 0x177734u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x177738: 0x200202d
    ctx->pc = 0x177738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17773c: 0x24509dd8
    ctx->pc = 0x17773cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294942168));
    // 0x177740: 0xc05df2c
    ctx->pc = 0x177740u;
    SET_GPR_U32(ctx, 31, 0x177748u);
    ctx->pc = 0x177744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x177CB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dvci_conv_fname_0x177cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177748u; }
        else if (ctx->pc != 0x177748u) { ctx->pc = 0x177748u; }
    }
    if (ctx->pc != 0x177748u) { return; }
    ctx->pc = 0x177748u;
    // 0x177748: 0x3a0202d
    ctx->pc = 0x177748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17774c: 0xc0543c0
    ctx->pc = 0x17774Cu;
    SET_GPR_U32(ctx, 31, 0x177754u);
    ctx->pc = 0x177750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x150F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceCdSearchFile_0x150f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177754u; }
        else if (ctx->pc != 0x177754u) { ctx->pc = 0x177754u; }
    }
    if (ctx->pc != 0x177754u) { return; }
    ctx->pc = 0x177754u;
    // 0x177754: 0x1440000b
    ctx->pc = 0x177754u;
    {
        const bool branch_taken_0x177754 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x177758u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x177754) {
            ctx->pc = 0x177784u;
            goto label_177784;
        }
    }
    ctx->pc = 0x17775Cu;
    // 0x17775c: 0x3c04002c
    ctx->pc = 0x17775cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x177760: 0x200282d
    ctx->pc = 0x177760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177764: 0xc05114a
    ctx->pc = 0x177764u;
    SET_GPR_U32(ctx, 31, 0x17776Cu);
    ctx->pc = 0x177768u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294947536));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17776Cu; }
        else if (ctx->pc != 0x17776Cu) { ctx->pc = 0x17776Cu; }
    }
    if (ctx->pc != 0x17776Cu) { return; }
    ctx->pc = 0x17776Cu;
    // 0x17776c: 0x3c05002c
    ctx->pc = 0x17776cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
    // 0x177770: 0x202d
    ctx->pc = 0x177770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177774: 0x24a5b2f8
    ctx->pc = 0x177774u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294947576));
label_177778:
    // 0x177778: 0xc05dd3c
    ctx->pc = 0x177778u;
    SET_GPR_U32(ctx, 31, 0x177780u);
    ctx->pc = 0x1774F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dvci_call_errfn_0x1774f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177780u; }
        else if (ctx->pc != 0x177780u) { ctx->pc = 0x177780u; }
    }
    if (ctx->pc != 0x177780u) { return; }
    ctx->pc = 0x177780u;
    // 0x177780: 0x102d
    ctx->pc = 0x177780u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_177784:
    // 0x177784: 0xdfbf0040
    ctx->pc = 0x177784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_177788:
    // 0x177788: 0xdfb00030
    ctx->pc = 0x177788u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17778c: 0x3e00008
    ctx->pc = 0x17778Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177790u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x177714u: goto label_177714;
            case 0x177778u: goto label_177778;
            case 0x177784u: goto label_177784;
            case 0x177788u: goto label_177788;
            default: break;
        }
        return;
    }
    ctx->pc = 0x177794u;
}
