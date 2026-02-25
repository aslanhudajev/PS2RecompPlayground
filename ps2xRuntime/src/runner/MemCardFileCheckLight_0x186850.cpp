#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MemCardFileCheckLight
// Address: 0x186850 - 0x186a7c
void MemCardFileCheckLight_0x186850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MemCardFileCheckLight_0x186850");
#endif

    ctx->pc = 0x186850u;

    // 0x186850: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x186850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x186854: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x186854u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x186858: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x186858u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x18685c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18685cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x186860: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x186860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x186864: 0xc04f3e6  jal         func_13CF98
    ctx->pc = 0x186864u;
    SET_GPR_U32(ctx, 31, 0x18686Cu);
    ctx->pc = 0x186868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186864u;
            // 0x186868: 0x24a521a0  addiu       $a1, $a1, 0x21A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CF98u;
    if (runtime->hasFunction(0x13CF98u)) {
        auto targetFn = runtime->lookupFunction(0x13CF98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18686Cu; }
        if (ctx->pc != 0x18686Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x13cf98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18686Cu; }
        if (ctx->pc != 0x18686Cu) { return; }
    }
    ctx->pc = 0x18686Cu;
    // 0x18686c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18686Cu;
    {
        const bool branch_taken_0x18686c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x186870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18686Cu;
            // 0x186870: 0x3c01003b  lui         $at, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18686c) {
            ctx->pc = 0x186890u;
            goto label_186890;
        }
    }
    ctx->pc = 0x186874u;
    // 0x186874: 0x240202e0  addiu       $v0, $zero, 0x2E0
    ctx->pc = 0x186874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 736));
    // 0x186878: 0x8c23bb80  lw          $v1, -0x4480($at)
    ctx->pc = 0x186878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949760)));
    // 0x18687c: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x18687Cu;
    {
        const bool branch_taken_0x18687c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x186880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18687Cu;
            // 0x186880: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18687c) {
            ctx->pc = 0x186908u;
            goto label_186908;
        }
    }
    ctx->pc = 0x186884u;
    // 0x186884: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x186884u;
    {
        const bool branch_taken_0x186884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186884) {
            ctx->pc = 0x186A70u;
            goto label_186a70;
        }
    }
    ctx->pc = 0x18688Cu;
    // 0x18688c: 0x0  nop
    ctx->pc = 0x18688cu;
    // NOP
label_186890:
    // 0x186890: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x186890u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x186894: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x186894u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x186898: 0x2484bbc0  addiu       $a0, $a0, -0x4440
    ctx->pc = 0x186898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949824));
    // 0x18689c: 0xc04f3e6  jal         func_13CF98
    ctx->pc = 0x18689Cu;
    SET_GPR_U32(ctx, 31, 0x1868A4u);
    ctx->pc = 0x1868A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18689Cu;
            // 0x1868a0: 0x24a521a0  addiu       $a1, $a1, 0x21A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CF98u;
    if (runtime->hasFunction(0x13CF98u)) {
        auto targetFn = runtime->lookupFunction(0x13CF98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1868A4u; }
        if (ctx->pc != 0x1868A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x13cf98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1868A4u; }
        if (ctx->pc != 0x1868A4u) { return; }
    }
    ctx->pc = 0x1868A4u;
    // 0x1868a4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1868A4u;
    {
        const bool branch_taken_0x1868a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1868A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1868A4u;
            // 0x1868a8: 0x3c01003b  lui         $at, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1868a4) {
            ctx->pc = 0x1868C8u;
            goto label_1868c8;
        }
    }
    ctx->pc = 0x1868ACu;
    // 0x1868ac: 0x240202e0  addiu       $v0, $zero, 0x2E0
    ctx->pc = 0x1868acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 736));
    // 0x1868b0: 0x8c23bbb8  lw          $v1, -0x4448($at)
    ctx->pc = 0x1868b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949816)));
    // 0x1868b4: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1868B4u;
    {
        const bool branch_taken_0x1868b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1868B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1868B4u;
            // 0x1868b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1868b4) {
            ctx->pc = 0x186908u;
            goto label_186908;
        }
    }
    ctx->pc = 0x1868BCu;
    // 0x1868bc: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x1868BCu;
    {
        const bool branch_taken_0x1868bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1868bc) {
            ctx->pc = 0x186A70u;
            goto label_186a70;
        }
    }
    ctx->pc = 0x1868C4u;
    // 0x1868c4: 0x0  nop
    ctx->pc = 0x1868c4u;
    // NOP
