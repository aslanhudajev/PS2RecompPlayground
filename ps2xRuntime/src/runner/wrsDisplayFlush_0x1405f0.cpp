#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsDisplayFlush
// Address: 0x1405f0 - 0x140630
void wrsDisplayFlush_0x1405f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsDisplayFlush_0x1405f0");
#endif

    ctx->pc = 0x1405f0u;

    // 0x1405f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1405f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1405f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1405f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1405f8: 0xc042e7c  jal         func_10B9F0
    ctx->pc = 0x1405F8u;
    SET_GPR_U32(ctx, 31, 0x140600u);
    ctx->pc = 0x1405FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1405F8u;
            // 0x1405fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B9F0u;
    if (runtime->hasFunction(0x10B9F0u)) {
        auto targetFn = runtime->lookupFunction(0x10B9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140600u; }
        if (ctx->pc != 0x140600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncV_0x10b9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140600u; }
        if (ctx->pc != 0x140600u) { return; }
    }
    ctx->pc = 0x140600u;
    // 0x140600: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x140600u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x140604: 0xc0443ec  jal         func_110FB0
    ctx->pc = 0x140604u;
    SET_GPR_U32(ctx, 31, 0x14060Cu);
    ctx->pc = 0x140608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140604u;
            // 0x140608: 0x38440001  xori        $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110FB0u;
    if (runtime->hasFunction(0x110FB0u)) {
        auto targetFn = runtime->lookupFunction(0x110FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14060Cu; }
        if (ctx->pc != 0x14060Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiGsDisplaySwap_0x110fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14060Cu; }
        if (ctx->pc != 0x14060Cu) { return; }
    }
    ctx->pc = 0x14060Cu;
    // 0x14060c: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x14060cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x140610: 0x8c237670  lw          $v1, 0x7670($at)
    ctx->pc = 0x140610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30320)));
    // 0x140614: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x140614u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x140618: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x140618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x14061c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x14061cu;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x140620: 0xac237670  sw          $v1, 0x7670($at)
    ctx->pc = 0x140620u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30320), GPR_U32(ctx, 3));
    // 0x140624: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x140624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140628: 0x3e00008  jr          $ra
    ctx->pc = 0x140628u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14062Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140628u;
            // 0x14062c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x140630u;
}
