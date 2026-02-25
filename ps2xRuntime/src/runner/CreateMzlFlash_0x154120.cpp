#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateMzlFlash
// Address: 0x154120 - 0x1541a4
void CreateMzlFlash_0x154120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateMzlFlash_0x154120");
#endif

    ctx->pc = 0x154120u;

    // 0x154120: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x154120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x154124: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x154124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x154128: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x154128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15412c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15412cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x154130: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x154130u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154134: 0xc05506c  jal         func_1541B0
    ctx->pc = 0x154134u;
    SET_GPR_U32(ctx, 31, 0x15413Cu);
    ctx->pc = 0x154138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154134u;
            // 0x154138: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1541B0u;
    if (runtime->hasFunction(0x1541B0u)) {
        auto targetFn = runtime->lookupFunction(0x1541B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15413Cu; }
        if (ctx->pc != 0x15413Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotAlloc_0x1541b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15413Cu; }
        if (ctx->pc != 0x15413Cu) { return; }
    }
    ctx->pc = 0x15413Cu;
    // 0x15413c: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x15413cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x154140: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x154140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x154144: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x154144u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x154148: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x154148u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x15414c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x15414cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x154150: 0x8e240098  lw          $a0, 0x98($s1)
    ctx->pc = 0x154150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x154154: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x154154u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x154158: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x154158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x15415c: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x15415cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x154160: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x154160u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x154164: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x154164u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x154168: 0xac450030  sw          $a1, 0x30($v0)
    ctx->pc = 0x154168u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 5));
    // 0x15416c: 0xac450038  sw          $a1, 0x38($v0)
    ctx->pc = 0x15416cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 5));
    // 0x154170: 0x8e2400a4  lw          $a0, 0xA4($s1)
    ctx->pc = 0x154170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x154174: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x154174u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x154178: 0x0  nop
    ctx->pc = 0x154178u;
    // NOP
    // 0x15417c: 0x0  nop
    ctx->pc = 0x15417cu;
    // NOP
    // 0x154180: 0x1810  mfhi        $v1
    ctx->pc = 0x154180u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x154184: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x154184u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x154188: 0xac450034  sw          $a1, 0x34($v0)
    ctx->pc = 0x154188u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 5));
    // 0x15418c: 0xac50003c  sw          $s0, 0x3C($v0)
    ctx->pc = 0x15418cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 16));
    // 0x154190: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x154190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x154194: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x154194u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154198: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x154198u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15419c: 0x3e00008  jr          $ra
    ctx->pc = 0x15419Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1541A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15419Cu;
            // 0x1541a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1541A4u;
}
