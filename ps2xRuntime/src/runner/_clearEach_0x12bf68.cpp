#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _clearEach
// Address: 0x12bf68 - 0x12c030
void _clearEach_0x12bf68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_clearEach_0x12bf68");
#endif

    ctx->pc = 0x12bf68u;

    // 0x12bf68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12bf68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12bf6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12bf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12bf70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12bf70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12bf74: 0xac820818  sw          $v0, 0x818($a0)
    ctx->pc = 0x12bf74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2072), GPR_U32(ctx, 2));
    // 0x12bf78: 0xc04de68  jal         func_1379A0
    ctx->pc = 0x12BF78u;
    SET_GPR_U32(ctx, 31, 0x12BF80u);
    ctx->pc = 0x12BF7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BF78u;
            // 0x12bf7c: 0xac8001b0  sw          $zero, 0x1B0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 432), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1379A0u;
    if (runtime->hasFunction(0x1379A0u)) {
        auto targetFn = runtime->lookupFunction(0x1379A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BF80u; }
        if (ctx->pc != 0x12BF80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x1379a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BF80u; }
        if (ctx->pc != 0x12BF80u) { return; }
    }
    ctx->pc = 0x12BF80u;
    // 0x12bf80: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x12bf80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x12bf84: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x12bf84u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x12bf88: 0x34c6f520  ori         $a2, $a2, 0xF520
    ctx->pc = 0x12bf88u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)62752u)));
    // 0x12bf8c: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x12bf8cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x12bf90: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x12bf90u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 6), 0))); // MMIO: 0x10000000
    // 0x12bf94: 0x34e7f590  ori         $a3, $a3, 0xF590
    ctx->pc = 0x12bf94u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 7), _mm_cvtsi32_si128((int)62864u)));
    // 0x12bf98: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x12bf98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x12bf9c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x12bf9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x12bfa0: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x12bfa0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 8)));
    // 0x12bfa4: 0x3484b000  ori         $a0, $a0, 0xB000
    ctx->pc = 0x12bfa4u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)45056u)));
    // 0x12bfa8: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x12bfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x12bfac: 0x34a5b400  ori         $a1, $a1, 0xB400
    ctx->pc = 0x12bfacu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)46080u)));
    // 0x12bfb0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x12bfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x12bfb4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x12bfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x12bfb8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x12bfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x12bfbc: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x12bfbcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)54272u)));
    // 0x12bfc0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x12bfc0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x12bfc4: 0x3c04fffe  lui         $a0, 0xFFFE
    ctx->pc = 0x12bfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65534 << 16));
    // 0x12bfc8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x12bfc8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)65535u)));
    // 0x12bfcc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x12bfccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12bfd0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x12bfd0u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x12bfd4: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x12bfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x12bfd8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12BFD8u;
    {
        const bool branch_taken_0x12bfd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BFDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BFD8u;
            // 0x12bfdc: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bfd8) {
            ctx->pc = 0x12BFECu;
            goto label_12bfec;
        }
    }
    ctx->pc = 0x12BFE0u;
    // 0x12bfe0: 0xc04de7a  jal         func_1379E8
    ctx->pc = 0x12BFE0u;
    SET_GPR_U32(ctx, 31, 0x12BFE8u);
    ctx->pc = 0x1379E8u;
    if (runtime->hasFunction(0x1379E8u)) {
        auto targetFn = runtime->lookupFunction(0x1379E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BFE8u; }
        if (ctx->pc != 0x12BFE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EIntr_0x1379e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BFE8u; }
        if (ctx->pc != 0x12BFE8u) { return; }
    }
    ctx->pc = 0x12BFE8u;
    // 0x12bfe8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x12bfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_12bfec:
    // 0x12bfec: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x12bfecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x12bff0: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x12bff0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)45088u)));
    // 0x12bff4: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x12bff4u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)46112u)));
    // 0x12bff8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x12bff8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x12bffc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x12bffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x12c000: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x12c000u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x12c004: 0x3463d420  ori         $v1, $v1, 0xD420
    ctx->pc = 0x12c004u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)54304u)));
    // 0x12c008: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x12c008u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x12c00c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x12c00cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x12c010: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x12c010u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)8208u)));
    // 0x12c014: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x12c014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x12c018: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12c018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c01c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12c01cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c020: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x12c020u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x12c024: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12c024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c028: 0x8047372  j           func_11CDC8
    ctx->pc = 0x12C028u;
    ctx->pc = 0x12C02Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C028u;
            // 0x12c02c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11CDC8u;
    if (runtime->hasFunction(0x11CDC8u)) {
        auto targetFn = runtime->lookupFunction(0x11CDC8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sceIpuSync_0x11cdc8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x12C030u;
}
