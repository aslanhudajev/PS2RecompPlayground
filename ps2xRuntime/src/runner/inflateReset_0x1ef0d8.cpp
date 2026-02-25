#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: inflateReset
// Address: 0x1ef0d8 - 0x1ef138
void inflateReset_0x1ef0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("inflateReset_0x1ef0d8");
#endif

    ctx->pc = 0x1ef0d8u;

    // 0x1ef0d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ef0d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ef0dc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1ef0dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef0e0: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF0E0u;
    {
        const bool branch_taken_0x1ef0e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF0E0u;
            // 0x1ef0e4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef0e0) {
            ctx->pc = 0x1EF0F4u;
            goto label_1ef0f4;
        }
    }
    ctx->pc = 0x1EF0E8u;
    // 0x1ef0e8: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x1ef0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x1ef0ec: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EF0ECu;
    {
        const bool branch_taken_0x1ef0ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef0ec) {
            ctx->pc = 0x1EF0F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF0ECu;
            // 0x1ef0f0: 0xfca00018  sd          $zero, 0x18($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EF0FCu;
            goto label_1ef0fc;
        }
    }
    ctx->pc = 0x1EF0F4u;
label_1ef0f4:
    // 0x1ef0f4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1EF0F4u;
    {
        const bool branch_taken_0x1ef0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF0F4u;
            // 0x1ef0f8: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef0f4) {
            ctx->pc = 0x1EF12Cu;
            goto label_1ef12c;
        }
    }
    ctx->pc = 0x1EF0FCu;
label_1ef0fc:
    // 0x1ef0fc: 0xfca00008  sd          $zero, 0x8($a1)
    ctx->pc = 0x1ef0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 0));
    // 0x1ef100: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x1ef100u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x1ef104: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x1ef104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x1ef108: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x1ef108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1ef10c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1ef10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ef110: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x1ef110u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1ef114: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1ef114u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1ef118: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x1ef118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x1ef11c: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x1ef11cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1ef120: 0xc07beaa  jal         func_1EFAA8
    ctx->pc = 0x1EF120u;
    SET_GPR_U32(ctx, 31, 0x1EF128u);
    ctx->pc = 0x1EF124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF120u;
            // 0x1ef124: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EFAA8u;
    if (runtime->hasFunction(0x1EFAA8u)) {
        auto targetFn = runtime->lookupFunction(0x1EFAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF128u; }
        if (ctx->pc != 0x1EF128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        inflate_blocks_reset_0x1efaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF128u; }
        if (ctx->pc != 0x1EF128u) { return; }
    }
    ctx->pc = 0x1EF128u;
    // 0x1ef128: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ef128u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ef12c:
    // 0x1ef12c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ef12cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef130: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF130u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF130u;
            // 0x1ef134: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EF0F4u: goto label_1ef0f4;
            case 0x1EF0FCu: goto label_1ef0fc;
            case 0x1EF12Cu: goto label_1ef12c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EF138u;
}
