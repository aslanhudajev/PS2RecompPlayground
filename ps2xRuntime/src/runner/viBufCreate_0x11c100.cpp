#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: viBufCreate
// Address: 0x11c100 - 0x11c178
void viBufCreate_0x11c100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("viBufCreate_0x11c100");
#endif

    ctx->pc = 0x11c100u;

    // 0x11c100: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x11c100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x11c104: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11c104u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11c108: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11c108u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x11c10c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x11c10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x11c110: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x11c110u;
    SET_GPR_VEC(ctx, 6, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x11c114: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x11c114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x11c118: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11c118u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c11c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11c11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11c120: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x11c120u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), GPR_VEC(ctx, 3)));
    // 0x11c124: 0x712c0  sll         $v0, $a3, 11
    ctx->pc = 0x11c124u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 11));
    // 0x11c128: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x11c128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x11c12c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11c12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c130: 0xae060004  sw          $a2, 0x4($s0)
    ctx->pc = 0x11c130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
    // 0x11c134: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11c134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c138: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x11c138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x11c13c: 0xae080050  sw          $t0, 0x50($s0)
    ctx->pc = 0x11c13cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 8));
    // 0x11c140: 0xae090054  sw          $t1, 0x54($s0)
    ctx->pc = 0x11c140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 9));
    // 0x11c144: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x11c144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x11c148: 0xae070008  sw          $a3, 0x8($s0)
    ctx->pc = 0x11c148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
    // 0x11c14c: 0xc0438a8  jal         func_10E2A0
    ctx->pc = 0x11C14Cu;
    SET_GPR_U32(ctx, 31, 0x11C154u);
    ctx->pc = 0x11C150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C14Cu;
            // 0x11c150: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E2A0u;
    if (runtime->hasFunction(0x10E2A0u)) {
        auto targetFn = runtime->lookupFunction(0x10E2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C154u; }
        if (ctx->pc != 0x11C154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateSema_0x10e2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C154u; }
        if (ctx->pc != 0x11C154u) { return; }
    }
    ctx->pc = 0x11C154u;
    // 0x11c154: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x11c154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x11c158: 0xc04705e  jal         func_11C178
    ctx->pc = 0x11C158u;
    SET_GPR_U32(ctx, 31, 0x11C160u);
    ctx->pc = 0x11C15Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C158u;
            // 0x11c15c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C178u;
    if (runtime->hasFunction(0x11C178u)) {
        auto targetFn = runtime->lookupFunction(0x11C178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C160u; }
        if (ctx->pc != 0x11C160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        viBufReset_0x11c178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C160u; }
        if (ctx->pc != 0x11C160u) { return; }
    }
    ctx->pc = 0x11C160u;
    // 0x11c160: 0xfe000048  sd          $zero, 0x48($s0)
    ctx->pc = 0x11c160u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 0));
    // 0x11c164: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11c164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c168: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11c168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11c16c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x11c16cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c170: 0x3e00008  jr          $ra
    ctx->pc = 0x11C170u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C170u;
            // 0x11c174: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11C178u;
}