label_1868c8:
    // 0x1868c8: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x1868c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x1868cc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1868ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1868d0: 0x2484bbf8  addiu       $a0, $a0, -0x4408
    ctx->pc = 0x1868d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949880));
    // 0x1868d4: 0xc04f3e6  jal         func_13CF98
    ctx->pc = 0x1868D4u;
    SET_GPR_U32(ctx, 31, 0x1868DCu);
    ctx->pc = 0x1868D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1868D4u;
            // 0x1868d8: 0x24a521a0  addiu       $a1, $a1, 0x21A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CF98u;
    if (runtime->hasFunction(0x13CF98u)) {
        auto targetFn = runtime->lookupFunction(0x13CF98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1868DCu; }
        if (ctx->pc != 0x1868DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x13cf98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1868DCu; }
        if (ctx->pc != 0x1868DCu) { return; }
    }
    ctx->pc = 0x1868DCu;
    // 0x1868dc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1868DCu;
    {
        const bool branch_taken_0x1868dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1868E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1868DCu;
            // 0x1868e0: 0x3c01003b  lui         $at, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1868dc) {
            ctx->pc = 0x186900u;
            goto label_186900;
        }
    }
    ctx->pc = 0x1868E4u;
    // 0x1868e4: 0x240202e0  addiu       $v0, $zero, 0x2E0
    ctx->pc = 0x1868e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 736));
    // 0x1868e8: 0x8c23bbf0  lw          $v1, -0x4410($at)
    ctx->pc = 0x1868e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949872)));
    // 0x1868ec: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1868ECu;
    {
        const bool branch_taken_0x1868ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1868F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1868ECu;
            // 0x1868f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1868ec) {
            ctx->pc = 0x186908u;
            goto label_186908;
        }
    }
    ctx->pc = 0x1868F4u;
    // 0x1868f4: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x1868F4u;
    {
        const bool branch_taken_0x1868f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1868f4) {
            ctx->pc = 0x186A70u;
            goto label_186a70;
        }
    }
    ctx->pc = 0x1868FCu;
    // 0x1868fc: 0x0  nop
    ctx->pc = 0x1868fcu;
    // NOP
label_186900:
    // 0x186900: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x186900u;
    {
        const bool branch_taken_0x186900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186900u;
            // 0x186904: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186900) {
            ctx->pc = 0x186A70u;
            goto label_186a70;
        }
    }
    ctx->pc = 0x186908u;
label_186908:
    // 0x186908: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x186908u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x18690c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x18690cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x186910: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x186910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x186914: 0xc04f3e6  jal         func_13CF98
    ctx->pc = 0x186914u;
    SET_GPR_U32(ctx, 31, 0x18691Cu);
    ctx->pc = 0x186918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186914u;
            // 0x186918: 0x24a52270  addiu       $a1, $a1, 0x2270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CF98u;
    if (runtime->hasFunction(0x13CF98u)) {
        auto targetFn = runtime->lookupFunction(0x13CF98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18691Cu; }
        if (ctx->pc != 0x18691Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x13cf98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18691Cu; }
        if (ctx->pc != 0x18691Cu) { return; }
    }
    ctx->pc = 0x18691Cu;
    // 0x18691c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18691Cu;
    {
        const bool branch_taken_0x18691c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x186920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18691Cu;
            // 0x186920: 0x3c01003b  lui         $at, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18691c) {
            ctx->pc = 0x186940u;
            goto label_186940;
        }
    }
    ctx->pc = 0x186924u;
    // 0x186924: 0x240203c4  addiu       $v0, $zero, 0x3C4
    ctx->pc = 0x186924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
    // 0x186928: 0x8c23bb80  lw          $v1, -0x4480($at)
    ctx->pc = 0x186928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949760)));
    // 0x18692c: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x18692Cu;
    {
        const bool branch_taken_0x18692c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x186930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18692Cu;
            // 0x186930: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18692c) {
            ctx->pc = 0x1869B8u;
            goto label_1869b8;
        }
    }
    ctx->pc = 0x186934u;
    // 0x186934: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x186934u;
    {
        const bool branch_taken_0x186934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186934) {
            ctx->pc = 0x186A70u;
            goto label_186a70;
        }
    }
    ctx->pc = 0x18693Cu;
    // 0x18693c: 0x0  nop
    ctx->pc = 0x18693cu;
    // NOP
