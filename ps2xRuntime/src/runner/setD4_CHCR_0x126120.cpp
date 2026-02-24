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
// Address: 0x126120 - 0x126184
void setD4_CHCR_0x126120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("setD4_CHCR_0x126120");
#endif

    ctx->pc = 0x126120u;

    // 0x126120: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x126120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x126124: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x126124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x126128: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x126128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12612c: 0xc0453ee  jal         func_114FB8
    ctx->pc = 0x12612Cu;
    SET_GPR_U32(ctx, 31, 0x126134u);
    ctx->pc = 0x126130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12612Cu;
            // 0x126130: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114FB8u;
    if (runtime->hasFunction(0x114FB8u)) {
        auto targetFn = runtime->lookupFunction(0x114FB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126134u; }
        if (ctx->pc != 0x126134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x114fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126134u; }
        if (ctx->pc != 0x126134u) { return; }
    }
    ctx->pc = 0x126134u;
    // 0x126134: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x126134u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x126138: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x126138u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x12613c: 0x34a5f520  ori         $a1, $a1, 0xF520
    ctx->pc = 0x12613cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)62752u)));
    // 0x126140: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x126140u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x126144: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x126144u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0))); // MMIO: 0x10000000
    // 0x126148: 0x34c6f590  ori         $a2, $a2, 0xF590
    ctx->pc = 0x126148u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)62864u)));
    // 0x12614c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x12614cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x126150: 0x3c04fffe  lui         $a0, 0xFFFE
    ctx->pc = 0x126150u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65534 << 16));
    // 0x126154: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x126154u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x126158: 0x3463b400  ori         $v1, $v1, 0xB400
    ctx->pc = 0x126158u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)46080u)));
    // 0x12615c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x12615cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x126160: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x126160u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)65535u)));
    // 0x126164: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x126164u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x126168: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x126168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12616c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x12616cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x126170: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x126170u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126174: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x126174u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x126178: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x126178u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x12617c: 0x8045400  j           func_115000
    ctx->pc = 0x12617Cu;
    ctx->pc = 0x126180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12617Cu;
            // 0x126180: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x115000u;
    if (runtime->hasFunction(0x115000u)) {
        auto targetFn = runtime->lookupFunction(0x115000u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        EIntr_0x115000(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x126184u;
}
