#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: movie
// Address: 0x1886f0 - 0x188764
void movie_0x1886f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("movie_0x1886f0");
#endif

    ctx->pc = 0x1886f0u;

    // 0x1886f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1886f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1886f4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1886f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1886f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1886f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1886fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1886fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x188700: 0x8c25caf0  lw          $a1, -0x3510($at)
    ctx->pc = 0x188700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953712)));
    // 0x188704: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x188704u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188708: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x188708u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x18870c: 0x24842580  addiu       $a0, $a0, 0x2580
    ctx->pc = 0x18870cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9600));
    // 0x188710: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x188710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x188714: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x188714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x188718: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x188718u;
    SET_GPR_U32(ctx, 31, 0x188720u);
    ctx->pc = 0x18871Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188718u;
            // 0x18871c: 0xac22caf0  sw          $v0, -0x3510($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294953712), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188720u; }
        if (ctx->pc != 0x188720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188720u; }
        if (ctx->pc != 0x188720u) { return; }
    }
    ctx->pc = 0x188720u;
    // 0x188720: 0xc06207c  jal         func_1881F0
    ctx->pc = 0x188720u;
    SET_GPR_U32(ctx, 31, 0x188728u);
    ctx->pc = 0x188724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188720u;
            // 0x188724: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1881F0u;
    if (runtime->hasFunction(0x1881F0u)) {
        auto targetFn = runtime->lookupFunction(0x1881F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188728u; }
        if (ctx->pc != 0x188728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        initAll_0x1881f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188728u; }
        if (ctx->pc != 0x188728u) { return; }
    }
    ctx->pc = 0x188728u;
    // 0x188728: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x188728u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x18872c: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x18872cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x188730: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x188730u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x188734: 0x2484fe00  addiu       $a0, $a0, -0x200
    ctx->pc = 0x188734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966784));
    // 0x188738: 0x24a5ff40  addiu       $a1, $a1, -0xC0
    ctx->pc = 0x188738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967104));
    // 0x18873c: 0xc06213c  jal         func_1884F0
    ctx->pc = 0x18873Cu;
    SET_GPR_U32(ctx, 31, 0x188744u);
    ctx->pc = 0x188740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18873Cu;
            // 0x188740: 0x24c6fec0  addiu       $a2, $a2, -0x140 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1884F0u;
    if (runtime->hasFunction(0x1884F0u)) {
        auto targetFn = runtime->lookupFunction(0x1884F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188744u; }
        if (ctx->pc != 0x188744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        readMpeg_0x1884f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188744u; }
        if (ctx->pc != 0x188744u) { return; }
    }
    ctx->pc = 0x188744u;
    // 0x188744: 0xc062054  jal         func_188150
    ctx->pc = 0x188744u;
    SET_GPR_U32(ctx, 31, 0x18874Cu);
    ctx->pc = 0x188150u;
    if (runtime->hasFunction(0x188150u)) {
        auto targetFn = runtime->lookupFunction(0x188150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18874Cu; }
        if (ctx->pc != 0x18874Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        termAll_0x188150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18874Cu; }
        if (ctx->pc != 0x18874Cu) { return; }
    }
    ctx->pc = 0x18874Cu;
    // 0x18874c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x18874cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x188750: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x188750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188754: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x188754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188758: 0x8c22fd70  lw          $v0, -0x290($at)
    ctx->pc = 0x188758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966640)));
    // 0x18875c: 0x3e00008  jr          $ra
    ctx->pc = 0x18875Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18875Cu;
            // 0x188760: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x188764u;
}