label_186940:
    // 0x186940: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x186940u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x186944: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x186944u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x186948: 0x2484bbc0  addiu       $a0, $a0, -0x4440
    ctx->pc = 0x186948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949824));
    // 0x18694c: 0xc04f3e6  jal         func_13CF98
    ctx->pc = 0x18694Cu;
    SET_GPR_U32(ctx, 31, 0x186954u);
    ctx->pc = 0x186950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18694Cu;
            // 0x186950: 0x24a52270  addiu       $a1, $a1, 0x2270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CF98u;
    if (runtime->hasFunction(0x13CF98u)) {
        auto targetFn = runtime->lookupFunction(0x13CF98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186954u; }
        if (ctx->pc != 0x186954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x13cf98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186954u; }
        if (ctx->pc != 0x186954u) { return; }
    }
    ctx->pc = 0x186954u;
    // 0x186954: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x186954u;
    {
        const bool branch_taken_0x186954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x186958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186954u;
            // 0x186958: 0x3c01003b  lui         $at, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186954) {
            ctx->pc = 0x186978u;
            goto label_186978;
        }
    }
    ctx->pc = 0x18695Cu;
    // 0x18695c: 0x240203c4  addiu       $v0, $zero, 0x3C4
    ctx->pc = 0x18695cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
    // 0x186960: 0x8c23bbb8  lw          $v1, -0x4448($at)
    ctx->pc = 0x186960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949816)));
    // 0x186964: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x186964u;
    {
        const bool branch_taken_0x186964 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x186968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186964u;
            // 0x186968: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186964) {
            ctx->pc = 0x1869B8u;
            goto label_1869b8;
        }
    }
    ctx->pc = 0x18696Cu;
    // 0x18696c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x18696Cu;
    {
        const bool branch_taken_0x18696c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18696c) {
            ctx->pc = 0x186A70u;
            goto label_186a70;
        }
    }
    ctx->pc = 0x186974u;
    // 0x186974: 0x0  nop
    ctx->pc = 0x186974u;
    // NOP
label_186978:
    // 0x186978: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x186978u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x18697c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x18697cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x186980: 0x2484bbf8  addiu       $a0, $a0, -0x4408
    ctx->pc = 0x186980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949880));
    // 0x186984: 0xc04f3e6  jal         func_13CF98
    ctx->pc = 0x186984u;
    SET_GPR_U32(ctx, 31, 0x18698Cu);
    ctx->pc = 0x186988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186984u;
            // 0x186988: 0x24a52270  addiu       $a1, $a1, 0x2270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CF98u;
    if (runtime->hasFunction(0x13CF98u)) {
        auto targetFn = runtime->lookupFunction(0x13CF98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18698Cu; }
        if (ctx->pc != 0x18698Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x13cf98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18698Cu; }
        if (ctx->pc != 0x18698Cu) { return; }
    }
    ctx->pc = 0x18698Cu;
    // 0x18698c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18698Cu;
    {
        const bool branch_taken_0x18698c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x186990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18698Cu;
            // 0x186990: 0x3c01003b  lui         $at, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18698c) {
            ctx->pc = 0x1869B0u;
            goto label_1869b0;
        }
    }
    ctx->pc = 0x186994u;
    // 0x186994: 0x240203c4  addiu       $v0, $zero, 0x3C4
    ctx->pc = 0x186994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
    // 0x186998: 0x8c23bbf0  lw          $v1, -0x4410($at)
    ctx->pc = 0x186998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949872)));
    // 0x18699c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18699Cu;
    {
        const bool branch_taken_0x18699c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1869A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18699Cu;
            // 0x1869a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18699c) {
            ctx->pc = 0x1869B8u;
            goto label_1869b8;
        }
    }
    ctx->pc = 0x1869A4u;
    // 0x1869a4: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1869A4u;
    {
        const bool branch_taken_0x1869a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1869a4) {
            ctx->pc = 0x186A70u;
            goto label_186a70;
        }
    }
    ctx->pc = 0x1869ACu;
    // 0x1869ac: 0x0  nop
    ctx->pc = 0x1869acu;
    // NOP
