#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: mpegTS
// Address: 0x18a480 - 0x18a4c4
void mpegTS_0x18a480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("mpegTS_0x18a480");
#endif

    ctx->pc = 0x18a480u;

    // 0x18a480: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18a480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18a484: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x18a484u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x18a488: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18a488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18a48c: 0x2484fe48  addiu       $a0, $a0, -0x1B8
    ctx->pc = 0x18a48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966856));
    // 0x18a490: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18a490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18a494: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x18a494u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a498: 0xc062490  jal         func_189240
    ctx->pc = 0x18A498u;
    SET_GPR_U32(ctx, 31, 0x18A4A0u);
    ctx->pc = 0x18A49Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A498u;
            // 0x18a49c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189240u;
    if (runtime->hasFunction(0x189240u)) {
        auto targetFn = runtime->lookupFunction(0x189240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A4A0u; }
        if (ctx->pc != 0x18A4A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        viBufGetTs_0x189240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A4A0u; }
        if (ctx->pc != 0x18A4A0u) { return; }
    }
    ctx->pc = 0x18A4A0u;
    // 0x18a4a0: 0xdfa30020  ld          $v1, 0x20($sp)
    ctx->pc = 0x18a4a0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18a4a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18a4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a4a8: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x18a4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x18a4ac: 0xdfa30028  ld          $v1, 0x28($sp)
    ctx->pc = 0x18a4acu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x18a4b0: 0xfe030010  sd          $v1, 0x10($s0)
    ctx->pc = 0x18a4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 3));
    // 0x18a4b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18a4b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a4b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18a4b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a4bc: 0x3e00008  jr          $ra
    ctx->pc = 0x18A4BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A4C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A4BCu;
            // 0x18a4c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18A4C4u;
}
