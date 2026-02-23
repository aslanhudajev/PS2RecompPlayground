#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_GetCurDelim
// Address: 0x196570 - 0x1965b8
void sfmpv_GetCurDelim_0x196570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_GetCurDelim");


    ctx->pc = 0x196570u;

    // 0x196570: 0x27bdffe0
    ctx->pc = 0x196570u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x196574: 0x28a50004
    ctx->pc = 0x196574u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 5), 4));
    // 0x196578: 0xffb00000
    ctx->pc = 0x196578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19657c: 0xffbf0010
    ctx->pc = 0x19657cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x196580: 0x10a00003
    ctx->pc = 0x196580u;
    {
        const bool branch_taken_0x196580 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x196584u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x196580) {
            ctx->pc = 0x196590u;
            goto label_196590;
        }
    }
    ctx->pc = 0x196588u;
    // 0x196588: 0x10000006
    ctx->pc = 0x196588u;
    {
        const bool branch_taken_0x196588 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19658Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x196588) {
            ctx->pc = 0x1965A4u;
            goto label_1965a4;
        }
    }
    ctx->pc = 0x196590u;
label_196590:
    // 0x196590: 0xc061610
    ctx->pc = 0x196590u;
    SET_GPR_U32(ctx, 31, 0x196598u);
    ctx->pc = 0x185840u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPV_CheckDelim_0x185840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196598u; }
        else if (ctx->pc != 0x196598u) { ctx->pc = 0x196598u; }
    }
    if (ctx->pc != 0x196598u) { return; }
    ctx->pc = 0x196598u;
    // 0x196598: 0x3a0300cc
    ctx->pc = 0x196598u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 16), 204));
    // 0x19659c: 0x304400cc
    ctx->pc = 0x19659cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), 204));
    // 0x1965a0: 0x43200a
    ctx->pc = 0x1965a0u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 2));
label_1965a4:
    // 0x1965a4: 0xdfbf0010
    ctx->pc = 0x1965a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1965a8: 0x80102d
    ctx->pc = 0x1965a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1965ac: 0xdfb00000
    ctx->pc = 0x1965acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1965b0: 0x3e00008
    ctx->pc = 0x1965B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1965B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x196590u: goto label_196590;
            case 0x1965A4u: goto label_1965a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1965B8u;
}