label_1869b0:
    // 0x1869b0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1869B0u;
    {
        const bool branch_taken_0x1869b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1869B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1869B0u;
            // 0x1869b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1869b0) {
            ctx->pc = 0x186A70u;
            goto label_186a70;
        }
    }
    ctx->pc = 0x1869B8u;
label_1869b8:
    // 0x1869b8: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x1869b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x1869bc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1869bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1869c0: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1869c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1869c4: 0xc04f3e6  jal         func_13CF98
    ctx->pc = 0x1869C4u;
    SET_GPR_U32(ctx, 31, 0x1869CCu);
    ctx->pc = 0x1869C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1869C4u;
            // 0x1869c8: 0x24a52290  addiu       $a1, $a1, 0x2290 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CF98u;
    if (runtime->hasFunction(0x13CF98u)) {
        auto targetFn = runtime->lookupFunction(0x13CF98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1869CCu; }
        if (ctx->pc != 0x1869CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x13cf98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1869CCu; }
        if (ctx->pc != 0x1869CCu) { return; }
    }
    ctx->pc = 0x1869CCu;
    // 0x1869cc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1869CCu;
    {
        const bool branch_taken_0x1869cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1869D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1869CCu;
            // 0x1869d0: 0x3c01003b  lui         $at, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1869cc) {
            ctx->pc = 0x1869F0u;
            goto label_1869f0;
        }
    }
    ctx->pc = 0x1869D4u;
    // 0x1869d4: 0x3402880e  ori         $v0, $zero, 0x880E
    ctx->pc = 0x1869d4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)34830u)));
    // 0x1869d8: 0x8c23bb80  lw          $v1, -0x4480($at)
    ctx->pc = 0x1869d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949760)));
    // 0x1869dc: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1869DCu;
    {
        const bool branch_taken_0x1869dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1869E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1869DCu;
            // 0x1869e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1869dc) {
            ctx->pc = 0x186A68u;
            goto label_186a68;
        }
    }
    ctx->pc = 0x1869E4u;
    // 0x1869e4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1869E4u;
    {
        const bool branch_taken_0x1869e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1869e4) {
            ctx->pc = 0x186A70u;
            goto label_186a70;
        }
    }
    ctx->pc = 0x1869ECu;
    // 0x1869ec: 0x0  nop
    ctx->pc = 0x1869ecu;
    // NOP
label_1869f0:
    // 0x1869f0: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x1869f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x1869f4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1869f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1869f8: 0x2484bbc0  addiu       $a0, $a0, -0x4440
    ctx->pc = 0x1869f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949824));
    // 0x1869fc: 0xc04f3e6  jal         func_13CF98
    ctx->pc = 0x1869FCu;
    SET_GPR_U32(ctx, 31, 0x186A04u);
    ctx->pc = 0x186A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1869FCu;
            // 0x186a00: 0x24a52290  addiu       $a1, $a1, 0x2290 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CF98u;
    if (runtime->hasFunction(0x13CF98u)) {
        auto targetFn = runtime->lookupFunction(0x13CF98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186A04u; }
        if (ctx->pc != 0x186A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x13cf98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186A04u; }
        if (ctx->pc != 0x186A04u) { return; }
    }
    ctx->pc = 0x186A04u;
    // 0x186a04: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x186A04u;
    {
        const bool branch_taken_0x186a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x186A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186A04u;
            // 0x186a08: 0x3c01003b  lui         $at, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186a04) {
            ctx->pc = 0x186A28u;
            goto label_186a28;
        }
    }
    ctx->pc = 0x186A0Cu;
    // 0x186a0c: 0x3402880e  ori         $v0, $zero, 0x880E
    ctx->pc = 0x186a0cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)34830u)));
    // 0x186a10: 0x8c23bbb8  lw          $v1, -0x4448($at)
    ctx->pc = 0x186a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949816)));
    // 0x186a14: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x186A14u;
    {
        const bool branch_taken_0x186a14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x186A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186A14u;
            // 0x186a18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186a14) {
            ctx->pc = 0x186A68u;
            goto label_186a68;
        }
    }
    ctx->pc = 0x186A1Cu;
    // 0x186a1c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x186A1Cu;
    {
        const bool branch_taken_0x186a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186a1c) {
            ctx->pc = 0x186A70u;
            goto label_186a70;
        }
    }
    ctx->pc = 0x186A24u;
    // 0x186a24: 0x0  nop
    ctx->pc = 0x186a24u;
    // NOP
