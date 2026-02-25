#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _lf_version
// Address: 0x136208 - 0x136294
void _lf_version_0x136208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_lf_version_0x136208");
#endif

    ctx->pc = 0x136208u;

    // 0x136208: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x136208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x13620c: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x13620cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x136210: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x136210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x136214: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x136214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x136218: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x136218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x13621c: 0x245303ec  addiu       $s3, $v0, 0x3EC
    ctx->pc = 0x13621cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1004));
    // 0x136220: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x136220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x136224: 0x247163a8  addiu       $s1, $v1, 0x63A8
    ctx->pc = 0x136224u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 25512));
    // 0x136228: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x136228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x13622c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x13622cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136230: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x136230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x136234: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x136234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136238: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x136238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13623c: 0xc04ecfc  jal         func_13B3F0
    ctx->pc = 0x13623Cu;
    SET_GPR_U32(ctx, 31, 0x136244u);
    ctx->pc = 0x136240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13623Cu;
            // 0x136240: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B3F0u;
    if (runtime->hasFunction(0x13B3F0u)) {
        auto targetFn = runtime->lookupFunction(0x13B3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136244u; }
        if (ctx->pc != 0x136244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x13b3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136244u; }
        if (ctx->pc != 0x136244u) { return; }
    }
    ctx->pc = 0x136244u;
    // 0x136244: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x136244u;
    {
        const bool branch_taken_0x136244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x136248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136244u;
            // 0x136248: 0x3c100021  lui         $s0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136244) {
            ctx->pc = 0x136274u;
            goto label_136274;
        }
    }
    ctx->pc = 0x13624Cu;
    // 0x13624c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13624cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136250: 0x8e0504c4  lw          $a1, 0x4C4($s0)
    ctx->pc = 0x136250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1220)));
    // 0x136254: 0xc04ecfc  jal         func_13B3F0
    ctx->pc = 0x136254u;
    SET_GPR_U32(ctx, 31, 0x13625Cu);
    ctx->pc = 0x136258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136254u;
            // 0x136258: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B3F0u;
    if (runtime->hasFunction(0x13B3F0u)) {
        auto targetFn = runtime->lookupFunction(0x13B3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13625Cu; }
        if (ctx->pc != 0x13625Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x13b3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13625Cu; }
        if (ctx->pc != 0x13625Cu) { return; }
    }
    ctx->pc = 0x13625Cu;
    // 0x13625c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13625Cu;
    {
        const bool branch_taken_0x13625c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x136260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13625Cu;
            // 0x136260: 0x8e0504c4  lw          $a1, 0x4C4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13625c) {
            ctx->pc = 0x136274u;
            goto label_136274;
        }
    }
    ctx->pc = 0x136264u;
    // 0x136264: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x136264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136268: 0xc04ecfc  jal         func_13B3F0
    ctx->pc = 0x136268u;
    SET_GPR_U32(ctx, 31, 0x136270u);
    ctx->pc = 0x13626Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136268u;
            // 0x13626c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B3F0u;
    if (runtime->hasFunction(0x13B3F0u)) {
        auto targetFn = runtime->lookupFunction(0x13B3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136270u; }
        if (ctx->pc != 0x136270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x13b3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136270u; }
        if (ctx->pc != 0x136270u) { return; }
    }
    ctx->pc = 0x136270u;
    // 0x136270: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x136270u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_136274:
    // 0x136274: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x136274u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136278: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x136278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13627c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x13627cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x136280: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x136280u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x136284: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x136284u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136288: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x136288u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13628c: 0x3e00008  jr          $ra
    ctx->pc = 0x13628Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13628Cu;
            // 0x136290: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x136274u: goto label_136274;
            default: break;
        }
        return;
    }
    ctx->pc = 0x136294u;
}
