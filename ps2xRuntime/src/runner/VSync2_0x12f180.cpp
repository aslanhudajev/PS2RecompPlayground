#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: VSync2
// Address: 0x12f180 - 0x12f224
void VSync2_0x12f180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("VSync2_0x12f180");
#endif

    ctx->pc = 0x12f180u;

    // 0x12f180: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12f180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12f184: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12f184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12f188: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12f188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f18c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x12f18cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x12f190: 0xc04bbf4  jal         func_12EFD0
    ctx->pc = 0x12F190u;
    SET_GPR_U32(ctx, 31, 0x12F198u);
    ctx->pc = 0x12F194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F190u;
            // 0x12f194: 0x37a50008  ori         $a1, $sp, 0x8 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 29), _mm_cvtsi32_si128((int)8u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EFD0u;
    if (runtime->hasFunction(0x12EFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12EFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F198u; }
        if (ctx->pc != 0x12F198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVSyncFlag_0x12efd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F198u; }
        if (ctx->pc != 0x12F198u) { return; }
    }
    ctx->pc = 0x12F198u;
    // 0x12f198: 0xc04de68  jal         func_1379A0
    ctx->pc = 0x12F198u;
    SET_GPR_U32(ctx, 31, 0x12F1A0u);
    ctx->pc = 0x1379A0u;
    if (runtime->hasFunction(0x1379A0u)) {
        auto targetFn = runtime->lookupFunction(0x1379A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F1A0u; }
        if (ctx->pc != 0x12F1A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x1379a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F1A0u; }
        if (ctx->pc != 0x12F1A0u) { return; }
    }
    ctx->pc = 0x12F1A0u;
    // 0x12f1a0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x12f1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x12f1a4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x12f1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12f1a8: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x12f1a8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)61440u)));
    // 0x12f1ac: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x12f1acu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x12f1b0: 0xf  sync
    ctx->pc = 0x12f1b0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x12f1b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12F1B4u;
    {
        const bool branch_taken_0x12f1b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F1B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F1B4u;
            // 0x12f1b8: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f1b4) {
            ctx->pc = 0x12F1C8u;
            goto label_12f1c8;
        }
    }
    ctx->pc = 0x12F1BCu;
    // 0x12f1bc: 0xc04de7a  jal         func_1379E8
    ctx->pc = 0x12F1BCu;
    SET_GPR_U32(ctx, 31, 0x12F1C4u);
    ctx->pc = 0x1379E8u;
    if (runtime->hasFunction(0x1379E8u)) {
        auto targetFn = runtime->lookupFunction(0x1379E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F1C4u; }
        if (ctx->pc != 0x12F1C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EIntr_0x1379e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F1C4u; }
        if (ctx->pc != 0x12F1C4u) { return; }
    }
    ctx->pc = 0x12F1C4u;
    // 0x12f1c4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x12f1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_12f1c8:
    // 0x12f1c8: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x12f1c8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)61440u)));
    // 0x12f1cc: 0x0  nop
    ctx->pc = 0x12f1ccu;
    // NOP
label_12f1d0:
    // 0x12f1d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12f1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x12f1d4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x12f1d4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4u)));
    // 0x12f1d8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12F1D8u;
    {
        const bool branch_taken_0x12f1d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f1d8) {
            ctx->pc = 0x12F1ECu;
            goto label_12f1ec;
        }
    }
    ctx->pc = 0x12F1E0u;
    // 0x12f1e0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12f1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f1e4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12F1E4u;
    {
        const bool branch_taken_0x12f1e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f1e4) {
            ctx->pc = 0x12F1D0u;
            goto label_12f1d0;
        }
    }
    ctx->pc = 0x12F1ECu;
label_12f1ec:
    // 0x12f1ec: 0xc04de68  jal         func_1379A0
    ctx->pc = 0x12F1ECu;
    SET_GPR_U32(ctx, 31, 0x12F1F4u);
    ctx->pc = 0x1379A0u;
    if (runtime->hasFunction(0x1379A0u)) {
        auto targetFn = runtime->lookupFunction(0x1379A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F1F4u; }
        if (ctx->pc != 0x12F1F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x1379a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F1F4u; }
        if (ctx->pc != 0x12F1F4u) { return; }
    }
    ctx->pc = 0x12F1F4u;
    // 0x12f1f4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x12f1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12f1f8: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x12f1f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x12f1fc: 0xac23f000  sw          $v1, -0x1000($at)
    ctx->pc = 0x12f1fcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294963200), GPR_U32(ctx, 3)); // MMIO: 0x1000f000
    // 0x12f200: 0xf  sync
    ctx->pc = 0x12f200u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x12f204: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12F204u;
    {
        const bool branch_taken_0x12f204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f204) {
            ctx->pc = 0x12F214u;
            goto label_12f214;
        }
    }
    ctx->pc = 0x12F20Cu;
    // 0x12f20c: 0xc04de7a  jal         func_1379E8
    ctx->pc = 0x12F20Cu;
    SET_GPR_U32(ctx, 31, 0x12F214u);
    ctx->pc = 0x1379E8u;
    if (runtime->hasFunction(0x1379E8u)) {
        auto targetFn = runtime->lookupFunction(0x1379E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F214u; }
        if (ctx->pc != 0x12F214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EIntr_0x1379e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F214u; }
        if (ctx->pc != 0x12F214u) { return; }
    }
    ctx->pc = 0x12F214u;
label_12f214:
    // 0x12f214: 0xdfa20008  ld          $v0, 0x8($sp)
    ctx->pc = 0x12f214u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12f218: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12f218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12f21c: 0x3e00008  jr          $ra
    ctx->pc = 0x12F21Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F21Cu;
            // 0x12f220: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12F1C8u: goto label_12f1c8;
            case 0x12F1D0u: goto label_12f1d0;
            case 0x12F1ECu: goto label_12f1ec;
            case 0x12F214u: goto label_12f214;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12F224u;
}