label_186a28:
    // 0x186a28: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x186a28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x186a2c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x186a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x186a30: 0x2484bbf8  addiu       $a0, $a0, -0x4408
    ctx->pc = 0x186a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949880));
    // 0x186a34: 0xc04f3e6  jal         func_13CF98
    ctx->pc = 0x186A34u;
    SET_GPR_U32(ctx, 31, 0x186A3Cu);
    ctx->pc = 0x186A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186A34u;
            // 0x186a38: 0x24a52290  addiu       $a1, $a1, 0x2290 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CF98u;
    if (runtime->hasFunction(0x13CF98u)) {
        auto targetFn = runtime->lookupFunction(0x13CF98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186A3Cu; }
        if (ctx->pc != 0x186A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x13cf98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186A3Cu; }
        if (ctx->pc != 0x186A3Cu) { return; }
    }
    ctx->pc = 0x186A3Cu;
    // 0x186a3c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x186A3Cu;
    {
        const bool branch_taken_0x186a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x186A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186A3Cu;
            // 0x186a40: 0x3c01003b  lui         $at, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186a3c) {
            ctx->pc = 0x186A60u;
            goto label_186a60;
        }
    }
    ctx->pc = 0x186A44u;
    // 0x186a44: 0x3402880e  ori         $v0, $zero, 0x880E
    ctx->pc = 0x186a44u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)34830u)));
    // 0x186a48: 0x8c23bbf0  lw          $v1, -0x4410($at)
    ctx->pc = 0x186a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949872)));
    // 0x186a4c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x186A4Cu;
    {
        const bool branch_taken_0x186a4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x186A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186A4Cu;
            // 0x186a50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186a4c) {
            ctx->pc = 0x186A68u;
            goto label_186a68;
        }
    }
    ctx->pc = 0x186A54u;
    // 0x186a54: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x186A54u;
    {
        const bool branch_taken_0x186a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186a54) {
            ctx->pc = 0x186A70u;
            goto label_186a70;
        }
    }
    ctx->pc = 0x186A5Cu;
    // 0x186a5c: 0x0  nop
    ctx->pc = 0x186a5cu;
    // NOP
label_186a60:
    // 0x186a60: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x186A60u;
    {
        const bool branch_taken_0x186a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186A60u;
            // 0x186a64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186a60) {
            ctx->pc = 0x186A70u;
            goto label_186a70;
        }
    }
    ctx->pc = 0x186A68u;
label_186a68:
    // 0x186a68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x186a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x186a6c: 0x0  nop
    ctx->pc = 0x186a6cu;
    // NOP
label_186a70:
    // 0x186a70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x186a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186a74: 0x3e00008  jr          $ra
    ctx->pc = 0x186A74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186A74u;
            // 0x186a78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x186890u: goto label_186890;
            case 0x1868C8u: goto label_1868c8;
            case 0x186900u: goto label_186900;
            case 0x186908u: goto label_186908;
            case 0x186940u: goto label_186940;
            case 0x186978u: goto label_186978;
            case 0x1869B0u: goto label_1869b0;
            case 0x1869B8u: goto label_1869b8;
            case 0x1869F0u: goto label_1869f0;
            case 0x186A28u: goto label_186a28;
            case 0x186A60u: goto label_186a60;
            case 0x186A68u: goto label_186a68;
            case 0x186A70u: goto label_186a70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x186A7Cu;
}
