#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfply_ChkFin
// Address: 0x19b328 - 0x19b394
void sfply_ChkFin_0x19b328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfply_ChkFin");


    ctx->pc = 0x19b328u;

    // 0x19b328: 0x27bdffe0
    ctx->pc = 0x19b328u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19b32c: 0xffb00000
    ctx->pc = 0x19b32cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19b330: 0xffbf0010
    ctx->pc = 0x19b330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19b334: 0xc066ce6
    ctx->pc = 0x19B334u;
    SET_GPR_U32(ctx, 31, 0x19B33Cu);
    ctx->pc = 0x19B338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19B398u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfply_IsEtime_0x19b398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B33Cu; }
        else if (ctx->pc != 0x19B33Cu) { ctx->pc = 0x19B33Cu; }
    }
    if (ctx->pc != 0x19B33Cu) { return; }
    ctx->pc = 0x19B33Cu;
    // 0x19b33c: 0x1440000d
    ctx->pc = 0x19B33Cu;
    {
        const bool branch_taken_0x19b33c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x19b33c) {
            ctx->pc = 0x19B374u;
            goto label_19b374;
        }
    }
    ctx->pc = 0x19B344u;
    // 0x19b344: 0xc066d00
    ctx->pc = 0x19B344u;
    SET_GPR_U32(ctx, 31, 0x19B34Cu);
    ctx->pc = 0x19B348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19B400u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfply_IsEtrg_0x19b400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B34Cu; }
        else if (ctx->pc != 0x19B34Cu) { ctx->pc = 0x19B34Cu; }
    }
    if (ctx->pc != 0x19B34Cu) { return; }
    ctx->pc = 0x19B34Cu;
    // 0x19b34c: 0x14400009
    ctx->pc = 0x19B34Cu;
    {
        const bool branch_taken_0x19b34c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x19b34c) {
            ctx->pc = 0x19B374u;
            goto label_19b374;
        }
    }
    ctx->pc = 0x19B354u;
    // 0x19b354: 0xc066d32
    ctx->pc = 0x19B354u;
    SET_GPR_U32(ctx, 31, 0x19B35Cu);
    ctx->pc = 0x19B358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19B4C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfply_IsStagnant_0x19b4c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B35Cu; }
        else if (ctx->pc != 0x19B35Cu) { ctx->pc = 0x19B35Cu; }
    }
    if (ctx->pc != 0x19B35Cu) { return; }
    ctx->pc = 0x19B35Cu;
    // 0x19b35c: 0x14400005
    ctx->pc = 0x19B35Cu;
    {
        const bool branch_taken_0x19b35c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x19b35c) {
            ctx->pc = 0x19B374u;
            goto label_19b374;
        }
    }
    ctx->pc = 0x19B364u;
    // 0x19b364: 0xc066d46
    ctx->pc = 0x19B364u;
    SET_GPR_U32(ctx, 31, 0x19B36Cu);
    ctx->pc = 0x19B368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19B518u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfply_IsPlayTimeAutoStop_0x19b518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B36Cu; }
        else if (ctx->pc != 0x19B36Cu) { ctx->pc = 0x19B36Cu; }
    }
    if (ctx->pc != 0x19B36Cu) { return; }
    ctx->pc = 0x19B36Cu;
    // 0x19b36c: 0x10400005
    ctx->pc = 0x19B36Cu;
    {
        const bool branch_taken_0x19b36c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19B370u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19b36c) {
            ctx->pc = 0x19B384u;
            goto label_19b384;
        }
    }
    ctx->pc = 0x19B374u;
label_19b374:
    // 0x19b374: 0xc066d6a
    ctx->pc = 0x19B374u;
    SET_GPR_U32(ctx, 31, 0x19B37Cu);
    ctx->pc = 0x19B378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19B5A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfply_Fin_0x19b5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B37Cu; }
        else if (ctx->pc != 0x19B37Cu) { ctx->pc = 0x19B37Cu; }
    }
    if (ctx->pc != 0x19B37Cu) { return; }
    ctx->pc = 0x19B37Cu;
    // 0x19b37c: 0x10000002
    ctx->pc = 0x19B37Cu;
    {
        const bool branch_taken_0x19b37c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19B380u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x19b37c) {
            ctx->pc = 0x19B388u;
            goto label_19b388;
        }
    }
    ctx->pc = 0x19B384u;
label_19b384:
    // 0x19b384: 0xdfbf0010
    ctx->pc = 0x19b384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19b388:
    // 0x19b388: 0xdfb00000
    ctx->pc = 0x19b388u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b38c: 0x3e00008
    ctx->pc = 0x19B38Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B390u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19B374u: goto label_19b374;
            case 0x19B384u: goto label_19b384;
            case 0x19B388u: goto label_19b388;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19B394u;
}
