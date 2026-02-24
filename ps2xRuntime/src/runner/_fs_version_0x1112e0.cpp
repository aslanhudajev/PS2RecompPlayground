#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _fs_version
// Address: 0x1112e0 - 0x11136c
void _fs_version_0x1112e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_fs_version_0x1112e0");
#endif

    ctx->pc = 0x1112e0u;

    // 0x1112e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1112e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1112e4: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x1112e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x1112e8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1112e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1112ec: 0x3c030018  lui         $v1, 0x18
    ctx->pc = 0x1112ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24 << 16));
    // 0x1112f0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1112f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1112f4: 0x2453f378  addiu       $s3, $v0, -0xC88
    ctx->pc = 0x1112f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964088));
    // 0x1112f8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1112f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1112fc: 0x247199e8  addiu       $s1, $v1, -0x6618
    ctx->pc = 0x1112fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941160));
    // 0x111300: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x111300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x111304: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x111304u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111308: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x111308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11130c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11130cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111310: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x111310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111314: 0xc04ac0e  jal         func_12B038
    ctx->pc = 0x111314u;
    SET_GPR_U32(ctx, 31, 0x11131Cu);
    ctx->pc = 0x111318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x111314u;
            // 0x111318: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B038u;
    if (runtime->hasFunction(0x12B038u)) {
        auto targetFn = runtime->lookupFunction(0x12B038u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11131Cu; }
        if (ctx->pc != 0x11131Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x12b038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11131Cu; }
        if (ctx->pc != 0x11131Cu) { return; }
    }
    ctx->pc = 0x11131Cu;
    // 0x11131c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11131Cu;
    {
        const bool branch_taken_0x11131c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11131Cu;
            // 0x111320: 0x3c100017  lui         $s0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11131c) {
            ctx->pc = 0x11134Cu;
            goto label_11134c;
        }
    }
    ctx->pc = 0x111324u;
    // 0x111324: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111328: 0x8e05fbc8  lw          $a1, -0x438($s0)
    ctx->pc = 0x111328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294966216)));
    // 0x11132c: 0xc04ac0e  jal         func_12B038
    ctx->pc = 0x11132Cu;
    SET_GPR_U32(ctx, 31, 0x111334u);
    ctx->pc = 0x111330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11132Cu;
            // 0x111330: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B038u;
    if (runtime->hasFunction(0x12B038u)) {
        auto targetFn = runtime->lookupFunction(0x12B038u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111334u; }
        if (ctx->pc != 0x111334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x12b038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111334u; }
        if (ctx->pc != 0x111334u) { return; }
    }
    ctx->pc = 0x111334u;
    // 0x111334: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x111334u;
    {
        const bool branch_taken_0x111334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111334u;
            // 0x111338: 0x8e05fbc8  lw          $a1, -0x438($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294966216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111334) {
            ctx->pc = 0x11134Cu;
            goto label_11134c;
        }
    }
    ctx->pc = 0x11133Cu;
    // 0x11133c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11133cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111340: 0xc04ac0e  jal         func_12B038
    ctx->pc = 0x111340u;
    SET_GPR_U32(ctx, 31, 0x111348u);
    ctx->pc = 0x111344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x111340u;
            // 0x111344: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B038u;
    if (runtime->hasFunction(0x12B038u)) {
        auto targetFn = runtime->lookupFunction(0x12B038u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111348u; }
        if (ctx->pc != 0x111348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x12b038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111348u; }
        if (ctx->pc != 0x111348u) { return; }
    }
    ctx->pc = 0x111348u;
    // 0x111348: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x111348u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_11134c:
    // 0x11134c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x11134cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111350: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x111350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x111354: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x111354u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x111358: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x111358u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11135c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11135cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111360: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x111360u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111364: 0x3e00008  jr          $ra
    ctx->pc = 0x111364u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111364u;
            // 0x111368: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11134Cu: goto label_11134c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11136Cu;
}
