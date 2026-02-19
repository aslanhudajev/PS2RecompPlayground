#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: end_fullscreen_inventory
// Address: 0x22a0a8 - 0x22a148
void end_fullscreen_inventory_0x22a0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x22a0a8u;

    // 0x22a0a8: 0x27bdffd0
    ctx->pc = 0x22a0a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22a0ac: 0xffbf0020
    ctx->pc = 0x22a0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22a0b0: 0xffb10010
    ctx->pc = 0x22a0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22a0b4: 0xffb00000
    ctx->pc = 0x22a0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22a0b8: 0x882d
    ctx->pc = 0x22a0b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a0bc: 0x802d
    ctx->pc = 0x22a0bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22a0c0:
    // 0x22a0c0: 0xc08a7b4
    ctx->pc = 0x22A0C0u;
    SET_GPR_U32(ctx, 31, 0x22A0C8u);
    ctx->pc = 0x22A0C4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x229ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        end_inventory_panel_0x229ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A0C8u; }
    }
    if (ctx->pc != 0x22A0C8u) { return; }
    ctx->pc = 0x22A0C8u;
    // 0x22a0c8: 0x26100001
    ctx->pc = 0x22a0c8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x22a0cc: 0x2a020004
    ctx->pc = 0x22a0ccu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x22a0d0: 0x1440fffb
    ctx->pc = 0x22A0D0u;
    {
        const bool branch_taken_0x22a0d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x22a0d0) {
            ctx->pc = 0x22A0C0u;
            goto label_22a0c0;
        }
    }
    ctx->pc = 0x22A0D8u;
    // 0x22a0d8: 0x5620000f
    ctx->pc = 0x22A0D8u;
    {
        const bool branch_taken_0x22a0d8 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x22a0d8) {
            ctx->pc = 0x22A0DCu;
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x22A118u;
            goto label_22a118;
        }
    }
    ctx->pc = 0x22A0E0u;
label_22a0e0:
    // 0x22a0e0: 0xc0b521c
    ctx->pc = 0x22A0E0u;
    SET_GPR_U32(ctx, 31, 0x22A0E8u);
    ctx->pc = 0x22A0E4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2D4870u;
    {
        const uint32_t __entryPc = ctx->pc;
        wait_vb_0x2d4870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A0E8u; }
    }
    if (ctx->pc != 0x22A0E8u) { return; }
    ctx->pc = 0x22A0E8u;
    // 0x22a0e8: 0xc080b88
    ctx->pc = 0x22A0E8u;
    SET_GPR_U32(ctx, 31, 0x22A0F0u);
    ctx->pc = 0x202E20u;
    {
        const uint32_t __entryPc = ctx->pc;
        ClockOncePerFrame_0x202e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A0F0u; }
    }
    if (ctx->pc != 0x22A0F0u) { return; }
    ctx->pc = 0x22A0F0u;
    // 0x22a0f0: 0xc088ad6
    ctx->pc = 0x22A0F0u;
    SET_GPR_U32(ctx, 31, 0x22A0F8u);
    ctx->pc = 0x222B58u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioQueUpdate_0x222b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A0F8u; }
    }
    if (ctx->pc != 0x22A0F8u) { return; }
    ctx->pc = 0x22A0F8u;
    // 0x22a0f8: 0xc08a7e2
    ctx->pc = 0x22A0F8u;
    SET_GPR_U32(ctx, 31, 0x22A100u);
    ctx->pc = 0x229F88u;
    {
        const uint32_t __entryPc = ctx->pc;
        draw_panels_0x229f88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A100u; }
    }
    if (ctx->pc != 0x22A100u) { return; }
    ctx->pc = 0x22A100u;
    // 0x22a100: 0xc0b179a
    ctx->pc = 0x22A100u;
    SET_GPR_U32(ctx, 31, 0x22A108u);
    ctx->pc = 0x22A104u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C5E68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBEndFrame_0x2c5e68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A108u; }
    }
    if (ctx->pc != 0x22A108u) { return; }
    ctx->pc = 0x22A108u;
    // 0x22a108: 0x1220fff5
    ctx->pc = 0x22A108u;
    {
        const bool branch_taken_0x22a108 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        if (branch_taken_0x22a108) {
            ctx->pc = 0x22A0E0u;
            goto label_22a0e0;
        }
    }
    ctx->pc = 0x22A110u;
    // 0x22a110: 0x802d
    ctx->pc = 0x22a110u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a114: 0x0
    ctx->pc = 0x22a114u;
    // NOP
label_22a118:
    // 0x22a118: 0xc08a7b4
    ctx->pc = 0x22A118u;
    SET_GPR_U32(ctx, 31, 0x22A120u);
    ctx->pc = 0x22A11Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x229ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        end_inventory_panel_0x229ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A120u; }
    }
    if (ctx->pc != 0x22A120u) { return; }
    ctx->pc = 0x22A120u;
    // 0x22a120: 0x26100001
    ctx->pc = 0x22a120u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x22a124: 0x2a020004
    ctx->pc = 0x22a124u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x22a128: 0x1440fffb
    ctx->pc = 0x22A128u;
    {
        const bool branch_taken_0x22a128 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22A12Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x22a128) {
            ctx->pc = 0x22A118u;
            goto label_22a118;
        }
    }
    ctx->pc = 0x22A130u;
    // 0x22a130: 0xac401038
    ctx->pc = 0x22a130u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4152), GPR_U32(ctx, 0));
    // 0x22a134: 0xdfbf0020
    ctx->pc = 0x22a134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22a138: 0xdfb10010
    ctx->pc = 0x22a138u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a13c: 0xdfb00000
    ctx->pc = 0x22a13cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a140: 0x8080366
    ctx->pc = 0x22A140u;
    ctx->pc = 0x22A144u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x200D98u;
    LoadVU1GameLogic_0x200d98(rdram, ctx, runtime); return;
    ctx->pc = 0x22A148u;
}
