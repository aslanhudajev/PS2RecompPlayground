#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: audioDecPause
// Address: 0x187690 - 0x187710
void audioDecPause_0x187690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("audioDecPause_0x187690");
#endif

    ctx->pc = 0x187690u;

    // 0x187690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x187690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x187694: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x187694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x187698: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x187698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18769c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18769cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1876a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1876a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1876a4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1876a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1876a8: 0xc061ba8  jal         func_186EA0
    ctx->pc = 0x1876A8u;
    SET_GPR_U32(ctx, 31, 0x1876B0u);
    ctx->pc = 0x1876ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1876A8u;
            // 0x1876ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186EA0u;
    if (runtime->hasFunction(0x186EA0u)) {
        auto targetFn = runtime->lookupFunction(0x186EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1876B0u; }
        if (ctx->pc != 0x1876B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        changeInputVolume_0x186ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1876B0u; }
        if (ctx->pc != 0x1876B0u) { return; }
    }
    ctx->pc = 0x1876B0u;
    // 0x1876b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1876b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1876b4: 0x340580e0  ori         $a1, $zero, 0x80E0
    ctx->pc = 0x1876b4u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32992u)));
    // 0x1876b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1876b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1876bc: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1876bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1876c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1876c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1876c4: 0xc04b5b2  jal         func_12D6C8
    ctx->pc = 0x1876C4u;
    SET_GPR_U32(ctx, 31, 0x1876CCu);
    ctx->pc = 0x1876C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1876C4u;
            // 0x1876c8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D6C8u;
    if (runtime->hasFunction(0x12D6C8u)) {
        auto targetFn = runtime->lookupFunction(0x12D6C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1876CCu; }
        if (ctx->pc != 0x1876CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x12d6c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1876CCu; }
        if (ctx->pc != 0x1876CCu) { return; }
    }
    ctx->pc = 0x1876CCu;
    // 0x1876cc: 0x21a3c  dsll32      $v1, $v0, 8
    ctx->pc = 0x1876ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 8));
    // 0x1876d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1876d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1876d4: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1876d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1876d8: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x1876d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x1876dc: 0x340580d0  ori         $a1, $zero, 0x80D0
    ctx->pc = 0x1876dcu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32976u)));
    // 0x1876e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1876e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1876e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1876e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1876e8: 0x24094000  addiu       $t1, $zero, 0x4000
    ctx->pc = 0x1876e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x1876ec: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1876ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1876f0: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x1876f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x1876f4: 0x8e080058  lw          $t0, 0x58($s0)
    ctx->pc = 0x1876f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1876f8: 0xc04b5b2  jal         func_12D6C8
    ctx->pc = 0x1876F8u;
    SET_GPR_U32(ctx, 31, 0x187700u);
    ctx->pc = 0x1876FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1876F8u;
            // 0x1876fc: 0x240a0800  addiu       $t2, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D6C8u;
    if (runtime->hasFunction(0x12D6C8u)) {
        auto targetFn = runtime->lookupFunction(0x12D6C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187700u; }
        if (ctx->pc != 0x187700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x12d6c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187700u; }
        if (ctx->pc != 0x187700u) { return; }
    }
    ctx->pc = 0x187700u;
    // 0x187700: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x187700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187704: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x187704u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187708: 0x3e00008  jr          $ra
    ctx->pc = 0x187708u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18770Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187708u;
            // 0x18770c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x187710u;
}
