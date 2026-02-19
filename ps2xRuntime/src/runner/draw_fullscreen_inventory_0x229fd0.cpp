#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: draw_fullscreen_inventory
// Address: 0x229fd0 - 0x22a03c
void draw_fullscreen_inventory_0x229fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x229fd0u;

    // 0x229fd0: 0x27bdffe0
    ctx->pc = 0x229fd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x229fd4: 0xffbf0010
    ctx->pc = 0x229fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x229fd8: 0xc08a330
    ctx->pc = 0x229FD8u;
    SET_GPR_U32(ctx, 31, 0x229FE0u);
    ctx->pc = 0x229FDCu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->pc = 0x228CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        FireScrollActive_0x228cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229FE0u; }
    }
    if (ctx->pc != 0x229FE0u) { return; }
    ctx->pc = 0x229FE0u;
    // 0x229fe0: 0x14400013
    ctx->pc = 0x229FE0u;
    {
        const bool branch_taken_0x229fe0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x229FE4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x229fe0) {
            ctx->pc = 0x22A030u;
            goto label_22a030;
        }
    }
    ctx->pc = 0x229FE8u;
    // 0x229fe8: 0x3c020032
    ctx->pc = 0x229fe8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x229fec: 0x8c421038
    ctx->pc = 0x229fecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4152)));
    // 0x229ff0: 0x14400009
    ctx->pc = 0x229FF0u;
    {
        const bool branch_taken_0x229ff0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x229FF4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x229ff0) {
            ctx->pc = 0x22A018u;
            goto label_22a018;
        }
    }
    ctx->pc = 0x229FF8u;
label_229ff8:
    // 0x229ff8: 0xc08a79e
    ctx->pc = 0x229FF8u;
    SET_GPR_U32(ctx, 31, 0x22A000u);
    ctx->pc = 0x229FFCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x229E78u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_inventory_panel_0x229e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A000u; }
    }
    if (ctx->pc != 0x22A000u) { return; }
    ctx->pc = 0x22A000u;
    // 0x22a000: 0xc08a766
    ctx->pc = 0x22A000u;
    SET_GPR_U32(ctx, 31, 0x22A008u);
    ctx->pc = 0x22A004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x229D98u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_panel_blits_0x229d98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A008u; }
    }
    if (ctx->pc != 0x22A008u) { return; }
    ctx->pc = 0x22A008u;
    // 0x22a008: 0x26100001
    ctx->pc = 0x22a008u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x22a00c: 0x2a020004
    ctx->pc = 0x22a00cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x22a010: 0x1440fff9
    ctx->pc = 0x22A010u;
    {
        const bool branch_taken_0x22a010 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x22a010) {
            ctx->pc = 0x229FF8u;
            goto label_229ff8;
        }
    }
    ctx->pc = 0x22A018u;
label_22a018:
    // 0x22a018: 0xc08a7e2
    ctx->pc = 0x22A018u;
    SET_GPR_U32(ctx, 31, 0x22A020u);
    ctx->pc = 0x229F88u;
    {
        const uint32_t __entryPc = ctx->pc;
        draw_panels_0x229f88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A020u; }
    }
    if (ctx->pc != 0x22A020u) { return; }
    ctx->pc = 0x22A020u;
    // 0x22a020: 0x3c030032
    ctx->pc = 0x22a020u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x22a024: 0x24020001
    ctx->pc = 0x22a024u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x22a028: 0xac621038
    ctx->pc = 0x22a028u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4152), GPR_U32(ctx, 2));
    // 0x22a02c: 0xdfbf0010
    ctx->pc = 0x22a02cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22a030:
    // 0x22a030: 0xdfb00000
    ctx->pc = 0x22a030u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a034: 0x3e00008
    ctx->pc = 0x22A034u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A038u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x229FF8u: goto label_229ff8;
            case 0x22A018u: goto label_22a018;
            case 0x22A030u: goto label_22a030;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22A03Cu;
}
