#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _alalcAlloc
// Address: 0x12b958 - 0x12b9c4
void _alalcAlloc_0x12b958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_alalcAlloc_0x12b958");
#endif

    ctx->pc = 0x12b958u;

    // 0x12b958: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12b958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12b95c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x12b95cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b960: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12b960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12b964: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12B964u;
    {
        const bool branch_taken_0x12b964 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b964) {
            ctx->pc = 0x12B968u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12B964u;
            // 0x12b968: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x12B96Cu;
            goto label_12b96c;
        }
    }
    ctx->pc = 0x12B96Cu;
label_12b96c:
    // 0x12b96c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x12b96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x12b970: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x12b970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x12b974: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x12b974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x12b978: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x12b978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12b97c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12b97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12b980: 0x47001b  divu        $zero, $v0, $a3
    ctx->pc = 0x12b980u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x12b984: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x12b984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12b988: 0x1012  mflo        $v0
    ctx->pc = 0x12b988u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x12b98c: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x12b98cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x12b990: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x12b990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x12b994: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x12b994u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x12b998: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x12B998u;
    {
        const bool branch_taken_0x12b998 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b998) {
            ctx->pc = 0x12B99Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12B998u;
            // 0x12b99c: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12B9A8u;
            goto label_12b9a8;
        }
    }
    ctx->pc = 0x12B9A0u;
    // 0x12b9a0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12B9A0u;
    {
        const bool branch_taken_0x12b9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B9A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B9A0u;
            // 0x12b9a4: 0xaca40008  sw          $a0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b9a0) {
            ctx->pc = 0x12B9B8u;
            goto label_12b9b8;
        }
    }
    ctx->pc = 0x12B9A8u;
label_12b9a8:
    // 0x12b9a8: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x12b9a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b9ac: 0xc04b01e  jal         func_12C078
    ctx->pc = 0x12B9ACu;
    SET_GPR_U32(ctx, 31, 0x12B9B4u);
    ctx->pc = 0x12B9B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B9ACu;
            // 0x12b9b0: 0x24a5f458  addiu       $a1, $a1, -0xBA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C078u;
    if (runtime->hasFunction(0x12C078u)) {
        auto targetFn = runtime->lookupFunction(0x12C078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B9B4u; }
        if (ctx->pc != 0x12B9B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x12c078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B9B4u; }
        if (ctx->pc != 0x12B9B4u) { return; }
    }
    ctx->pc = 0x12B9B4u;
    // 0x12b9b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12b9b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12b9b8:
    // 0x12b9b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12b9b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b9bc: 0x3e00008  jr          $ra
    ctx->pc = 0x12B9BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B9C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B9BCu;
            // 0x12b9c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12B96Cu: goto label_12b96c;
            case 0x12B9A8u: goto label_12b9a8;
            case 0x12B9B8u: goto label_12b9b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12B9C4u;
}
