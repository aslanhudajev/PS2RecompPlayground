#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: voBufGetData
// Address: 0x11a9b8 - 0x11a9fc
void voBufGetData_0x11a9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("voBufGetData_0x11a9b8");
#endif

    ctx->pc = 0x11a9b8u;

    // 0x11a9b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11a9b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11a9bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11a9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11a9c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11a9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11a9c4: 0xc046a4c  jal         func_11A930
    ctx->pc = 0x11A9C4u;
    SET_GPR_U32(ctx, 31, 0x11A9CCu);
    ctx->pc = 0x11A9C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A9C4u;
            // 0x11a9c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11A930u;
    if (runtime->hasFunction(0x11A930u)) {
        auto targetFn = runtime->lookupFunction(0x11A930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A9CCu; }
        if (ctx->pc != 0x11A9CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        voBufIsFull_0x11a930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A9CCu; }
        if (ctx->pc != 0x11A9CCu) { return; }
    }
    ctx->pc = 0x11A9CCu;
    // 0x11a9cc: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x11A9CCu;
    {
        const bool branch_taken_0x11a9cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11a9cc) {
            ctx->pc = 0x11A9D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11A9CCu;
            // 0x11a9d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11A9ECu;
            goto label_11a9ec;
        }
    }
    ctx->pc = 0x11A9D4u;
    // 0x11a9d4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x11a9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x11a9d8: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x11a9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x11a9dc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x11a9dcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)32768u)));
    // 0x11a9e0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x11a9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11a9e4: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x11a9e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x11a9e8: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x11a9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_11a9ec:
    // 0x11a9ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11a9ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a9f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11a9f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a9f4: 0x3e00008  jr          $ra
    ctx->pc = 0x11A9F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A9F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A9F4u;
            // 0x11a9f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11A9ECu: goto label_11a9ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11A9FCu;
}
