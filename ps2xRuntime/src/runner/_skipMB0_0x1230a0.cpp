#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _skipMB0
// Address: 0x1230a0 - 0x12316c
void _skipMB0_0x1230a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1230a0u;

    // 0x1230a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1230a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1230a4: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x1230a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x1230a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1230a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1230ac: 0x24421df8  addiu       $v0, $v0, 0x1DF8
    ctx->pc = 0x1230acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7672));
    // 0x1230b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1230b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1230b4: 0x24080140  addiu       $t0, $zero, 0x140
    ctx->pc = 0x1230b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1230b8: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1230b8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1230bc: 0x3c0c0017  lui         $t4, 0x17
    ctx->pc = 0x1230bcu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)23 << 16));
    // 0x1230c0: 0x8c430280  lw          $v1, 0x280($v0)
    ctx->pc = 0x1230c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 640)));
    // 0x1230c4: 0x3c090017  lui         $t1, 0x17
    ctx->pc = 0x1230c4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)23 << 16));
    // 0x1230c8: 0x8d8a197c  lw          $t2, 0x197C($t4)
    ctx->pc = 0x1230c8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 6524)));
    // 0x1230cc: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1230ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1230d0: 0x686818  mult        $t5, $v1, $t0
    ctx->pc = 0x1230d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1230d4: 0xad2b1a3c  sw          $t3, 0x1A3C($t1)
    ctx->pc = 0x1230d4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 6716), GPR_U32(ctx, 11));
    // 0x1230d8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1230d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1230dc: 0x1a21821  addu        $v1, $t5, $v0
    ctx->pc = 0x1230dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x1230e0: 0x15470005  bne         $t2, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1230E0u;
    {
        const bool branch_taken_0x1230e0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 7));
        ctx->pc = 0x1230E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1230E0u;
            // 0x1230e4: 0xac6b013c  sw          $t3, 0x13C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 316), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1230e0) {
            ctx->pc = 0x1230F8u;
            goto label_1230f8;
        }
    }
    ctx->pc = 0x1230E8u;
    // 0x1230e8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1230e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1230ec: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1230ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1230f0: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1230f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1230f4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1230f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_1230f8:
    // 0x1230f8: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x1230f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x1230fc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1230fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x123100: 0x8c8219ac  lw          $v0, 0x19AC($a0)
    ctx->pc = 0x123100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6572)));
    // 0x123104: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x123104u;
    {
        const bool branch_taken_0x123104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x123104) {
            ctx->pc = 0x123108u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x123104u;
            // 0x123108: 0xacab0000  sw          $t3, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
            ctx->pc = 0x123114u;
            goto label_123114;
        }
    }
    ctx->pc = 0x12310Cu;
    // 0x12310c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12310Cu;
    {
        const bool branch_taken_0x12310c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12310Cu;
            // 0x123110: 0xaca70000  sw          $a3, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12310c) {
            ctx->pc = 0x123128u;
            goto label_123128;
        }
    }
    ctx->pc = 0x123114u;
label_123114:
    // 0x123114: 0x8c8219ac  lw          $v0, 0x19AC($a0)
    ctx->pc = 0x123114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6572)));
    // 0x123118: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x123118u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)2u)));
    // 0x12311c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x12311cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x123120: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x123120u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x123124: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x123124u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_123128:
    // 0x123128: 0x8d83197c  lw          $v1, 0x197C($t4)
    ctx->pc = 0x123128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 6524)));
    // 0x12312c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12312cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x123130: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x123130u;
    {
        const bool branch_taken_0x123130 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x123130) {
            ctx->pc = 0x123134u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x123130u;
            // 0x123134: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12314Cu;
            goto label_12314c;
        }
    }
    ctx->pc = 0x123138u;
    // 0x123138: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x123138u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x12313c: 0xc048006  jal         func_120018
    ctx->pc = 0x12313Cu;
    SET_GPR_U32(ctx, 31, 0x123144u);
    ctx->pc = 0x123140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12313Cu;
            // 0x123140: 0x24844f80  addiu       $a0, $a0, 0x4F80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120018u;
    if (runtime->hasFunction(0x120018u)) {
        auto targetFn = runtime->lookupFunction(0x120018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123144u; }
        if (ctx->pc != 0x123144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x120018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123144u; }
        if (ctx->pc != 0x123144u) { return; }
    }
    ctx->pc = 0x123144u;
    // 0x123144: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x123144u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123148: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x123148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_12314c:
    // 0x12314c: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x12314cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x123150: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x123150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123154: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x123154u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123158: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x123158u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x12315c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x12315cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x123160: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x123160u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123164: 0x3e00008  jr          $ra
    ctx->pc = 0x123164u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123164u;
            // 0x123168: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1230F8u: goto label_1230f8;
            case 0x123114u: goto label_123114;
            case 0x123128u: goto label_123128;
            case 0x12314Cu: goto label_12314c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12316Cu;
}
