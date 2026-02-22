#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _clearEach
// Address: 0x11ff10 - 0x11ffd4
void _clearEach_0x11ff10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11ff10u;

    // 0x11ff10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11ff10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11ff14: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x11ff14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x11ff18: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x11ff18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x11ff1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11ff1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ff20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11ff20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11ff24: 0xac601a3c  sw          $zero, 0x1A3C($v1)
    ctx->pc = 0x11ff24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6716), GPR_U32(ctx, 0));
    // 0x11ff28: 0xc0453ee  jal         func_114FB8
    ctx->pc = 0x11FF28u;
    SET_GPR_U32(ctx, 31, 0x11FF30u);
    ctx->pc = 0x11FF2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11FF28u;
            // 0x11ff2c: 0xac821824  sw          $v0, 0x1824($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 6180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114FB8u;
    if (runtime->hasFunction(0x114FB8u)) {
        auto targetFn = runtime->lookupFunction(0x114FB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FF30u; }
        if (ctx->pc != 0x11FF30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x114fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FF30u; }
        if (ctx->pc != 0x11FF30u) { return; }
    }
    ctx->pc = 0x11FF30u;
    // 0x11ff30: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x11ff30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x11ff34: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x11ff34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x11ff38: 0x34a5f520  ori         $a1, $a1, 0xF520
    ctx->pc = 0x11ff38u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)62752u)));
    // 0x11ff3c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x11ff3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x11ff40: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x11ff40u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0))); // MMIO: 0x10000000
    // 0x11ff44: 0x34c6f590  ori         $a2, $a2, 0xF590
    ctx->pc = 0x11ff44u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)62864u)));
    // 0x11ff48: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x11ff48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x11ff4c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x11ff4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x11ff50: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x11ff50u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x11ff54: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x11ff54u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)45056u)));
    // 0x11ff58: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x11ff58u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x11ff5c: 0x3484b400  ori         $a0, $a0, 0xB400
    ctx->pc = 0x11ff5cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)46080u)));
    // 0x11ff60: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x11ff60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x11ff64: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x11ff64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x11ff68: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x11ff68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x11ff6c: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x11ff6cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)54272u)));
    // 0x11ff70: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x11ff70u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x11ff74: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x11ff74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
    // 0x11ff78: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x11ff78u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)65535u)));
    // 0x11ff7c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x11ff7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11ff80: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x11ff80u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x11ff84: 0xc045400  jal         func_115000
    ctx->pc = 0x11FF84u;
    SET_GPR_U32(ctx, 31, 0x11FF8Cu);
    ctx->pc = 0x11FF88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11FF84u;
            // 0x11ff88: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x115000u;
    if (runtime->hasFunction(0x115000u)) {
        auto targetFn = runtime->lookupFunction(0x115000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FF8Cu; }
        if (ctx->pc != 0x11FF8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EIntr_0x115000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FF8Cu; }
        if (ctx->pc != 0x11FF8Cu) { return; }
    }
    ctx->pc = 0x11FF8Cu;
    // 0x11ff8c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x11ff8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x11ff90: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x11ff90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x11ff94: 0x3463b020  ori         $v1, $v1, 0xB020
    ctx->pc = 0x11ff94u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)45088u)));
    // 0x11ff98: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x11ff98u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)46112u)));
    // 0x11ff9c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x11ff9cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x11ffa0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x11ffa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x11ffa4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x11ffa4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x11ffa8: 0x3442d420  ori         $v0, $v0, 0xD420
    ctx->pc = 0x11ffa8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)54304u)));
    // 0x11ffac: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x11ffacu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x11ffb0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x11ffb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x11ffb4: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x11ffb4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)8208u)));
    // 0x11ffb8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x11ffb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x11ffbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11ffbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ffc0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11ffc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ffc4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x11ffc4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x11ffc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11ffc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ffcc: 0x80498f0  j           func_1263C0
    ctx->pc = 0x11FFCCu;
    ctx->pc = 0x11FFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11FFCCu;
            // 0x11ffd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1263C0u;
    if (runtime->hasFunction(0x1263C0u)) {
        auto targetFn = runtime->lookupFunction(0x1263C0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sceIpuSync_0x1263c0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x11FFD4u;
}
