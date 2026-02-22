#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setD4_CHCR
// Address: 0x126428 - 0x12648c
void setD4_CHCR_0x126428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x126428u;

    // 0x126428: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x126428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12642c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12642cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x126430: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x126430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x126434: 0xc0453ee  jal         func_114FB8
    ctx->pc = 0x126434u;
    SET_GPR_U32(ctx, 31, 0x12643Cu);
    ctx->pc = 0x126438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126434u;
            // 0x126438: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114FB8u;
    if (runtime->hasFunction(0x114FB8u)) {
        auto targetFn = runtime->lookupFunction(0x114FB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12643Cu; }
        if (ctx->pc != 0x12643Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x114fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12643Cu; }
        if (ctx->pc != 0x12643Cu) { return; }
    }
    ctx->pc = 0x12643Cu;
    // 0x12643c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x12643cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x126440: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x126440u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x126444: 0x34a5f520  ori         $a1, $a1, 0xF520
    ctx->pc = 0x126444u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)62752u)));
    // 0x126448: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x126448u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x12644c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x12644cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0))); // MMIO: 0x10000000
    // 0x126450: 0x34c6f590  ori         $a2, $a2, 0xF590
    ctx->pc = 0x126450u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)62864u)));
    // 0x126454: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x126454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x126458: 0x3c04fffe  lui         $a0, 0xFFFE
    ctx->pc = 0x126458u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65534 << 16));
    // 0x12645c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x12645cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x126460: 0x3463b400  ori         $v1, $v1, 0xB400
    ctx->pc = 0x126460u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)46080u)));
    // 0x126464: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x126464u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x126468: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x126468u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)65535u)));
    // 0x12646c: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x12646cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x126470: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x126470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126474: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x126474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x126478: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x126478u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12647c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x12647cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x126480: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x126480u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x126484: 0x8045400  j           func_115000
    ctx->pc = 0x126484u;
    ctx->pc = 0x126488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126484u;
            // 0x126488: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x115000u;
    if (runtime->hasFunction(0x115000u)) {
        auto targetFn = runtime->lookupFunction(0x115000u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        EIntr_0x115000(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x12648Cu;
}
