#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _lf_version
// Address: 0x114470 - 0x1144fc
void _lf_version_0x114470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x114470u;

    // 0x114470: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x114470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x114474: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x114474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x114478: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x114478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x11447c: 0x3c030018  lui         $v1, 0x18
    ctx->pc = 0x11447cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24 << 16));
    // 0x114480: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x114480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x114484: 0x2453f378  addiu       $s3, $v0, -0xC88
    ctx->pc = 0x114484u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964088));
    // 0x114488: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x114488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11448c: 0x24719e68  addiu       $s1, $v1, -0x6198
    ctx->pc = 0x11448cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942312));
    // 0x114490: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x114490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x114494: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x114494u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114498: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x114498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11449c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11449cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1144a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1144a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1144a4: 0xc04ac0e  jal         func_12B038
    ctx->pc = 0x1144A4u;
    SET_GPR_U32(ctx, 31, 0x1144ACu);
    ctx->pc = 0x1144A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1144A4u;
            // 0x1144a8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B038u;
    if (runtime->hasFunction(0x12B038u)) {
        auto targetFn = runtime->lookupFunction(0x12B038u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1144ACu; }
        if (ctx->pc != 0x1144ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x12b038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1144ACu; }
        if (ctx->pc != 0x1144ACu) { return; }
    }
    ctx->pc = 0x1144ACu;
    // 0x1144ac: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1144ACu;
    {
        const bool branch_taken_0x1144ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1144B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1144ACu;
            // 0x1144b0: 0x3c100017  lui         $s0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1144ac) {
            ctx->pc = 0x1144DCu;
            goto label_1144dc;
        }
    }
    ctx->pc = 0x1144B4u;
    // 0x1144b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1144b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1144b8: 0x8e05fbd4  lw          $a1, -0x42C($s0)
    ctx->pc = 0x1144b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294966228)));
    // 0x1144bc: 0xc04ac0e  jal         func_12B038
    ctx->pc = 0x1144BCu;
    SET_GPR_U32(ctx, 31, 0x1144C4u);
    ctx->pc = 0x1144C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1144BCu;
            // 0x1144c0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B038u;
    if (runtime->hasFunction(0x12B038u)) {
        auto targetFn = runtime->lookupFunction(0x12B038u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1144C4u; }
        if (ctx->pc != 0x1144C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x12b038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1144C4u; }
        if (ctx->pc != 0x1144C4u) { return; }
    }
    ctx->pc = 0x1144C4u;
    // 0x1144c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1144C4u;
    {
        const bool branch_taken_0x1144c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1144C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1144C4u;
            // 0x1144c8: 0x8e05fbd4  lw          $a1, -0x42C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294966228)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1144c4) {
            ctx->pc = 0x1144DCu;
            goto label_1144dc;
        }
    }
    ctx->pc = 0x1144CCu;
    // 0x1144cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1144ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1144d0: 0xc04ac0e  jal         func_12B038
    ctx->pc = 0x1144D0u;
    SET_GPR_U32(ctx, 31, 0x1144D8u);
    ctx->pc = 0x1144D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1144D0u;
            // 0x1144d4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B038u;
    if (runtime->hasFunction(0x12B038u)) {
        auto targetFn = runtime->lookupFunction(0x12B038u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1144D8u; }
        if (ctx->pc != 0x1144D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x12b038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1144D8u; }
        if (ctx->pc != 0x1144D8u) { return; }
    }
    ctx->pc = 0x1144D8u;
    // 0x1144d8: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x1144d8u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1144dc:
    // 0x1144dc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1144dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1144e0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1144e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1144e4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1144e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1144e8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1144e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1144ec: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1144ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1144f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1144f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1144f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1144F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1144F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1144F4u;
            // 0x1144f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1144DCu: goto label_1144dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1144FCu;
}
