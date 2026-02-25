#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsInitHiMem
// Address: 0x141290 - 0x1412e0
void wrsInitHiMem_0x141290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsInitHiMem_0x141290");
#endif

    ctx->pc = 0x141290u;

    // 0x141290: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x141290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x141294: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x141294u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x141298: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x141298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14129c: 0x3c050050  lui         $a1, 0x50
    ctx->pc = 0x14129cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)80 << 16));
    // 0x1412a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1412a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1412a4: 0x24c602f0  addiu       $a2, $a2, 0x2F0
    ctx->pc = 0x1412a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 752));
    // 0x1412a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1412a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1412ac: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x1412acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1412b0: 0x3c040024  lui         $a0, 0x24
    ctx->pc = 0x1412b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
    // 0x1412b4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1412b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1412b8: 0xc050788  jal         func_141E20
    ctx->pc = 0x1412B8u;
    SET_GPR_U32(ctx, 31, 0x1412C0u);
    ctx->pc = 0x1412BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1412B8u;
            // 0x1412bc: 0x24847850  addiu       $a0, $a0, 0x7850 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141E20u;
    if (runtime->hasFunction(0x141E20u)) {
        auto targetFn = runtime->lookupFunction(0x141E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1412C0u; }
        if (ctx->pc != 0x1412C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsMalloc_0x141e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1412C0u; }
        if (ctx->pc != 0x1412C0u) { return; }
    }
    ctx->pc = 0x1412C0u;
    // 0x1412c0: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x1412c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x1412c4: 0x8c247850  lw          $a0, 0x7850($at)
    ctx->pc = 0x1412c4u;
    uint32_t hiMemBase = READ32(ADD32(GPR_U32(ctx, 1), 30800));
    constexpr uint32_t kHiMemSize = 0x500000u;  // 5MB from wrsInitGS
    if (hiMemBase == 0u && runtime != nullptr) {
        hiMemBase = runtime->guestMalloc(kHiMemSize, 16u);
        if (hiMemBase != 0u)
            WRITE32(ADD32(GPR_U32(ctx, 1), 30800), hiMemBase);
    }
    SET_GPR_S32(ctx, 4, (int32_t)hiMemBase);
    // 0x1412c8: 0xc043514  jal         func_10D450
    ctx->pc = 0x1412C8u;
    SET_GPR_U32(ctx, 31, 0x1412D0u);
    ctx->pc = 0x1412CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1412C8u;
            // 0x1412cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D450u;
    if (runtime->hasFunction(0x10D450u)) {
        auto targetFn = runtime->lookupFunction(0x10D450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1412D0u; }
        if (ctx->pc != 0x1412D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiMemInit_0x10d450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1412D0u; }
        if (ctx->pc != 0x1412D0u) { return; }
    }
    ctx->pc = 0x1412D0u;
    // 0x1412d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1412d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1412d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1412d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1412d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1412D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1412DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1412D8u;
            // 0x1412dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1412E0u;
}
