#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: play_se
// Address: 0x174440 - 0x174490
void play_se_0x174440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("play_se_0x174440");
#endif

    ctx->pc = 0x174440u;

    // 0x174440: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x174440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x174444: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x174444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x174448: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x174448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17444c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17444cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x174450: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x174450u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174454: 0xc05cad0  jal         func_172B40
    ctx->pc = 0x174454u;
    SET_GPR_U32(ctx, 31, 0x17445Cu);
    ctx->pc = 0x174458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174454u;
            // 0x174458: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172B40u;
    if (runtime->hasFunction(0x172B40u)) {
        auto targetFn = runtime->lookupFunction(0x172B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17445Cu; }
        if (ctx->pc != 0x17445Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_FindFreeSPUChannel_0x172b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17445Cu; }
        if (ctx->pc != 0x17445Cu) { return; }
    }
    ctx->pc = 0x17445Cu;
    // 0x17445c: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x17445cu;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x174460: 0x4a00007  bltz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x174460u;
    {
        const bool branch_taken_0x174460 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x174464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174460u;
            // 0x174464: 0x24061fff  addiu       $a2, $zero, 0x1FFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8191));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174460) {
            ctx->pc = 0x174480u;
            goto label_174480;
        }
    }
    ctx->pc = 0x174468u;
    // 0x174468: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x174468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17446c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x17446cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174470: 0x24080800  addiu       $t0, $zero, 0x800
    ctx->pc = 0x174470u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x174474: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x174474u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174478: 0xc05cd90  jal         func_173640
    ctx->pc = 0x174478u;
    SET_GPR_U32(ctx, 31, 0x174480u);
    ctx->pc = 0x17447Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174478u;
            // 0x17447c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173640u;
    if (runtime->hasFunction(0x173640u)) {
        auto targetFn = runtime->lookupFunction(0x173640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174480u; }
        if (ctx->pc != 0x174480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_PlaySFX_0x173640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174480u; }
        if (ctx->pc != 0x174480u) { return; }
    }
    ctx->pc = 0x174480u;
label_174480:
    // 0x174480: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x174480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174484: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x174484u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174488: 0x3e00008  jr          $ra
    ctx->pc = 0x174488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17448Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174488u;
            // 0x17448c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174480u: goto label_174480;
            default: break;
        }
        return;
    }
    ctx->pc = 0x174490u;
}
