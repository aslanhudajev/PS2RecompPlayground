#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _reset_problem_patch
// Address: 0x11f7d8 - 0x11f82c
void _reset_problem_patch_0x11f7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_reset_problem_patch_0x11f7d8");
#endif

    ctx->pc = 0x11f7d8u;

    // 0x11f7d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11f7d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11f7dc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x11f7dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f7e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11f7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11f7e4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x11f7e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11f7e8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11f7e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f7ec: 0x8cc30030  lw          $v1, 0x30($a2)
    ctx->pc = 0x11f7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x11f7f0: 0x94c20028  lhu         $v0, 0x28($a2)
    ctx->pc = 0x11f7f0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x11f7f4: 0x31a80  sll         $v1, $v1, 10
    ctx->pc = 0x11f7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x11f7f8: 0x94c7002c  lhu         $a3, 0x2C($a2)
    ctx->pc = 0x11f7f8u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x11f7fc: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x11f7fcu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x11f800: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x11f800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x11f804: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x11f804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x11f808: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11F808u;
    {
        const bool branch_taken_0x11f808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f808) {
            ctx->pc = 0x11F80Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11F808u;
            // 0x11f80c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x11F810u;
            goto label_11f810;
        }
    }
    ctx->pc = 0x11F810u;
label_11f810:
    // 0x11f810: 0xafa8000c  sw          $t0, 0xC($sp)
    ctx->pc = 0x11f810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 8));
    // 0x11f814: 0x1812  mflo        $v1
    ctx->pc = 0x11f814u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x11f818: 0xc04902a  jal         func_1240A8
    ctx->pc = 0x11F818u;
    SET_GPR_U32(ctx, 31, 0x11F820u);
    ctx->pc = 0x11F81Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F818u;
            // 0x11f81c: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1240A8u;
    if (runtime->hasFunction(0x1240A8u)) {
        auto targetFn = runtime->lookupFunction(0x1240A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F820u; }
        if (ctx->pc != 0x11F820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceMcCoreSetCardSpec_0x1240a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F820u; }
        if (ctx->pc != 0x11F820u) { return; }
    }
    ctx->pc = 0x11F820u;
    // 0x11f820: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11f820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11f824: 0x3e00008  jr          $ra
    ctx->pc = 0x11F824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F824u;
            // 0x11f828: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11F810u: goto label_11f810;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11F82Cu;
}
