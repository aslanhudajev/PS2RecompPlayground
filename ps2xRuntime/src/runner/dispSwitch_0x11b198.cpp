#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: dispSwitch
// Address: 0x11b198 - 0x11b1cc
void dispSwitch_0x11b198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11b198u;

    // 0x11b198: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B198u;
    {
        const bool branch_taken_0x11b198 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B19Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B198u;
            // 0x11b19c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b198) {
            ctx->pc = 0x11B1A8u;
            goto label_11b1a8;
        }
    }
    ctx->pc = 0x11B1A0u;
    // 0x11b1a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11B1A0u;
    {
        const bool branch_taken_0x11b1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B1A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B1A0u;
            // 0x11b1a4: 0x8cc5002c  lw          $a1, 0x2C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b1a0) {
            ctx->pc = 0x11B1ACu;
            goto label_11b1ac;
        }
    }
    ctx->pc = 0x11B1A8u;
label_11b1a8:
    // 0x11b1a8: 0x8cc50028  lw          $a1, 0x28($a2)
    ctx->pc = 0x11b1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
label_11b1ac:
    // 0x11b1ac: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x11b1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x11b1b0: 0x2403fe00  addiu       $v1, $zero, -0x200
    ctx->pc = 0x11b1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x11b1b4: 0x30a501ff  andi        $a1, $a1, 0x1FF
    ctx->pc = 0x11b1b4u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)511u)));
    // 0x11b1b8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x11b1b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b1bc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x11b1bcu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x11b1c0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x11b1c0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x11b1c4: 0x80499b2  j           func_1266C8
    ctx->pc = 0x11B1C4u;
    ctx->pc = 0x11B1C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B1C4u;
            // 0x11b1c8: 0xacc20010  sw          $v0, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1266C8u;
    if (runtime->hasFunction(0x1266C8u)) {
        auto targetFn = runtime->lookupFunction(0x1266C8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sceGsPutDispEnv_0x1266c8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x11B1CCu;
}
