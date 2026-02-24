#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _sbrk_r
// Address: 0x12b420 - 0x12b47c
void _sbrk_r_0x12b420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_sbrk_r_0x12b420");
#endif

    ctx->pc = 0x12b420u;

    // 0x12b420: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12b420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12b424: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x12b424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x12b428: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12b428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12b42c: 0x3c110017  lui         $s1, 0x17
    ctx->pc = 0x12b42cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)23 << 16));
    // 0x12b430: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12b430u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b434: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12b434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12b438: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12b438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b43c: 0xc043a3e  jal         func_10E8F8
    ctx->pc = 0x12B43Cu;
    SET_GPR_U32(ctx, 31, 0x12B444u);
    ctx->pc = 0x12B440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B43Cu;
            // 0x12b440: 0xae205fe0  sw          $zero, 0x5FE0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24544), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E8F8u;
    if (runtime->hasFunction(0x10E8F8u)) {
        auto targetFn = runtime->lookupFunction(0x10E8F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B444u; }
        if (ctx->pc != 0x12B444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sbrk_0x10e8f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B444u; }
        if (ctx->pc != 0x12B444u) { return; }
    }
    ctx->pc = 0x12B444u;
    // 0x12b444: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12b444u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b448: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x12b448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x12b44c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12b44cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x12b450: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12B450u;
    {
        const bool branch_taken_0x12b450 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12B454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B450u;
            // 0x12b454: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b450) {
            ctx->pc = 0x12B468u;
            goto label_12b468;
        }
    }
    ctx->pc = 0x12B458u;
    // 0x12b458: 0x8e225fe0  lw          $v0, 0x5FE0($s1)
    ctx->pc = 0x12b458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24544)));
    // 0x12b45c: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x12B45Cu;
    {
        const bool branch_taken_0x12b45c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b45c) {
            ctx->pc = 0x12B460u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12B45Cu;
            // 0x12b460: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12B468u;
            goto label_12b468;
        }
    }
    ctx->pc = 0x12B464u;
    // 0x12b464: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12b464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_12b468:
    // 0x12b468: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x12b468u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b46c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x12b46cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b470: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12b470u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b474: 0x3e00008  jr          $ra
    ctx->pc = 0x12B474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B474u;
            // 0x12b478: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12B468u: goto label_12b468;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12B47Cu;
}
