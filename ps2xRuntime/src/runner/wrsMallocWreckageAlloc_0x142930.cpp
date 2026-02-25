#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsMallocWreckageAlloc
// Address: 0x142930 - 0x1429dc
void wrsMallocWreckageAlloc_0x142930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsMallocWreckageAlloc_0x142930");
#endif

    ctx->pc = 0x142930u;

    // 0x142930: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x142930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x142934: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x142934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x142938: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x142938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14293c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x14293cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142940: 0x8c277920  lw          $a3, 0x7920($at)
    ctx->pc = 0x142940u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31008)));
    // 0x142944: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x142944u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_142948:
    // 0x142948: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x142948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14294c: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x14294Cu;
    {
        const bool branch_taken_0x14294c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x142950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14294Cu;
            // 0x142950: 0x81880  sll         $v1, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14294c) {
            ctx->pc = 0x1429B0u;
            goto label_1429b0;
        }
    }
    ctx->pc = 0x142954u;
    // 0x142954: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x142954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x142958: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x142958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x14295c: 0x83140  sll         $a2, $t0, 5
    ctx->pc = 0x14295cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x142960: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x142960u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x142964: 0x8c237928  lw          $v1, 0x7928($at)
    ctx->pc = 0x142964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31016)));
    // 0x142968: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x142968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14296c: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x14296cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x142970: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x142970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x142974: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x142974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x142978: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x142978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x14297c: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x14297cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x142980: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x142980u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x142984: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x142984u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x142988: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x142988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x14298c: 0xc4830010  lwc1        $f3, 0x10($a0)
    ctx->pc = 0x14298cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x142990: 0xc4820014  lwc1        $f2, 0x14($a0)
    ctx->pc = 0x142990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x142994: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x142994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x142998: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x142998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14299c: 0xe4630010  swc1        $f3, 0x10($v1)
    ctx->pc = 0x14299cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x1429a0: 0xe4620014  swc1        $f2, 0x14($v1)
    ctx->pc = 0x1429a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x1429a4: 0xe4610018  swc1        $f1, 0x18($v1)
    ctx->pc = 0x1429a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x1429a8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1429A8u;
    {
        const bool branch_taken_0x1429a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1429ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1429A8u;
            // 0x1429ac: 0xe460001c  swc1        $f0, 0x1C($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1429a8) {
            ctx->pc = 0x1429D0u;
            goto label_1429d0;
        }
    }
    ctx->pc = 0x1429B0u;
label_1429b0:
    // 0x1429b0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1429b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1429b4: 0x29031000  slti        $v1, $t0, 0x1000
    ctx->pc = 0x1429b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4096) ? 1 : 0);
    // 0x1429b8: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1429B8u;
    {
        const bool branch_taken_0x1429b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1429BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1429B8u;
            // 0x1429bc: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1429b8) {
            ctx->pc = 0x142948u;
            goto label_142948;
        }
    }
    ctx->pc = 0x1429C0u;
    // 0x1429c0: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1429c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1429c4: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x1429C4u;
    SET_GPR_U32(ctx, 31, 0x1429CCu);
    ctx->pc = 0x1429C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1429C4u;
            // 0x1429c8: 0x24840ab0  addiu       $a0, $a0, 0xAB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1429CCu; }
        if (ctx->pc != 0x1429CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1429CCu; }
        if (ctx->pc != 0x1429CCu) { return; }
    }
    ctx->pc = 0x1429CCu;
    // 0x1429cc: 0x0  nop
    ctx->pc = 0x1429ccu;
    // NOP
label_1429d0:
    // 0x1429d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1429d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1429d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1429D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1429D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1429D4u;
            // 0x1429d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x142948u: goto label_142948;
            case 0x1429B0u: goto label_1429b0;
            case 0x1429D0u: goto label_1429d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1429DCu;
}
