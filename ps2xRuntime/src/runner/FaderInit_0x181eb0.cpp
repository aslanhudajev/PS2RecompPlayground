#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: FaderInit
// Address: 0x181eb0 - 0x181f14
void FaderInit_0x181eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("FaderInit_0x181eb0");
#endif

    ctx->pc = 0x181eb0u;

    // 0x181eb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x181eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x181eb4: 0x3c02c380  lui         $v0, 0xC380
    ctx->pc = 0x181eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50048 << 16));
    // 0x181eb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x181eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x181ebc: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x181ebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x181ec0: 0xc42ea330  lwc1        $f14, -0x5CD0($at)
    ctx->pc = 0x181ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294943536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x181ec4: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x181ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x181ec8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x181ec8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x181ecc: 0x3c02c360  lui         $v0, 0xC360
    ctx->pc = 0x181eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50016 << 16));
    // 0x181ed0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x181ed0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x181ed4: 0xc0607c8  jal         func_181F20
    ctx->pc = 0x181ED4u;
    SET_GPR_U32(ctx, 31, 0x181EDCu);
    ctx->pc = 0x181ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181ED4u;
            // 0x181ed8: 0x2484b5f0  addiu       $a0, $a0, -0x4A10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F20u;
    if (runtime->hasFunction(0x181F20u)) {
        auto targetFn = runtime->lookupFunction(0x181F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181EDCu; }
        if (ctx->pc != 0x181EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x181f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181EDCu; }
        if (ctx->pc != 0x181EDCu) { return; }
    }
    ctx->pc = 0x181EDCu;
    // 0x181edc: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x181edcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x181ee0: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x181ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
    // 0x181ee4: 0xc42ea330  lwc1        $f14, -0x5CD0($at)
    ctx->pc = 0x181ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294943536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x181ee8: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x181ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x181eec: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x181eecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x181ef0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x181ef0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x181ef4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x181ef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x181ef8: 0xc0607c8  jal         func_181F20
    ctx->pc = 0x181EF8u;
    SET_GPR_U32(ctx, 31, 0x181F00u);
    ctx->pc = 0x181EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181EF8u;
            // 0x181efc: 0x2484b600  addiu       $a0, $a0, -0x4A00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F20u;
    if (runtime->hasFunction(0x181F20u)) {
        auto targetFn = runtime->lookupFunction(0x181F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181F00u; }
        if (ctx->pc != 0x181F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x181f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181F00u; }
        if (ctx->pc != 0x181F00u) { return; }
    }
    ctx->pc = 0x181F00u;
    // 0x181f00: 0xc060718  jal         func_181C60
    ctx->pc = 0x181F00u;
    SET_GPR_U32(ctx, 31, 0x181F08u);
    ctx->pc = 0x181F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181F00u;
            // 0x181f04: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181C60u;
    if (runtime->hasFunction(0x181C60u)) {
        auto targetFn = runtime->lookupFunction(0x181C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181F08u; }
        if (ctx->pc != 0x181F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderFuncSet_0x181c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181F08u; }
        if (ctx->pc != 0x181F08u) { return; }
    }
    ctx->pc = 0x181F08u;
    // 0x181f08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x181f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x181F0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181F0Cu;
            // 0x181f10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x181F14u;
}
