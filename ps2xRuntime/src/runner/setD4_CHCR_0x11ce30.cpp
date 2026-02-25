#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: setD4_CHCR
// Address: 0x11ce30 - 0x11ce94
void setD4_CHCR_0x11ce30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("setD4_CHCR_0x11ce30");
#endif

    ctx->pc = 0x11ce30u;

    // 0x11ce30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11ce30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11ce34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11ce34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11ce38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11ce38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11ce3c: 0xc04de68  jal         func_1379A0
    ctx->pc = 0x11CE3Cu;
    SET_GPR_U32(ctx, 31, 0x11CE44u);
    ctx->pc = 0x11CE40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11CE3Cu;
            // 0x11ce40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1379A0u;
    if (runtime->hasFunction(0x1379A0u)) {
        auto targetFn = runtime->lookupFunction(0x1379A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CE44u; }
        if (ctx->pc != 0x11CE44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x1379a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CE44u; }
        if (ctx->pc != 0x11CE44u) { return; }
    }
    ctx->pc = 0x11CE44u;
    // 0x11ce44: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x11ce44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x11ce48: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x11ce48u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x11ce4c: 0x34a5f520  ori         $a1, $a1, 0xF520
    ctx->pc = 0x11ce4cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)62752u)));
    // 0x11ce50: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x11ce50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x11ce54: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x11ce54u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0))); // MMIO: 0x10000000
    // 0x11ce58: 0x34c6f590  ori         $a2, $a2, 0xF590
    ctx->pc = 0x11ce58u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)62864u)));
    // 0x11ce5c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x11ce5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x11ce60: 0x3c04fffe  lui         $a0, 0xFFFE
    ctx->pc = 0x11ce60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65534 << 16));
    // 0x11ce64: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x11ce64u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x11ce68: 0x3463b400  ori         $v1, $v1, 0xB400
    ctx->pc = 0x11ce68u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)46080u)));
    // 0x11ce6c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x11ce6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x11ce70: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x11ce70u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)65535u)));
    // 0x11ce74: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x11ce74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x11ce78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11ce78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ce7c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x11ce7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11ce80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11ce80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ce84: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x11ce84u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x11ce88: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x11ce88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x11ce8c: 0x804de7a  j           func_1379E8
    ctx->pc = 0x11CE8Cu;
    ctx->pc = 0x11CE90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11CE8Cu;
            // 0x11ce90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1379E8u;
    if (runtime->hasFunction(0x1379E8u)) {
        auto targetFn = runtime->lookupFunction(0x1379E8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        EIntr_0x1379e8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x11CE94u;
}
