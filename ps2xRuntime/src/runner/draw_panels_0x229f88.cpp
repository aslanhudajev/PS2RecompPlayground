#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: draw_panels
// Address: 0x229f88 - 0x229fd0
void draw_panels_0x229f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x229f88u;

    // 0x229f88: 0x27bdffd0
    ctx->pc = 0x229f88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x229f8c: 0xffbf0020
    ctx->pc = 0x229f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x229f90: 0xffb10010
    ctx->pc = 0x229f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x229f94: 0xffb00000
    ctx->pc = 0x229f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x229f98: 0x24110001
    ctx->pc = 0x229f98u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
    // 0x229f9c: 0x802d
    ctx->pc = 0x229f9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_229fa0:
    // 0x229fa0: 0xc08a5f0
    ctx->pc = 0x229FA0u;
    SET_GPR_U32(ctx, 31, 0x229FA8u);
    ctx->pc = 0x229FA4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2297C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        draw_inventory_panel_0x2297c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229FA8u; }
    }
    if (ctx->pc != 0x229FA8u) { return; }
    ctx->pc = 0x229FA8u;
    // 0x229fa8: 0x2880a
    ctx->pc = 0x229fa8u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 0));
    // 0x229fac: 0x26100001
    ctx->pc = 0x229facu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x229fb0: 0x2a020004
    ctx->pc = 0x229fb0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x229fb4: 0x1440fffa
    ctx->pc = 0x229FB4u;
    {
        const bool branch_taken_0x229fb4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x229FB8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x229fb4) {
            ctx->pc = 0x229FA0u;
            goto label_229fa0;
        }
    }
    ctx->pc = 0x229FBCu;
    // 0x229fbc: 0xdfbf0020
    ctx->pc = 0x229fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x229fc0: 0xdfb10010
    ctx->pc = 0x229fc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x229fc4: 0xdfb00000
    ctx->pc = 0x229fc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x229fc8: 0x3e00008
    ctx->pc = 0x229FC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229FCCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x229FA0u: goto label_229fa0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x229FD0u;
}
