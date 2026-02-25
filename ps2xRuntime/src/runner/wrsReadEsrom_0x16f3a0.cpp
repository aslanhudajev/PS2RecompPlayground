#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsReadEsrom
// Address: 0x16f3a0 - 0x16f3f4
void wrsReadEsrom_0x16f3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsReadEsrom_0x16f3a0");
#endif

    ctx->pc = 0x16f3a0u;

    // 0x16f3a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16f3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16f3a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16f3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16f3a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16f3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16f3ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16f3acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f3b0: 0xc060694  jal         func_181A50
    ctx->pc = 0x16F3B0u;
    SET_GPR_U32(ctx, 31, 0x16F3B8u);
    ctx->pc = 0x16F3B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F3B0u;
            // 0x16f3b4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F3B8u; }
        if (ctx->pc != 0x16F3B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F3B8u; }
        if (ctx->pc != 0x16F3B8u) { return; }
    }
    ctx->pc = 0x16F3B8u;
    // 0x16f3b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16f3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f3bc: 0xc0504cc  jal         func_141330
    ctx->pc = 0x16F3BCu;
    SET_GPR_U32(ctx, 31, 0x16F3C4u);
    ctx->pc = 0x16F3C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F3BCu;
            // 0x16f3c0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141330u;
    if (runtime->hasFunction(0x141330u)) {
        auto targetFn = runtime->lookupFunction(0x141330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F3C4u; }
        if (ctx->pc != 0x16F3C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRomLoad_0x141330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F3C4u; }
        if (ctx->pc != 0x16F3C4u) { return; }
    }
    ctx->pc = 0x16F3C4u;
    // 0x16f3c4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x16f3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x16f3c8: 0xc043150  jal         func_10C540
    ctx->pc = 0x16F3C8u;
    SET_GPR_U32(ctx, 31, 0x16F3D0u);
    ctx->pc = 0x16F3CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F3C8u;
            // 0x16f3cc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C540u;
    if (runtime->hasFunction(0x10C540u)) {
        auto targetFn = runtime->lookupFunction(0x10C540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F3D0u; }
        if (ctx->pc != 0x16F3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiParseHeader_0x10c540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F3D0u; }
        if (ctx->pc != 0x16F3D0u) { return; }
    }
    ctx->pc = 0x16F3D0u;
    // 0x16f3d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x16f3d0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
    // 0x16f3d4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x16F3D4u;
    {
        const bool branch_taken_0x16f3d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f3d4) {
            ctx->pc = 0x16F3E0u;
            goto label_16f3e0;
        }
    }
    ctx->pc = 0x16F3DCu;
    // 0x16f3dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16f3dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f3e0:
    // 0x16f3e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16f3e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f3e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16f3e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16f3e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16f3e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f3ec: 0x3e00008  jr          $ra
    ctx->pc = 0x16F3ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F3ECu;
            // 0x16f3f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16F3E0u: goto label_16f3e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16F3F4u;
}
